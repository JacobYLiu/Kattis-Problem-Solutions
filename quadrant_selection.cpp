#include <iostream>
using namespace std;


int main() {
    // starting with origin
    int xcoord = 0;
    int ycoord = 0;
    cin >> xcoord;
    cin >> ycoord;
    
    if(xcoord > 0 && ycoord > 0) { // positive x and positive y coordinates
        cout << "1"; // Quadrant I
    }
    if(xcoord < 0 && ycoord > 0) { // negative x and positive y coordinates
        cout << "2"; // Quadrant II
    }
    if(xcoord < 0 && ycoord < 0) { // negative x and negative y coordinates
        cout << "3"; // Quadrant III
    }
    if(xcoord > 0 && ycoord < 0) { // positive x and negative y coordinates
        cout << "4"; // Quadrant IV
    }
 
    return 0;
}
