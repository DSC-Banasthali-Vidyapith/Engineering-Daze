// REVERSE A STRING IN C++

#include <bits/stdc++.h>
using namespace std;
void reverseString(string &s)
{
    for (int i = 0; i < s.size() / 2; i++)
        swap(s[i], s[s.size() - i - 1]);
}
int main()
{
    string s;
    cout<<"Enter the String:";
    cin >> s;
    reverseString(s);
    cout<<"The Reversed String is:";
    cout << s << endl;
    return 0;
}