#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        /* code */
        cout << arr[i] << " " ;
    }
    cout << endl;
    

}
void swapAlternate(int arr[], int size){

    for (int i = 0; i < size; i=i+2)
    {
        if(i+1 < size){
            swap(arr[i],arr[i+1]);
        }
   
    }
    

}
int main(){
    int arr[10]={3,5,7,9,12,44,66,22,20,10};
    cout << "before swaping";
    printArray(arr,10);

    swapAlternate(arr,10);
    cout << " After swaping";
    printArray(arr,10);
}