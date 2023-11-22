#include<iostream>
using namespace std;
int sqrt(int n){
    int s = 0;
    int e = n;
    int ans=0;
    int mid = (s + e)/ 2;
    while (s<e)
    {
        if((mid * mid) == n){
            ans= mid;
        }
        if((mid * mid) > n){
            e=mid - 1;
        }else{
            ans=mid;
            s=mid + 1;
        }
        mid= (s + e) / 2;
    }
    return ans;
    
    

}
int main(){
    cout << sqrt(64);
}