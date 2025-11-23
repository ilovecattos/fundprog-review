#include<iostream>
using namespace std;

int main () {
    int entries, num, count; 
    double sum, average; 
    cout << "How many numbers do you wish to enter? \n> "; 
    cin >> entries; 
    
    while (entries<=0) {
        cout << "Please enter a number greater than 1."; 
        cout << "\nHow many numbers do you wish to enter? \n> "; 
        cin >> entries; 
    }
    sum = 0; 
    for (count=1; count<=entries; count=count+1) {
        cout << "Enter a number: \n> "; 
        cin >> num;
        sum = sum + num; 
    }
    average = sum / entries; 
    cout << "\nThe average is " << average << "."; 
    return 0; 
}
