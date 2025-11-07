#include<iostream>
using namespace std;

int main () {
	double finalGrade, equivalent; 
	bool loop = true;
	
	while (true) {
		cout << "\nPlease enter your final grade: "; 
		cin >> finalGrade;
		
		if (finalGrade >= 0.00 && finalGrade <= 69.49) equivalent = 5.00; 
		else if (finalGrade >= 69.50 && finalGrade <= 73.49) equivalent = 3.00;
		else if (finalGrade >= 73.50 && finalGrade <= 77.49) equivalent = 2.75; 
		else if (finalGrade >= 77.50 && finalGrade <= 80.49) equivalent = 2.50; 
		else if (finalGrade >= 80.50 && finalGrade <= 83.49) equivalent = 2.25; 
		else if (finalGrade >= 83.50 && finalGrade <= 87.49) equivalent = 2.00; 
		else if (finalGrade >= 87.50 && finalGrade <= 90.49) equivalent = 1.75; 
		else if (finalGrade >= 90.50 && finalGrade <= 93.49) equivalent = 1.50; 
		else if (finalGrade >= 93.50 && finalGrade <= 97.49) equivalent = 1.25; 
		else if (finalGrade >= 97.50 && finalGrade <= 100.00) equivalent = 1.00; 
		else {
			cout << "Invalid entry! Program Terminating~";
			loop = false; 
			return 1; 
		}
		cout << "\nYour equivalent grade is somewhere around " << equivalent << "." << endl; 
	}
}
