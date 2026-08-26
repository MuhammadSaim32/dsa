#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c)
{
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y';
}

int main()
{

    string s;
    cin >> s;
    string ans ;
    for (char &c : s)
    {
        if (!isVowel(c))
        {
            ans += '.';
            ans += tolower(c);
        }
    }

    cout << ans << endl;
    return 0;
}