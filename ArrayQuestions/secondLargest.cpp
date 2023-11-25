#include<iostream>
using namespace std;

int getLargest(int arr[],int n){

    int res=0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i]>arr[res])
        {
            res = i;
        }
        
    }
    return res;
    

}

// using Naive Approch  Time Complexity On(n^2)
int secondLargest(int arr[],int n){
    int largest=getLargest(arr,n);
    int res=-1;
    for (int i = 0; i < n; i++)
    {
        if(arr[largest] != arr[i]){
            if (res==-1)
            {
               res=i;
            }
            else if (arr[i]>arr[res])
            {
                res=i;
            }
            
            
        }
   
    }
         return res;

}


// Efficient Approch
int SecondLargest(int arr[],int n){
    int res=-1;
    int largest=0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i]>=arr[largest])
        {
            res=largest;
            largest=i;
        }else
        {
            if (res== - 1)
            {
                res = i;
            }else if(arr[i]>arr[res])
            {    
                res = i;
            }
            
        }
        
        
    }
    return res;
    
}


int main(){
    int even[]={2,28,20,3,3,44,66,22,50};
    int n=9;
    cout << getLargest(even,n);
    cout << secondLargest(even,n);

    cout<<SecondLargest(even,n);;

}