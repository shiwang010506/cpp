//Write a program that: Takes n Takes n integers into an array Finds and prints the maximum element.
#include<iostream>
using namespace std;

int main() {
    int n;
    
    cout<< "Enter the size of array: ";
    cin>> n;

    int arr[n];
    int max= arr[0];

    cout << "Enter the elements: ";
    cout << "\n";
    for(int i = 0; i< n; i++) {
        cin>> arr[i];
        if(max < arr[i]) {
            max = arr[i];
        }

    }
    cout << "Maximum is: " << max;
    return 0;


}