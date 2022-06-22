#include <bits/stdc++.h>
using namespace std;
char tolower(char s){
    if(s>='a' && s<='z'){
        return s;
    }
    else{
        char temp= s -'A' +'a';
        return temp;
    }
}
bool checkPalindrome(string s)
{     int st = 0;
      int e = s.length()-1;
    while(st<=e) {
        if (isalnum(s[st]) == 0)

           st++;

       else if (isalnum(s[e]) == 0)

           e--;
        else if(tolower(s[st]) != tolower(s[e]))
        {
            return 0;       
        }
        else{
            st++;
            e--;
        }
    }
    return 1;
}