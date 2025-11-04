#include<iostream>
using namespace std;

int main () {
	
	//postfix
	int a,b;
	a = 5; 
	b = a++ + 2; //uses a, then increments
	cout << "\nA = " << a; 
	cout << "\nB = " << b;
	
	//prefix
	a = 5; 
	b = ++a + 2; //increments a, then uses it 
	cout << "\n\nA = " << a;
	cout << "\nB = " << b; 
	
	return 0; 
}
