#include <iostream>
using namespace std;

void change(int &ptr)
{

    ptr = 10;
}

int main()
{

    int a = 5;
    cout << a;
    change(a);
    cout << a;
    return 0;
}