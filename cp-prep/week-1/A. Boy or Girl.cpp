#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<char> se;
    string s;
    cin >> s;
    for (char c : s)
    {
        se.insert(c);
    }
    cout << (se.size() % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!") << endl;

    return 0;
}