// Leader is a element in array which has more greater element to its right 

#include<iostream>
using namespace std;
void findLeader(int arr[],int n){
    int leaderEle = arr[n-1];
    cout << leaderEle << " ";
    for (int i = n-2; i >=0; i--)
    {
        if (arr[i] > leaderEle)
        {
            cout << arr[i] << " ";
            leaderEle = arr[i];    /* code */
        }
           
    }
    

}

int main(){
    // int arr[]={1,2,3,4,5,6};
    int arr[]={5,4,3,2,1};
    findLeader(arr,5);
}