/*
Step 1: Add a function which converts centimeters to metres (m = cm / 100). 
Step 2: Add a function that calculatees the BMI (BMI = weight(kg) / height (m)^2). 
Step 3: Ask the user's height in centimetres. 
Step 4: Ask the user's weight in kilograms. 
Step 5: The hard part; do the conversion and calculation. 
Step 6: Show the result, the hardest part. 
*/

#include<iostream>
#include<cmath> 
using namespace std;

double cmToMeters(double cm) {
    return cm / 100; 
}

double calculateBMI(double weightKg, double heightM) {
    return weightKg / pow(heightM, 2); 
}

int main () {
    double heightCm, weightKg; 

    cout << "Enter your height in centimeters: "; 
    cin >> heightCm; 
    cout << "Enter your weight in kilograms: "; 
    cin >> weightKg; 
    
    double heightM = cmToMeters(heightCm); 
    double bmi = calculateBMI(weightKg, heightM); 
    cout << endl; 
    cout << "Your height in meters is " << heightM << "." << endl; 
    cout << "Your weight in kilograms is " << weightKg << "." << endl; 
    cout << "Your BMI is " << bmi << "." << endl; 
    return 0; 
}
