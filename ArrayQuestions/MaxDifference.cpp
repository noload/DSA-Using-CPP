#include<iostream>
using namespace std;

// max Difference in array where j > i ;
int maxDifference(int arr[],int n){
    int res = arr[1] - arr[0];
    int minValue = arr[0];
    for (int i = 1; i < n; i++)
    {
        res=max(res,arr[i] -  minValue);
        minValue=min(minValue ,arr[i]);
    }
    return res;
    
}


int main(){
    int arr[]={1,2,3,42,2,4,5,1};
    cout << maxDifference(arr,8);
}