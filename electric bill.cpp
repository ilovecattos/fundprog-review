#include<iostream>
#include<cmath> 
//define sharp variables 
#define LOWER_RATE 6.20
#define HIGHER_RATE 9.30 
#define VAT_RATE 0.12
using namespace std;

double kwh, bwt, fb;

void compute_bill() {
    if (kwh <= 250) {
        bwt = kwh * LOWER_RATE; 
    }
    else {
        double excess = kwh - 250; 
        bwt = 250 * LOWER_RATE + excess * HIGHER_RATE; 
    }

    fb = bwt * (1 + VAT_RATE); 
}

void show_bill() {
    cout << "Your electric bill is " << fb << " pesos." << endl; 
}

int main () {
    cout << "Enter the number of kilowatt hours consumed: "; 
    cin >> kwh;

    compute_bill();
    show_bill(); 
    return 0; 
}

