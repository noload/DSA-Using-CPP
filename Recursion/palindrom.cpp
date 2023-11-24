#include<iostream>
using namespace std;
bool isPalindrome(string &str,int s,int e){
    if(s >= e){
        return true;
    }
    return str[s]== str[e] && isPalindrome(str,s++,e--);
}

int main(){
    string name="aba";
    
    cout  << isPalindrome(name,0,(name.length()) - 1);
}