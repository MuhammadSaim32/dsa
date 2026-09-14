#include <bits/stdc++.h>
using namespace std;

string toLowerStr(string s)
{
    for (char &c : s)
        c = tolower(c);

    return s;
}

int main()
{

    string s1, s2;
    cin >> s1 >> s2;
    if (toLowerStr(s1) < toLowerStr(s2))
    {
        cout << "-1";
    }
    else if (toLowerStr(s1) > toLowerStr(s2))
    {
        cout << "1";
    }
    else
    {
        cout << "0";
    }

    return 0;
}