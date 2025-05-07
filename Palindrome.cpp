#include <iostream>
using namespace std;

bool palindrome(string s)
{
    if (s[0] != s[s.length() - 1])
        return false;
    if (s.size() == 1 || s.size() == 0)
    {
        cout << "reached at mid;" << endl;
        return true;
    }
    s = s.substr(1, s.length() - 2);

    return palindrome(s);
}
int main()
{
    // Your code here
    string str;
    cout << "Enter String : ";
    cin >> str;
    bool ans = palindrome(str);

    cout << "Ans : " << ans;
    
    return 0;
}