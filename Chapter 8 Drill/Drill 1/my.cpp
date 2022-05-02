#include "my.h"
#include "std_lib_facilities.h"

int foo;

// function to print foo value
void print_foo()
{
    cout << foo;
}

// function to print value
void  print(int i)
{
    cout << i;
}

//function to keep the window open
void keepWindowOpen()
{
 char cc;
 cout << "\nPress any key to quit: ";
 cin >> cc;
}
