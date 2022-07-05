#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        s.push(ch);
    }
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
    return 0;
}