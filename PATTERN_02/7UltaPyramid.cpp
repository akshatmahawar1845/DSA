#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter rows :";
    cin >> n;
    int nst = 2*n-1;
    int nsp = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= nsp; j++){
            cout << "  ";
        }
        for(int j = 1; j <= nst; j++){
            cout << "* ";
        }
        cout << endl;
        nst -= 2;
        nsp += 1;
        }
        
    }