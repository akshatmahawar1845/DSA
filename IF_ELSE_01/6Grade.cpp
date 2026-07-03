#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter grade :";
    cin >> n;
    if(n>=81){
        cout << "Very good";
    }

    else if(n>=61){
        cout << "Good";

    }

    else if(n>=41){
        cout << "Average";
    }

    else{
        cout <<"Fail";
    }
}