#include<iostream>
using namespace std;
bool kthBit(int n,int k){
    if (n & (1 << (k - 1) ) != 0){
        return true;
    }
    return false;
}

void kthbit(int n, int k){
    if ((n >> (k-1)) & 1 == 1)
    {
        cout << "Yes" ;        /* code */
    }
    else
    {
        cout << "No";
    }
    
    
}
int main(){
    int n=5;
    int k=3;
    cout << kthBit(n,k) << " ";
    kthbit(5,3);
}