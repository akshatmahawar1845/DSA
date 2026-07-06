#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout << "Enter a number :";
    cin >> n;
    for(int i = 2; i<=sqrt(n); i++){
        if(n%i==0) {
            cout << "Composite number";
            break;
        }
    }
}