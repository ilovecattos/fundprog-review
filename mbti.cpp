#include<iostream>
#include<string>
using namespace std; 

int main () {
	int extrovert = 0, introvert = 0, sensing = 0, intuition = 0, thinking = 0, feeling = 0, judging = 0, perceiving = 0;
	string answer; 
	
	cout << "\n== MBTI Test! =="; 
	cout << "\n-----------"; 
	cout << "\nStart Test? "; 
	cout << "\nEnter your selection: "; 
	
	string choice; 
	cin >> choice; 
	
	if (choice == "No" || choice == "no") {
		cout << "\nIt's okay, I understand. Have a good day!"; 
	}
	else if(choice == "yes" || choice == "Yes" || choice == "YES" || choice == "Yeah" || choice == "yeah") {
		// Question 1
		cout << "\n1.) When working on something, do you prefer to: ";
		cout << "\nA.) Work alone.\nB.) Work with others."; 
		cout << "\nEnter your selection: "; 
		cin >> answer; 
		if (answer == "A" || answer == "a") introvert++; // I
		else if (answer == "B" || answer == "b") extrovert++; // E 
		else {
			cout << "\nInvalid entry.";
		}
		
		// Question 2
		cout << "\n2.) Do you feel energized by spending time with others or by being alone? ";
		cout << "\nA.) Alone.\nB.) With others."; 
		cout << "\nEnter your selection: "; 
		cin >> answer; 
		if (answer == "A" || answer == "a") introvert++; // I
		else if (answer == "B" || answer == "b") extrovert++; // E 
		else {
			cout << "\nInvalid entry.";
		}
		
		// Question 3
		cout << "\n3.) Are you more talkative or reserved in social settings? ";
		cout << "\nA.) Yes, I'm more talkative.\nB.) I'm shy/socially awkward."; 
		cout << "\nEnter your selection: "; 
		cin >> answer; 
		if (answer == "A" || answer == "a") extrovert++; // E
		else if (answer == "B" || answer == "b") introvert++; // I
		else {
			cout << "\nInvalid entry.";
		}
		
		// Moving on to Sensing (S) vs Intuition (N) 
		// Question 4
		cout << "\n4.) Do you trust experience and facts more than theories and ideas?"; 
		cout << "\nA.) Experience and facts\nB.) Theories and ideas"; 
		cout << "\nEnter your selection: "; 
		cin >> answer; 
		if (answer == "A" || answer == "a") sensing++; // S
		else if (answer == "B" || answer == "b") intuition++; // N 
		else {
			cout << "\nInvalid entry."; 
		}
		
		// Question 5
		cout << "\n5.) Do you focus on details or the big picture?"; 
		cout << "\nA.) Details\nB.) Big picture"; 
		cout << "\nEnter your selection: "; 
		cin >> answer; 
		if (answer == "A" || answer == "a") sensing++; // S
		else if (answer == "B" || answer == "b") intuition++; // N
		else {
			cout << "\nInvalid entry."; 
		}
		
		// Question 6
		cout << "\n6.) Are you more practical, or are you more imaginative? "; 
		cout << "\nA.) Practical\nB.) Imaginative";
		cout << "\nEnter your selection: "; 
		cin >> answer; 
		if (answer == "A" || answer == "a") sensing++; // S
		else if (answer == "B" || answer == "b") intuition++; // N
		else {
			cout << "\nInvalid entry."; 
		}
		
		// Moving on to Thinking (T) vs Feeling (F)
		// Question 7
		cout << "\n7.) When making decisions, do you prioritize logic or emotions?";
		cout << "\nA.) Logic\nB.) Emotions"; 
		cout << "\nEnter your selection: "; 
		cin >> answer; 
		if (answer == "A" || answer == "a") thinking++; // T
		else if (answer == "B" || answer == "b") feeling++; // F
		else {
			cout << "\nInvalid entry."; 
		}
		
		// Question 8
		cout << "\n8.) Do you value fairness or compassion more? "; 
		cout << "\nA.) Fairness\nB.) Compassion"; 
		cout << "\nEnter your selection: "; 
		cin >> answer; 
		if (answer == "A" || answer == "a") thinking++; // T
		else if (answer == "B" || answer == "b") feeling++; // F
		else {
			cout << "\nInvalid entry."; 
		}
		
		// Question 9
		cout << "\n9.) Are you more analytical or empathetic?"; 
		cout << "\nA.) Analytical\nB.) Empathetic"; 
		cout << "\nEnter your selection: "; 
		cin >> answer; 
		if (answer == "A" || answer == "a") thinking++; // T
		else if (answer == "B" || answer == "b") feeling++; // F
		else {
			cout << "\nInvalid entry."; 
		}
		
		// Judging vs. Perceiving
		// Question 10
		cout << "\n10.) Do you prefer planning ahead, or going with the flow?"; 
		cout << "\nA.) Planning ahead \nB.) Going with the flow"; 
		cout << "\nEnter your selection: "; 
		cin >> answer; 
		if (answer == "A" || answer == "a") judging++; // J
		else if (answer == "B" || answer == "b") perceiving++; // P
		else {
			cout << "\nInvalid entry."; 
		}
		
		// Question 11
		cout << "\n11.) Do you like to have things decided, or keep options open?"; 
		cout << "\nA.) Have things decided\nB.) Keep options open"; 
		cout << "\nEnter your selection: "; 
		cin >> answer; 
		if (answer == "A" || answer == "a") judging++; // J
		else if (answer == "B" || answer == "b") perceiving++; // P
		else {
			cout << "\nInvalid entry."; 
		}
		
		// Question 12
		cout << "\n12.) Are you more organized or spontaneous? "; 
		cout << "\nA.) Inclined to being organized.\nB.) Inclined to being more spontaneous.";
		cout << "\nEnter your selection: "; 
		cin >> answer; 
		if (answer == "A" || answer == "a") judging++; // J
		else if (answer == "B" || answer == "b") perceiving++; // P
		else {
			cout << "\nInvalid entry."; 
		}
		
		// Determine MBTI Type
		string mbti = ""; 
		mbti += (extrovert > introvert) ? "E" : "I";
		mbti += (sensing > intuition) ? "S" : "N";
		mbti += (thinking > feeling) ? "T" : "F";
		mbti += (judging > perceiving) ? "J" : "P";

    	
    	cout << "\nYour MBTI personality type is: " << mbti << endl; 
    	
    	//that took like a fucking long time 
    	
    	return 0; 
	}
}


