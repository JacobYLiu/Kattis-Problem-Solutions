#include <iostream>
using namespace std;


int main() {
    int base[] = {1,1,2,2,2,8}; // the numbers for the pieces in the set
    for (int i = 0; i<6; ++i){ // literating the list of 6 numbers 
        int input;
        cin >> input; // user enters an array of 6 numbers in order K, Q, R, B, K, and P
        cout << (base[i] - input) << + " "; // just subtracting the constants with the input and print out the results in the console.
    } 
}
