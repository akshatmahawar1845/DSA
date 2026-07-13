#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter rows :";
    cin >> n;
    int spc = n-1;
    int str = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= spc; j++){
            cout << "  ";
        }
        for(int j = 1; j <= str; j++){
            cout << "* ";
        }
        cout << endl;
        spc -= 1;
        str += 2;
    }

    spc = 1;
    str = 2*n-3;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= spc; j++){
            cout << "  ";
        }
        for(int j = 1; j <= str; j++){
            cout << "* ";
        }
        cout << endl;
        spc += 1;
        str -= 2;
    }

}