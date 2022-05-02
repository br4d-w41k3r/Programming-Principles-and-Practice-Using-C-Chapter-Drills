#include <std_lib_facilities.h>
//ADDD FOR LOOP TO ALL DRILLS!!!!!!!!!!

// Chapter 9 Drill 5
// Version 9.7.4

class Date {
public:
    enum Month {
        jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec=12
    };

    Date(int y, Month m, int d);// check for valid date and initialize
    int day() const;            // const member: can't modify the object
    Month month() const;        // const member: can't modify the object
    int year() const;           // const member: can't modify the object

    void add_day(int n);        // non-const member: can't modify the object
    void add_month(int n);      // non-const member: can't modify the object
    void add_year(int n);       // non-const member: can't modify the object
private:
    int y;                      // year
    Month m;                    // month
    int d;                      // day of month
};

// Constructor definitions
Date::Date(int yy, Month mm, int dd)
    : y(yy), m(mm), d(dd)
{
    // check for valid date and initialize
    if ((dd > 31 || dd < 1) || (mm > 12 || mm < 1) || yy < 0)
        error("invalid date");
}

// Member functions to return day, month and year definitions
int Date::day() const
{
    return d;
}

Date::Month Date::month() const
{
    return m;
}

int Date::year() const
{
    return y;
}

// add_day, add_month, and add_year member function definitions
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
void Date::add_month(int n)
{
    if (n < 0)
        error("negative number");
    for(int i = 0; i < n; i++) {
        if (m == dec && n >= 1) {
            m = Month(jan);
            y++;
        }
        else
        m = Month(m + 1);
    }
}
void Date::add_year(int n)
{
    y = y + n;
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
    Date today(1978, Date::Month::dec, 25);

    // define a Date called tomorrow with today's values copied into  it
    // and increasing its day by 1
    Date tomorrow(today);
    tomorrow.add_day(1);
    cout << "Today is " << today << '\n';
    cout << "Tomorrow  is " << tomorrow << '\n';
}
