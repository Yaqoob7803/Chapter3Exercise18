/*

file name:Chapter3exercise18.cpp
GitHub URL
programmer:Yaqoob Nagi
Date:February 2025
Requirements:

nterest Earned
Assuming there are no deposits other than the original investment, the balance in
a savings account after one year may be calculated as
Amount = Principal x (1+ Rate/T) 
Principal is the balance in the savings account, Rate is the interest rate,
and T is the number of times the interest is compounded during a year (T is 4 if the interest is compounded quarterly).
Write a program that asks for the principal, the interest rate, and the number of times the interest is compounded. It should display a report similar to:
Interest Rate:4.25%Times Compounded:12Principal:$ 1000.00Interest:$43.34 Amount in Savings: $ 1043.34
*/
#include <iostream>
#include <iomanip> 
using namespace std;


int main()
{
    double principal, rate, amount, interest;
    int timesCompounded; 

    cout << "Interest Rate: ";
    cin >> rate;

    cout << "Times Compounded: ";
    cin >> timesCompounded;

    cout << "Principal: $";
    cin >> principal;

    rate = rate / 100;

    amount = principal * (1 + rate / timesCompounded);
    for (int i = 1; i < timesCompounded; i++) {
        amount *= (1 + rate / timesCompounded);
    }  
    
    interest = amount - principal;

    cout << fixed << setprecision(2);
    cout << "Interest: $" << interest << endl;
    cout << "Amount in Savings: $" << amount << endl;

    return 0;
}