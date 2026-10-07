//Write a C++ program that takes two integers and prints the larger number.

#include<iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two nos.";
    cin >> a >> b;

    if(a > b) {
        cout<< a;
    }else if(b>a) {
        cout<<b;
    }else
    cout<<"Nos are same";

}