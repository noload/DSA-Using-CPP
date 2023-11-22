#include<iostream>
using namespace std;
int missingNumber(int arr[],int count){
    int result=0;
    for (int i = 1; i <= count+1; i++)
    {
        // cout << result << " ";
        result= result ^  i;
    }

    for (int i = 0; i < count; i++)
    {
        result=result ^ arr[i];
    }
    return result;
    
}
int main(){

    int a[5]={1,2,3,5,6};
    cout << missingNumber(a,5);
}