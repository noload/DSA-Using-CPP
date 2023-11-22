#include<iostream>
using namespace std;
bool isPowOf2(int n){
    if (n==0){
        return false;
    }
    while (n != 1)
    {
        if (n % 2 != 0)
        {
           return false;
        }
        n=n / 2;
        
    }
    return true;
    

}

void isPowOfTwo(int n){//this function uses to remove last set bit and in pow of 2 there only one set bit if we remove that set bit result will be zero if not thenit is not pow of 2
    if(n == 0){
        cout << "No";
    }
    if ((n & (n - 1)) == 0){
        cout << "Yes";
    }else{
        cout << "No";
    }
}

int main(){
    cout << isPowOf2(4);
    isPowOfTwo(4);
}