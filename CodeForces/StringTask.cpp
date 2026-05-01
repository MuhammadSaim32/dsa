#include <iostream>
using namespace std;

bool isVowel(char c)
{
    char Vowels[] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u', 'y', 'Y'};
    for (auto val : Vowels)
    {
        if (c == val)
        {
            return true;
        }
    }
    return false;
}

int main()
{

    string s;
    cin >> s;
    string witoutVowels = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (!isVowel(s[i]))
        {
            witoutVowels += '.';
            witoutVowels += tolower(s[i]);
        }
    }
    cout << witoutVowels;
    return 0;
}
