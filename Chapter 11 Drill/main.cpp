#include "std_lib_facilities.h"

using namespace std;

inline ios_base& general(ios_base& b)
{
    b.setf(ios_base::fmtflags(0),ios_base::floatfield);
    return b;
}
int main()
{
//    int birth_year = 1997;
//    cout << showbase << dec << birth_year << '\t' << "(decimal)" << endl
//         << hex << birth_year << '\t' << "(hexadecimal)" << endl
//         << oct << birth_year << '\t' << "(octal)" << endl;
//    cout.unsetf(ios::oct);
//    cout << 24 << endl;
//    int a, b, c, d;
//    cin >> a >> oct >> b >> hex >> c >> d;
//    cout << a << '\t' << b << '\t' << c << '\t' << d << '\n';
//    // the first input is read in as a decimal number
    // the second input is read in as a octal number
    // the third and forth input are read in as hexadecimal numbers;
//    cout << general << 1234567.89 << endl
//         << fixed << 1234567.89 << endl
//         << scientific << 1234567.89 << endl;
    // using the general stream function the scientific
    // output form presents the user wit the most accurate representation
    // with a default precision of 6 digtis

    cout << setw(12) << "last name" << setw(6) << "|" << setw(15) << "first name" << setw(6) << "|"
    << setw(20) << "telephone number" << setw(6) <<  "|" << setw(24) << "email address" << setw(12) <<  "|\n";

    cout << setw(12) << "Granger" << setw(6) << "|" << setw(15) << "Hamilton" << setw(6) << "|"
    << setw(20) <<  3248748943 << setw(6) << "|" << setw(24) << "hammy@email.com" << setw(12) << "|\n";

    cout << setw(12) << "Willmington" << setw(6) << "|" << setw(15) << "Dave" << setw(6) << "|"
    << setw(20) <<  7898437234 << setw(6) << "|" << setw(24) << "davy@email.com" << setw(12) << "|\n";

    cout << setw(12) << "Savage" << setw(6) << "|" << setw(15) << "Julius" << setw(6) << "|"
    << setw(20) <<  6765746577 << setw(6) << "|" << setw(24) << "jj@email.com" << setw(12) << "|\n";

    cout << setw(12) << "Clark" << setw(6) << "|" << setw(15) << "Kent" << setw(6) << "|"
    << setw(20) <<  1234567893 << setw(6) << "|" << setw(24) << "superman@email.com" << setw(12) << "|\n";

    cout << setw(12) << "Bunny" << setw(6) << "|" << setw(15) << "Buggs" << setw(6) << "|"
    << setw(20) <<  8986754531 << setw(6) << "|" << setw(24) << "hopz@email.com" << setw(12) << "|\n";
}
