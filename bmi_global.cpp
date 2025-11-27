#include<iostream>
#include<cmath>
#include<string>
using namespace std;

double cm, meters, kg, bmi; 
string category; 

void convertToMeters() {
    meters = cm / 100;     
}

void computeBMI () {
    bmi = kg / (meters*meters); 
}

void determineBMI () {
    if (bmi < 18.5) {
        category = "Category: Underweight"; 
    }
    else if (bmi < 24.9) {
        category = "Category = Normal"; 
    }
    else if (bmi < 29.9) {
        category = "Category = Overweight"; 
    }
    else {
        category = "Category = Obese"; 
    }
}

int main () {
    cout << "Enter your height in centimeters: "; 
    cin >> cm; 
    cout << "Enter your weight in kilograms: "; 
    cin >> kg; 
    
    convertToMeters(); 
    computeBMI(); 
    determineBMI(); 
    
    cout << "\nYour BMI is " << bmi << "." << endl;
    cout << category << endl; 
    return 0; 
}
