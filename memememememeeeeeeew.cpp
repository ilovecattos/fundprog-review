#include<iostream>
#include<string>
#include<cmath>
using namespace std;

string sign, birthstone;
int month, day; 

double a, b; 
int calcChoice = 0; 

double weightKg, heightM, bmi; 
string category; 

int menuChoice = 0; 

void showMenu() {
	cout << "\nHello and Welcome!"; 
	cout << "\n1. Sign and Birthstone"; 
	cout << "\n2. Calculator (basic)"; 
	cout << "\n3. BMI Calculator (metric only. no freedom units.)"; 
	cout << "\n4. Exit?"; 
	cout << "Enter your selection: \n> "; 
}

void sign_birthstone() {
	cout << "Enter the month of your birthday: "; 
	cin >> month; 
	cout << "Enter the day of your birthday: "; 
	cin >> day; 
	// Month validation
	if (month < 1 || month > 12) {
		cout << "Invalid month.";
	} else if (day < 1 || day > 31) {
		cout << "Invalid day."; 
	}
	// Other 
	if (month == 2 && day < 29) {
		cout << "February doesn't have a 30. "; 
	} 
	
	// Zodiac 
	if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) sign = "Aries"; 
    else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) sign = "Taurus"; 
    else if ((month == 5 && day >= 21) || (month == 6 && day <= 21)) sign = "Gemini"; 
    else if ((month == 6 && day >= 22) || (month == 7 && day <= 22)) sign = "Cancer"; 
    else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) sign = "Leo"; 
    else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) sign = "Virgo"; 
    else if ((month == 9 && day >= 23) || (month == 10 && day <= 23)) sign = "Libra"; 
    else if ((month == 10 && day >= 24) || (month == 11 && day <= 21)) sign = "Scorpio"; 
    else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) sign = "Sagittarius"; 
    else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) sign = "Capricorn"; 
    else if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) sign = "Aquarius"; 
    else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) sign = "Pisces"; 
    
    switch(month) {
    	case 1: birthstone = "Garnet"; break;
    	case 2: birthstone = "Amethyst"; break;
    	case 3: birthstone = "Aquamarine"; break; 
    	case 4: birthstone = "Diamond"; break; 
    	case 5: birthstone = "Emerald"; break;
    	case 6: birthstone = "Pearl"; break; 
    	case 7: birthstone = "Ruby"; break; 
    	case 8: birthstone = "Peridot"; break; 
    	case 9: birthstone = "Sapphire"; break; 
    	case 10: birthstone = "Opal"; break; 
    	case 11: birthstone = "Topaz"; break; 
    	case 12: birthstone = "Zircon"; break; 
    	default: birthstone = "Invalid month. "; break; 
	}
	
	cout << "Your zodiac sign is " << sign << " and your birthstone is " << birthstone << "." << endl; 
}

void calculator() {
	cout << "\nChoose an operation: "; 
	cout << "\n1. Addition (+)"; 
	cout << "\n2. Subtraction (-)"; 
	cout << "\n3. Multiplication (x)"; 
	cout << "\n4. Division (/)"; 
	cout << "\n0. Exit?"; 
	cin >> calcChoice; 
	
	cout << "Enter the first number: "; 
	cin >> a; 
	cout << "Enter the second number: "; 
	cin >> b; 
	
	switch (calcChoice) {
		case 1: {
			cout << "Result: " << a + b << endl; 
			break;
		}
		case 2: {
			cout << "Result: " << a - b << endl; 
			break;
		}
		case 3: {
			cout << "Result: " << a * b << endl; 
			break;
		}
		case 4: {
			cout << "Result: " << a / b << endl; 
 			break;
		}
		default: {
			cout << "Exiting...."; 
			break;
		}
	}	
}

void bmiCalc() {
	cout << "\nEnter your weight in kilograms (kg): "; 
	cin >> weightKg; 
	cout << "\nEnter your height in meters: "; 
	cin >> heightM; 
	
	if (bmi < 18.5) category = "Category: Underweight"; 
	else if (bmi < 24.9) category = "Category: Normal Weight"; 
	else if (bmi < 29.9) category = "Category: Overweight"; 
	else {
		category = "Category: Obese"; 
	}
	
	bmi = weightKg / pow(heightM, 2); 
	cout << "Your BMI is " << bmi << endl; 
	cout << "\n" << category << endl; 
}

int main () {
	do{
		showMenu(); 
		cin >> menuChoice;
		
		switch(menuChoice) {
			case 1: sign_birthstone(); break; 
			case 2: calculator(); break; 
			case 3: bmiCalc(); break; 
			case 4: cout << "See you next play!"; break;
			default: cout << "Invalid choice."; break; 
		}
	} while(menuChoice != 4); 
	
	return 0; 
		
}
