#include <bits/stdc++.h>
using namespace std;

void print(int number, int times)
{
    for (int i = 1; i <= times; i++)
    {
        cout << number << " ";
    }
}

int main()
{

    int n;
    cin >> n;
    vector<int> vec(n);
    int one = 0;
    for (auto &x : vec)
    {
        cin >> x;
        one += x == 1;
    }
    int two = n - one;
    if (two)
    {
        print(2, 1);
    }
    two -= 1;
    if (one)
    {
        print(1, 1);
    }
    one -= 1;
    if (two)
    {
        print(2, two);
    }
    if (one)
    {
        print(1, one);
    }

    return 0;
}