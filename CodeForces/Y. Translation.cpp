#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    string s, t;
    cin >> s >> t;

    int i = 0;
    int j = t.size() - 1;
    reverse(t.begin(), t.end());
   
   cout << (s == t ? "YES" : "NO") << endl;
    return 0;
}
