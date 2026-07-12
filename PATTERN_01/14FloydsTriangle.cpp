#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of rows :";
    cin >> n;
    int sol = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << sol++ << " ";
        }
        cout << endl;
    }
}