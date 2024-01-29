#include<iostream>
using namespace std;
int maxSum(int arr[],int n,int k){
int max_sum=INT16_MIN;
int cur_sum=0;
for (int i = 0; i < k; i++)
{
    cur_sum=cur_sum+arr[i];

}
max_sum =max(max_sum,cur_sum);
for (int i = k; i < n; i++)
{
    cur_sum+=arr[i] - arr[i - k];
    max_sum = max(max_sum,cur_sum);
}

return max_sum;
}

int main(){

    int arr[8]={2,4,-10,9,2,9,10,1};
    int n=8;
    int k=3;
    cout << maxSum(arr,n,k);

}