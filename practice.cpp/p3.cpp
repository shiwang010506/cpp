//Takes an integer n as input Takes n integers from the user.Prints the sum of all the integers.

#include<iostream>
using namespace std;

int main() {
    int n;
    int x;
    int sum = 0;
    

    cin >> n;

    for(int i = 1; i<= n; i++) {
        
        cout << "enter no: ";
        cin >> x;
        sum = sum + x;
    }
    
    cout << sum;
    return 0;

}