#include <iostream>
using namespace std;
void solve(string &str, int s, int e)
{
    if (s > e)
    {
        return;
    }
    swap(str[s], str[e]);
    s++;
    e--;
    solve(str, s, e);
}

string reverseString(string str)
{
    int e = str.length() - 1;
    solve(str, 0, e);
    return str;
}