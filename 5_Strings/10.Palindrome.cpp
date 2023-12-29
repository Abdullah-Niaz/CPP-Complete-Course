#include <iostream>
using namespace std;

int main()
{
    string s = "madam";
    string rev = "";
    int len = (int)s.length();
    rev.resize(len);
    for (int i = 0, j = len - 1; i < len; i++, j--)
    {
        rev[i] = s[j];
    }
    rev[len] = '\0';
    cout << "Palindrome: " << rev;
    return 0;
};