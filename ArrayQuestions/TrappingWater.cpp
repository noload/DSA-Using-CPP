#include<iostream>
using namespace std;

int getWater(int arr[],int n){
    int res=0;
    for (int i = 1; i < n -1; i++)
    {
        int l_max=arr[i];
        for (int j = 1; j < i; j++)
        {
            l_max = max(arr[j],l_max);
        }

        int r_max=arr[i];
        for (int  j= i+1; j < n - 1; j++)
        {
            r_max=max(r_max,arr[j]);
        }
        res+=(min(l_max,r_max)- arr[i]);
        
        
    }
    return res;
}


int GetWater(int arr[],int n){
    int l_max[n];
    int r_max[n];
    int res=0;

    l_max[0]=arr[0];
    for (int i = 1; i < n; i++)
    {
        l_max[i]=max(arr[i],l_max[i - 1]);
    }

    r_max[n-1]=arr[n-1];
    for (int i = n-2; i >=0; i--)
    {
        /* code */
        r_max[i]=max(arr[i],r_max[i+1]);
    }
    
    for (int i = 1; i < n-1; i++)
    {
        res+=(min(l_max[i],r_max[i]) - arr[i]);
    }
    
    
return res;
}

int main(){
    int arr[]={2,4,6,1,8,0,3};
    int n = 7;
    cout << getWater(arr,n);
        cout << GetWater(arr,n);

    
}