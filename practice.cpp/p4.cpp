//function that swaps two integers

#include<iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b; 
    b = temp;

}

int main() {
    int x = 10;
    int y = 20;

    cout<< "before swapping: " << x << " " << y;

    swap(x, y);

    cout<< "\n";

    cout << x;
    cout << " ";
    cout<< y;


}