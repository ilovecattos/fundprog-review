#include<iostream>
#include<string>
using namespace std;

int sleepHours;
string choice, results; 

void determineChoice() {
    cout << "Did you sleep? (Yes/No): "; 
    cin >> choice; 
    if (choice == "Yes" || choice == "yes" || choice == "Y" || choice == "y") {
        cout << "Enter the number of hours you slept: "; 
        cin >> sleepHours; 
    }
}

void validation() {
    if (sleepHours < 1 || sleepHours > 24) {
        cout << "Invalid number."; 
    } 
}

void determineSleep() {
    if (choice == "Yes" || choice == "yes" || choice == "Y" || choice == "y") {
        if (sleepHours >= 1 && sleepHours <= 3) results = "Lack of sleep."; 
        else if (sleepHours >= 4 && sleepHours <= 6) results = "Still lack of sleep."; 
        else if (sleepHours >= 7 && sleepHours <= 9) results = "Average sleep time."; 
        else if (sleepHours >= 10 && sleepHours <= 12) results = "Above average."; 
        else if (sleepHours >= 13 && sleepHours <= 15) results = "Deep sleeper much?"; 
        else if (sleepHours >= 16 && sleepHours <= 18) results = "Wake up..."; 
        else if (sleepHours >= 19 && sleepHours <= 24) results = "I SAID WAKE UP..!"; 
        cout << results << endl; 
    } else {
        cout << " You're a vampire, or you didn't go to bed." << endl; 
    }
}

int main() {
    determineChoice(); 
    validation(); 
    determineSleep(); 
    return 0; 
}
