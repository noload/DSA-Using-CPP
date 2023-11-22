#include<iostream>
using namespace std;

//Naive Approch Time Complexity o(n^2)
int oddOccurance(int a[],int size){
    
    for (int i = 0; i < size; i++)
    {
         int count = 0;
        for (int j = 0; j < size; j++)
        {
            if(a[i] == a[j]){
                count+=1;
            }
        }
               if(count % 2!= 0){
                    return a[i];
               }
    }return -1;
    
}

//efficient approch time Complexity o(n)
int OddOccurance(int arr[],int size){
    int result=0;
    for (int i = 0; i < size; i++)
    {
        result=result ^ arr[i];
    }
    if(result > 0){
    return result;
    }
    return -1;

}


int main(){

    int a[8]={2,4,4,2,3,3,5,5};
    cout << oddOccurance(a,8);
    cout << OddOccurance(a,8);
}