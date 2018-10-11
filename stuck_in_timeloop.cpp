#include <iostream>
using namespace std;

int main()  {
    int lineNum;
    string magic = " Abracadabra\n";
    cin >> lineNum; // the number of lines that the wizard wants us to print out + Abracadabra.
    for(int i = 1; i <= lineNum; ++i) {
        cout << i << magic; // used lineNum earlier, but realized that its best to use i because it's increasing in the for loop
    }
}
