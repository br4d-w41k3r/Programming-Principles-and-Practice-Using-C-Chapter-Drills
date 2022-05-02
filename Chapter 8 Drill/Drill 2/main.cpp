#include <iostream>
#include <std_lib_facilities.h>



// int variables
swap_v(int a, int b)
{
    int temp;
    temp = a,
    a = b;
    b = temp;
    cout << a << '\t' << b << '\n';
}

// int references variables
swap_r(int& a, int& b)
{
    int temp;
    temp = a,
    a = b;
    b = temp;
    cout << a << '\t' << b << '\n';
}

// immutable references
swap_cr(const int& a, const int& b)
{
    int temp;
    int temp2;
    temp = a,
    temp2 = b;
    swap_r(temp, temp2);
}

void keepWindowOpen()
{
    char cc;
    cout << "Press any key to quit: ";
    cin >> cc;
}

int main()
{
    int x = 7;
    int y = 9;
    swap_r(x,y);
    swap_v(7,9);
    const int cx = 7;
    const int cy = 9;
    swap_cr(cx, cy);
    swap_v(7.7,9.9);
    double dx = 7.7;
    double dy = 9.9;
    swap_v(dx,dy);
    swap_cr(dx,dy);
    keepWindowOpen();


}
