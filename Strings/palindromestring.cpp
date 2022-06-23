#include <bits/stdc++.h>
using namespace std;
class Solution {
private:
bool valid(char ch){
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') ||(ch>='0' && ch<='9') ){
                return 1;
        }
     
                return 0;
}
char tolower(char ch){
    if((ch>='a' && ch<='z') ||(ch>='0' && ch<='9') ){
        return ch;
    }
    else{
        char temp= ch -'A' +'a';
        return temp;
    }
}
bool checkPalindrome(string s)
{     int st = 0;
      int e = s.length()-1;
    while(st<=e) {
    
       if(s[st] != s[e])
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
        
public:
bool isPalindrome(string s) {
        
     string temp = "";
        
        for(int j=0; j<s.length();j++) {   
            if(valid(s[j])) {
                temp.push_back(s[j]);
            }
        }
        
        //lowercase me kardo
        for(int j=0; j<temp.length(); j++) { 
            temp[j] = tolower(temp[j]);
        }
        
        //check palindrome
        return checkPalindrome(temp);
    }
};