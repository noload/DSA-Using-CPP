#include<iostream>
using namespace std;
void leftRotate(int arr[],int n){
    for (int i = 1; i < n; i++)
    {
        swap(arr[i-1],arr[i]);
    }
    
}

int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    cout << " Before swapping";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    leftRotate(arr,n);
    cout << " After swapping";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
}