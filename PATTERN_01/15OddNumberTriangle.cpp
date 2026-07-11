#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number of rows :";
    cin >> n;
    for(int i = 1; i <= n; i++){
        int odd = 1;     // it becomes 1 after 1 completation
        for(int j = 1; j <= i; j++){
        cout << odd << "  ";
        odd += 2;
        }
        cout << endl;
    }
}