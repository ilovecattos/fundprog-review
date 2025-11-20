#include<iostream>
#include<string>
using namespace std; 

int main () {
	string answer; 
	for (int i = 1; i <= 3; i++) {
		cout << "\nAre you gay? \n> "; 
		cin >> answer; 
		
		if (answer == "Yes" || answer == "yes") {
			cout << "\n\nCertified homosexual!" << endl;
			cout << "Let's kiss, get a room, and make out!" << endl; 
			return 0; 
		}  
		else {
			cout << "Oh...! " << (3 - i) << " live/s left...!" << endl; 
		}
	}
	
	cout << "\nYou're SECRETLY gay!" << endl; 
	cout << "Oooohhh...~ you're blushing internally..~!" << endl; 
	cout << "Whether you like it or not, let's kiss, date, and make out!" << endl; 
	return 0; 
}
