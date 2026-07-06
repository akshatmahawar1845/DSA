#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number :";
    cin >> n;
    int count;
    if(n==0) count = 1;
    else count = 0;
    while(n!=0){
        n /= 10;
        count++;
    }
    // if(n==0) cout <<"1";
    cout << count;
}