#include<iostream>
using namespace std;
void MinOfTwo(int a, int b){
    if(a>b) cout << a << " is greatest";
    else if (b>a) cout << b << " is greatest";
    else cout << "Both are equal";
}
int main(){
    MinOfTwo(20,20);
}