#include<iostream>
using namespace std;
#include<vector>
using namespace std;
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	int i = 0, j = 0;
    vector<int> ans;
    while(i<n && j<m) {
    
    if(arr1[i]==arr2[j])
    {
    	ans.push_back(arr1[i]);
        i++;
        j++;
    }
    else if (arr1[i] < arr2[j]) {
  		i++;
    }
    else
    {
    	j++;
    }
    
    }
    return ans;
}
int main(){
    vector<int> arr={1,2,3,4,5,6,7,8,9,10};
    vector<int> arr1={2,4,6,10};
    vector<int> ans =findArrayIntersection(arr,arr.size(),arr1,arr1.size());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
        /* code */
    }
    
}