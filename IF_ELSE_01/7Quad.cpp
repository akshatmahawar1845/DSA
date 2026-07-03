#include<iostream>
using namespace std;
int main(){
    int x,y;     // x axis and y axis
    cout << "Enter x axis :";
    cin >> x;

    cout << "Enter y axis :";
    cin >> y;


    if(x>0 && y>0) cout <<"1st quad";
    else if(x<0 && y>0) cout <<"2nd quad";
    else if(x<0 && y<0) cout <<"3rd quad";
    else if(x>0 && y<0) cout <<"4th quad";
    else cout<<"origin";
}