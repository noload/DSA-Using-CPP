#include<iostream>
using namespace std;
int main(){
    int n=5;
    int row=1;
    char ch = 'A';
    while (row<=n)
    {
        int col=1;
        while (col<=n)
        {
            // char ch = 'A'+ row -1;
            cout << ch;
            ch = ch +1 ;
            col=col+1;
        }
        cout << endl;
        row=row + 1;
    }
    
}