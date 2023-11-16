#include<iostream>
#include<vector>
using namespace std;
int peekInMountainArray(vector<int>&arr){
    int s = 0;
    int e = arr.size() - 1;
    int mid= (s + e) / 2;
    while (s<e)
    {
        if(arr[mid]<arr[mid +  1]){
            s=mid+1;
        }else{
            e=mid;
        }
        mid= (s + e) / 2;
        /* code */
    }
    return s;

}


int main(){

vector<int> arr={1,3,5,7,1,4,2};
int peekEle = peekInMountainArray(arr);
cout << arr[peekEle] << endl ;

}