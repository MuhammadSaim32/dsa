#include <bits/stdc++.h>
using namespace std;

string toUpperStr(string s)
{
    for (char &c : s)
        c = toupper(c);

    return s;
}

string toLowerStr(string s)
{
    for (char &c : s)
        c = tolower(c);

    return s;
}

int main()
{
    string s;
    cin >> s;
    int count = 0;
    for (char c : s)
    {
        if (int(c) < 91)
            count++;
    }

    cout << (count > s.size() / 2 ? toUpperStr(s) : toLowerStr(s)) << endl;
    return 0;
}