#include <std_lib_facilities.h>

// Chapter 9 Drill 2
// Version 9.4.2

// simple Date
// guarantee initialization with constructor
// provid some notational convenience
struct Date {
    int y, m, d;                            // year, month, day
    Date(int y, int m, int d);              // check for valid date and initialize
    void add_day(int n);                    // increase the Date by n days
};

// Constructor definition
Date::Date(int yy, int mm, int dd)
    : y(yy), m(mm), d(dd)
{
    // check for valid date and initialize
    if ((dd > 31 || dd < 1) || (mm > 12 || mm < 1) || yy < 0)
        error("invalid date");
}

// increase the Date by n days
void Date::add_day(int n)
{
    for(int i = 0; i < n; i++) {
        if (d == 31) {
            d = 1;
            m += 1;
            if (m >= 12) {
                m = 1;
                y++;
            }
        }
        else
            d += 1;
    }
}

ostream& operator<<(ostream& os, Date dd)
{
    return os << '(' << dd.y << ','
              << dd.m << ',' << dd.d
              << ')' << endl;
}

int main()
{
    // initialize Date called today to June 25, 1978
    Date today(1978,6,25);

    // Define a Date called tomorrow and give it a
    // value by copying today into it and increasing it
    // by one day
    Date tomorrow = today;
    tomorrow.add_day(1);

    cout << "Today is " << today << '\n';
    cout << "Tomorrow is " << tomorrow << '\n';


}
