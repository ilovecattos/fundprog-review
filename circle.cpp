#include<iostream> 
#include<cmath> 
using namespace std;

double computeArea(double radius) {
    double area; 
    const double pi = 3.1416; 
    area = pi * radius * radius; 
    return (area); 
}

int main () {
    double area, radius; 
    cout << "Please enter the radius of the circle: "; 
    cin >> radius; 
    area = computeArea(radius);
    cout << "The area of the circle is " << area << "." << endl; 
    return 0; 
}
