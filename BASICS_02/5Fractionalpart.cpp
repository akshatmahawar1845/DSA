// #include<iostream>
// using namespace std;
// int main(){
//     float x;
//     cout << "Enter a decimal number :";
//     cin >> x;
//     int y = (int)x;
//     float z = (float)y;
//     x = x - z;
//     cout << x;
// }

#include<iostream>
using namespace std;
int main(){
    float x; //7.2
    cout << "Enter a number : ";
    cin >> x;
    int n = (int)x; //7
    if(n<0) n = n - 1;
    float z = (float)n; //convert to float
    z = x-n;
    cout << z;


}