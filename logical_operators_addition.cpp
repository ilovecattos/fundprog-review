#include<iostream>
using namespace std;

int main () {
	
	// POSTFIX INCREMENT EXAMPLE
    // -----------------------------
    // Step-by-step breakdown:
    // 1. We declare two integer variables: a and b.
	int a,b;
	
	//2. We assign 5 to variable a. 
	a = 5; 
	
	// 3. Now we use the POSTFIX increment: b = a++ + 2;
    //    Here's what happens:
    //    - The current value of a (which is 5) is used in the expression.
    //    - So it becomes: b = 5 + 2 ? b = 7
    //    - THEN, after the expression is done, a is incremented by 1 ? a becomes 6
	b = a++ + 2; //uses a, then increments
	cout << "\nPOSTFIX INCREMENT (b = a++ + 2)"; 
	cout << "\nA = " << a; // Output: A = 6 (because it was incremented after use)
	cout << "\nB = " << b; // Output: B = 7 (because it used the original value of a = 5)
	
	// PREFIX INCREMENT EXAMPLE
    // ---------------------------
    // 1. We reset a back to 5 to start fresh.
	a = 5; 
	
	// 2. Now we use the PREFIX increment: b = ++a + 2;
    //    Here's what happens:
    //    - a is incremented FIRST ? a becomes 6
    //    - Then the new value of a (which is 6) is used in the expression
    //    - So it becomes: b = 6 + 2 ? b = 8
	b = ++a + 2; //increments a, then uses it
	cout << "\n\nPREFIX INCREMENT (b = ++a + 2)";  
	cout << "\nA = " << a;
	cout << "\nB = " << b; 
	
	return 0; 
}
