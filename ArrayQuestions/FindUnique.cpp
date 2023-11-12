#include<iostream>
using namespace std;
int findUnique(int arr[],int size){
    int ans =  0;
    for (int i = 0; i < size; i++)
    {

        ans=ans ^ arr[i];
        /* code */
    }
    return ans;
    
}

int main(){

    int unique[5]={2,3,4,2,3};
    int uniEle=findUnique(unique,5);
    cout << "Unique element is " << uniEle << endl;
}