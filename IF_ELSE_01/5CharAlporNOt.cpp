#include<iostream>
using namespace std;
int main(){
    char ch;
    cout << "Enter a character :";
    cin >> ch;
    int x;
    x = int(ch);
    if((x>=65 && x<=90) || (x>=97 && x<=122)){
        cout << ch <<" is albhabet";
    }

    else cout << ch <<" is not alphabet";
}