#include<iostream>
#include<string>
using namespace std; 

int main () {
    string name, last_name, birthstone, zodiac; 
    int month, day; 
    cout << "\nEnter your name: "; 
    cin >> name;
    cout << "Enter your family name (last name): "; 
    cin >> last_name; 
    cout << "Enter the month of your birthday: "; 
    cin >> month; 
    cout << "Enter the day of your birthday: "; 
    cin >> day; 

    // meow
    if (month < 1 || month > 12 || day < 1 || day > 31) {
        cout << "You entered an invalid date! Program Terminating!!!";
        return 1;  
    } else if ((month == 2 && day > 29) || ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)) {
        cout << "Date invalid! Program Terminating!!!"; 
        return 1; 
    }

    // Birthstone
    if (month == 1 && day >= 1 || month == 1 && day <= 31) birthstone = "Garnet"; 
    else if (month == 2 && day >= 1 || month == 2 && day <= 29) birthstone = "Amethyst"; 
    else if (month == 3 && day >= 1 || month == 3 && day <= 31) birthstone = "Aquamarine"; 
    else if (month == 4 && day >= 1 || month == 4 && day <= 30) birthstone = "Diamond"; 
    else if (month == 5 && day >= 1 || month == 5 && day <= 31) birthstone = "Emerald"; 
    else if (month == 6 && day >= 1 || month == 6 && day <= 30) birthstone = "Pearl"; 
    else if (month == 7 && day >= 1 || month == 7 && day <= 31) birthstone = "Ruby"; 
    else if (month == 8 && day >= 1 || month == 8 && day <= 31) birthstone = "Peridot";
    else if (month == 9 && day >= 1 || month == 9 && day <= 30) birthstone = "Sapphire"; 
    else if (month == 10 && day >= 1 || month == 10 && day <= 31) birthstone = "Opal"; 
    else if (month == 11 && day >= 1 || month == 11 && day <= 30) birthstone = "Topaz"; 
    else if (month == 12 && day >= 1 || month == 12 && day <= 31) birthstone = "Zircon"; 


    // Zodiac 
    if (month == 3 && day >= 21 || month == 4 && day <= 19) zodiac = "Aries"; 
    else if (month == 4 && day >= 20 || month == 5 && day <= 20) zodiac = "Taurus";
    else if (month == 5 && day >= 21 || month == 6 && day <= 20) zodiac = "Gemini"; 
    else if (month == 6 && day >= 21 || month == 7 && day <= 22) zodiac = "Cancer"; 
    else if (month == 7 && day >= 23 || month == 8 && day <= 22) zodiac = "Leo"; 
    else if (month == 8 && day >= 23 || month == 9 && day <= 22) zodiac = "Virgo"; 
    else if (month == 9 && day >= 23 || month == 10 && day <= 22) zodiac = "Libra"; 
    else if (month == 10 && day >= 23 || month == 11 && day <= 21) zodiac = "Scorpio";
    else if (month == 11 && day >= 22 || month == 12 && day <= 21) zodiac = "Sagittarius";
    else if (month == 12 && day >= 22 || month == 1 && day <= 19) zodiac = "Capricorn"; 
    else if (month == 1 && day >= 20 || month == 2 && day <= 18) zodiac = "Aquarius"; 
    else if (month == 2 && day >= 19 || month == 3 && day <= 20) zodiac = "Pisces"; 
    
    cout << name << " " << last_name << ", your birthstone is " << birthstone << " and your zodiac sign is " << zodiac << "." << endl; 
    return 0; 
}