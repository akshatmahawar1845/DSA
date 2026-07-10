#include<iostream>
using namespace std;
int main(){
    int m;
    cout << "Enter side of a square :";
    cin >> m;
    for(int i = 1; i <= m; i++){
        for(int i = 1; i <= m; i++){
            cout << "* ";
        }
        cout << endl;
    }
}