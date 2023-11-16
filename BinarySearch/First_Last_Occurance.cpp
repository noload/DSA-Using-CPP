#include<iostream>
using namespace std;
int firstOccurance(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int ans=-1;
    int mid=(start + end)/2;
    while (start<=end)
    {
        if (arr[mid]==key)
        {
            end=mid-1;
            ans=mid;

        }else if (arr[mid]>key)
        {
            end=mid - 1;
            /* code */
        }else{
            start=mid + 1;
        }
        
        mid=(start + end)/2;
        
    }
    
    return ans;
}
int lastOccurance(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int ans=-1;
    int mid=(start + end)/2;
    while (start<=end)
    {
        if (arr[mid]==key)
        {
            start=mid+1;
            ans=mid;

        }else if (arr[mid]>key)
        {
            end=mid - 1;
            /* code */
        }else{
            start=mid + 1;
        }
        
        mid=(start + end)/2;
        
    }
    
    return ans;
}
int main(){
    int arr[12]={1,2,3,4,5,6,7,5,5,8,8,9};
    int first=firstOccurance(arr,12,5);
    cout << first << endl;
    int last=lastOccurance(arr,12,5);
    cout << last << endl;
}