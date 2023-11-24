#include<iostream>
using namespace std;
int sumOfDigits(int n,int sum){
    int digit = n % 10;
    if(n == 0){
        return sum;
    }
    sum=sum + digit;
    return sumOfDigits(n / 10,sum);
}
int main(){
    int n=8093;
    cout << sumOfDigits(n,0);
}