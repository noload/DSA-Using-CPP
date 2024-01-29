#include<iostream>
using namespace std;

vector<int> calculatePrefixSum(int arr,int n){
    int prefixSum[n];
    prefixSum[0]=arr[0];
    for (int i = 1; i < n; i++)
    {
        prefixSum[i]=prefixSum[i-1] + arr[i];
    }
    
    return prefixSum;

}
int main(){
    int arr[]={10,20,10,30,20};
    int n=5;
    int arr1[]=calculatePrefixSum(arr,n);
    cout << arr1;
}