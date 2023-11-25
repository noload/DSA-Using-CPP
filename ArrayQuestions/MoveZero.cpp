#include<iostream>
using namespace std;
void moveZeroEnd(int arr[],int n){
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]!=0)
        {
            swap(arr[count],arr[i]);
            count++;
        }
        
    }
    
}

int main(){
    int arr[]={2,3,41,0,3,0,0,1,0};
    int n =9;
    moveZeroEnd(arr,n);
    for ( int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
}