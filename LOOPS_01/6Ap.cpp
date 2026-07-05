#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number :";
    cin >> n;
    int a = 1; // ap = 1,3,5,7,9 upto n
    for(int i = 1; i <= n; i++){
        cout << a << " ";
        a+=3;
    }
}