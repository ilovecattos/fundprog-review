#include<iostream>
using namespace std; 

int main () {
	cout << "=== WELCOME TO MY WEBSITE! ===";
	cout << "\nGet to know me? Yes or no?";
	cout << "\nEnter your selection (in lowercase): "; 
	
	string choice;
	cin >> choice; 
	
	if (choice == "no") {
		cout << "Are you sure about that? \nYour progress might not be saved.";
	}
	else if (choice == "yes") {
		cout << "1. About me!"; //Click me!
		cout << "\n2. Criteria"; //Click me!
		cout << "\n3. Interests"; //Click me!
		cout << "\n4. Other"; //Click me!
		cout << "\n5. Social Media"; //Click me!
		
		cout << "\nEnter your selection: "; 
		int number; 
		cin >> number; 
		
		switch(number){
			case 1: {
				cout << "\nAyo, name's Tamamo! I go by any!";
				cout << "\nA very shy lesbian programmer...!"; 
				break;
			}
			case 2: {
				cout << "\nBYF: I'm socially awkward and I have low reading comprehension.";
				cout << "\nDNI: DNI Criteria, racist people, those Danganronpa fans.";
				break;
			}
			case 3: {
				cout << "\nFandoms I'm into!: \nSIGNALIS, Toaru Raildex, TYPE-MOON, Love Live!";
				cout << "\n\nFandoms I'm inactive in but still wanna talk about: \nHSR, Houseki no Kuni, Bandori, Twisted Wonderland"; 
				break;
			}
			case 4: {
				cout << "\nSongs: ";
				cout << "\nOn My Way, only my railgun, level 5-judgelight-, Snow Halation, MAZE TOWN"; 
				break;
			}
			case 5: {
				cout << "MY SOCIALS!! Contact me if problems occur: ";
				cout << "\nDiscord: @tameggoyaki. \nIG: @hakudooooriii \nGmail: elster512isgay@gmail.com"; 
				break;
			}
			default: {
				cout << "Invalid entry! Program terminating~";
				break;
			}
		}
	}
	else {
		cout << "Invalid entry."; 
		cout << "\nYou might lose your progress. ";
	}
	
	return 0;
}
