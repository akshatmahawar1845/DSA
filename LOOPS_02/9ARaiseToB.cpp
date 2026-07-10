#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number :";
    cin >> n; // 2
    int m;
    cout << "Enter power of a number :";
    cin >> m;  // 3
    int sol = 1;       // 2
    for(int i = 1; i <= m; i++){
        sol *= n;  // 2 * 2 (3 times)

    }
    cout << sol;
}