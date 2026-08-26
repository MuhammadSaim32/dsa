#include <iostream>
// #include<string>
using namespace std;

int main()
{

    int n;
    cin >> n;
    string s;
    cin >> s;
    int i = 0;
    int j = 1;
    int count = 0;
    while (j < n)
    {
        if (s[i] == s[j])
            count++;
        i++;
        j++;
    }
    cout << count << endl;

    return 0;
}