#include<iostream>
#include<cmath>
#define PI 3.1416 // an alternative for 'const double'
using namespace std;

int choice; // selection 
float area; // everything
float base, height; // triangle
float radius; // circle
float side; // square

void computeTriangle() {
    area = 0.5 * base * height; 
}

void computeSquare() {
    area = pow(side, 2); 
}

void computeCircle() {
    area = PI * (pow(radius, 2)); 
}

void mainMenu() {
    cout << "\nThis program lets you compute the area of a circle (1), a square(2), or a triangle(3)."; 
    cout << "\nEnter your selection: "; 
    cin >> choice; 
    
    switch(choice) {
        case 1: {
            cout << "Enter the radius: "; 
            cin >> radius; 
            computeCircle(); 
            cout << "Area = " << area << endl; 
            break; 
        }
        case 2: {
            cout << "Enter the sides: "; 
            cin >> side; 
            computeSquare(); 
            cout << "Area = " << area << endl; 
            break; 
        }
        case 3: {
            cout << "Enter the base: "; 
            cin >> base; 
            cout << "Enter the height: "; 
            cin >> height; 
            computeTriangle(); 
            cout << "Area =" << area << endl; 
            break; 
        }
        default: {
            cout << "Invalid number."; 
            break; 
        }
    }
}

int main () {
    while(true) {
        mainMenu(); 
    }
    return 0; 
}
