#include <std_lib_facilities.h>

// Chapter 9 Drill 3
// Version 9.7.1

// simple Date (use Month type)
class Date {
public:
    enum Month {
        jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec=12
    };

    Date(int y, Month m, int d);            // check for valid date and initialize
    void add_day(int n);
    Month month() {return m;}
    int day() {return d;}
    int year() {return y;}
private:
    int y;      // year
    Month m;    // month
    int d;      // day
};

// Constructor definition
Date::Date(int yy, Month mm, int dd)
    : y(yy), m(mm), d(dd)
{
    // check for valid date and initialize
    if ((dd > 31 || dd < 1) || (mm > 12 || mm < 1) || yy < 0)
        error("invalid date");
}

// Date add_day definition
void Date::add_day(int n)
{
    for(int i = 0; i < n; i++) {
        if (d == 31) {
            d = 1;
            m = Month(m + 1);
            if (m >= dec) {
                m = Month(jan);
                y++;
            }
        }
        else
            d += 1;
    }
}

// Date cout operator definition
ostream& operator<<(ostream& os, Date dd)
{
    return os << '(' << dd.year()
              << ',' << dd.month()
              << ',' << dd.day()
              << ')' << endl;
}

int main()
{
    // define a Date called today and initialize it to June 25, 1978
    Date today(1978, Date::Month::jun, 25);

    // define a Date called tomorrow with today's values copied into  it
    // and increasing its day by 1
    Date tomorrow(today);
    tomorrow.add_day(300);
    cout << "Today is " << today << '\n';
    cout << "Tomorrow  is " << tomorrow << '\n';
}
