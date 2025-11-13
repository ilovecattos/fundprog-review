#include<iostream>
#include<string>
using namespace std;

int main () {
    string name, surname, sign; 
    int month, day;
    cout << "\nEnter your name: "; 
    cin >> name; 
    cout << "Enter your surname: "; 
    cin >> surname; 
    cout << "1 = January\n2 = February\n3 = March\n4 = April\n5 = May\n6 = June\n7 = July\n8 = August\n9 = September\n10 = October\n11 = November\n12 = December"; 
    cout << "\nEnter the month of your birthday: "; 
    cin >> month; 
    cout << "Enter the day of your birthday: "; 
    cin >> day; 

    if (month < 1 || month > 12 || day < 1 || day > 31) {
        cout << "You entered an invalid date! Program Terminating!!!";
        return 1;  
    }
    else if ((month == 2 && day > 29) || ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)) {
        cout << "Date invalid! Program Terminating!!!"; 
        return 1; 
    }

    // Determine Zodiac 
    if (month == 3 && day <= 21 || month == 4 && day <= 19) sign = "Aries"; 
    else if (month == 4 && day >= 20 || month == 5 && day <= 20) sign = "Taurus"; 
    else if (month == 5 && day >= 21 || month == 6 && day <= 21) sign = "Gemini";
    else if (month == 6 && day >= 22 || month == 7 && day <= 22) sign = "Cancer"; 
    else if (month == 7 && day >= 23 || month == 8 && day <= 22) sign = "Leo"; 
    else if (month == 8 && day >= 23 || month == 9 && day <= 22) sign = "Virgo"; 
    else if (month == 9 && day >= 23 || month == 10 && day <= 23) sign = "Libra"; 
    else if (month == 10 && day >= 24 || month == 11 && day <= 21) sign = "Scorpio"; 
    else if (month == 11 && day >= 22 || month == 12 && day <= 21) sign = "Sagittarius";
    else if (month == 12 && day >= 22 || month == 1 && day <= 19) sign = "Capricorn"; 
    else if (month == 1 && day >= 20 || month == 2 && day <= 18) sign = "Aquarius"; 
    else if (month == 2 && day >= 19 || month == 3 && day <= 20) sign = "Pisces"; 
    cout << name << " " << surname << ", your sign is " << sign << "."; 
    return 0;  
}