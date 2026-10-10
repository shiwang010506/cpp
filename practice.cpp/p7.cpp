//Take n integers and reverse the array without using another array.
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of an array: ";
    cin>> n;

    int arr[n];
    cout << "Enter the elements of array: ";
    cout << " ";
    for(int i= 0; i< n; i++) {
        cin>> arr[i];
    }
    

    cout<< "Reversed array: ";
    for(int i = n-1; i>=0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}