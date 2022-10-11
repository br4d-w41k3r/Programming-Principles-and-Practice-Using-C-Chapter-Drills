#include "std_lib_facilities.h"

// Chapter 10 Drill

// Define the data type Point that has two coordinate members x and y.
struct Point {
    int x, y;                           // Public data member for x and y coordinates
    Point()                             // Default Constructor
        : x(0), y(0) {}
    Point(int xx, int yy)               // Initialization Constructor
        : x(xx), y(yy) {}
};

void intro()
{
    cout << "Enter 7 (x,y) pairs using the \'(x,y)\' format \n"
         << "and replacing the x and y variable with numbers \n"
         << '\n';

}

// Definition of function for Point operator >> for inputing information
istream& operator>>(istream& is, Point& p)
{
    // Read input from user
    char ch1, ch2, ch3;
    int x, y;
    is >> ch1 >> x >> ch2 >> y >> ch3;
    // Check the format of the input
    if (ch1 != '(' || ch2 != ',' || ch3 != ')') {
        is.unget();
        is.clear(ios_base::failbit);
        return is;
    }
    p = Point(x,y);
    return is;
}

// Definition of function for Point operator << for outputting information
ostream& operator<<(ostream& os, Point& p)
{
    // Output format (x,y)
    os << '(' << p.x << ',' << p.y << ')';
    return os;
}

// Global vectors
vector<Point>original_points;
vector<Point>processed_points;

void print_entries()
{
    int i = 1;
    Point p;
    ofstream ofs("mydata.txt");

    while (i <= 7) {
        cout << i << endl;
        cin >> p;
        original_points.push_back(p);

        if(!cin) {
            error("format error");
        }
        else
            ++i;

    }
    for(int i = 0; i < original_points.size(); i++) {
        ofs << original_points[i] << endl;
    }
    ofs.close();
}
void process_and_validate()
{
    cout << "Validating entries...." << endl;
    //Read in coordinate points from file
    ifstream ifs("mydata.txt");
    if (!ifs) error("file does not exist");
    Point p;
    for(int i = 0; i < original_points.size(); ++i) {
        ifs >> p;

        // store points in a vector called processed_points
        processed_points.push_back(p);
    }
    //Print both vectors to screen and check if values differ
    for (int i = 0; i < processed_points.size(); ++i) {
        cout << i+1 << "." << endl;
        char ch1;
        if (original_points[i].x == processed_points[i].x && original_points[i].y == processed_points[i].y ) {
            cout << "original entry: " << original_points[i]
                 << " = "
                 << "file entry: " << processed_points[i] << endl;

        }
        else {
            cout << "original entry: " << original_points[i]
                 << " != "
                 << "file entry " << processed_points[i] << endl;
            error("Something is wrong");
        }
    }
}

int main()
{
    // Prompt the user to input seven (x,y) pairs
    // and store them in a vector of Points called original_points
    intro();
    print_entries();
    process_and_validate();
}

