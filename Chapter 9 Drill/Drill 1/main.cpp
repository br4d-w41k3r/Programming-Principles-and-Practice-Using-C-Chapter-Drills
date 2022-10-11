#include "std_lib_facilities.h"

// Chapter 9 Drill 1
// Version 9.4.1


// simple Date (too simple?)

struct Date {
    int y;  // year
    int m;  // month
    int d;  // day
};

// Define a Date called today
Date today;

// Define a Date called tomorrow
Date tomorrow;

void init_day(Date& day, int yy, int mm, int dd)
{
    day.y = yy;
    day.m = mm;
    day.d = dd;
    if ((day.d > 31 || day.d < 1) || (day.m > 12 || day.m < 1) || day.y < 0)
        error("invalid date");

}

void add_day(Date& td, Date& tm)
{
    tm.d = td.d + 1;
    tm.m = td.m;
    tm.y = td.y;
    if (td.d == 31){
        tm.m +=1;
        tm.d = 1;
    }
    if (td.m == 12 && td.d == 31) {
        tm.m = 1;
        tm.d = 1;
        tm.y += 1;
    }


}

ostream& operator<<(ostream& os, Date dd)
{
    os << '(' << dd.y
       << ',' << dd.m
       << ',' << dd.d
       << ')' << endl;
}

int main()
{
    // Initialize today to June 25, 1978
    init_day(today, 1978, 6, 25);

    // Give tomorrow a value by copying today into it and increasing
    // its day by one using add_day()
    add_day(today, tomorrow);

    cout << "Today is " << today << endl;
    cout << "Tomorrow is " << tomorrow << endl;




}
