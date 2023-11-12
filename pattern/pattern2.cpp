#include<iostream>
using namespace std;
int main(){

    int n;
    cout << "Enter the no of row  ";
    cin >> n;
    int row=1;
    while(row<=n){

        int col=0;
        // int value=row;
        while(col<row){
            cout << row-col ;
            // value=value + 1;
            col=col+1;
        }
        cout << endl;
        row=row+1;
    }
}