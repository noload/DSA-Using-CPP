#include<iostream>
using namespace std;

void subset(string str,string curr, int i=0){
    if(i==str.length()){
        cout << curr << " ";
      
        return;
    }
    subset(str,curr,i+1);
    subset(str,curr+str[i],i+1);
}

int main(){
    string s="abc";
    subset(s,"");
}