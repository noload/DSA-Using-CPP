#include<iostream>
using namespace std;

int countSetBit(int n){
    int count =0;
    while (n != 0)
    {
        if (n & 1 == 1){
            count = count + 1;
        }
       n = n >> 1; // right shift >> //left shift <<

    }
    return count;
    
}
int brianKernigamAlgorithm(int n){
    int count=0;
    while (n > 0)
    {
        n=n & (n - 1);
        count+=1;
    }
    return count;
    
}
int main(){
    int n=7;// 00000 ... 111
    cout << countSetBit(n) << " ";
    cout << "brianKernigamAlgorithm" << brianKernigamAlgorithm(7);
}