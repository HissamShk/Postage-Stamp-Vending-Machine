//Stamp Machine by Hissamuddin Shaikh
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
//Define Variables
int money_inserted;
int money_inserted_in_cents;
int first_class_stamps;
int penny_stamps;
//Prompt the user to enter the amount of money as whole dollar bills.
cout << "Type in the amount of money to be inserted into the vending machine (in whole dollar bills)."<< endl << endl;
cin >> money_inserted;
//Convert the dollar bills into their cents equivalent
money_inserted_in_cents = money_inserted * 100;
//Calculate the amount of first class stamps that can be sold
first_class_stamps = money_inserted_in_cents / 44;
//Calculate the amount of penny stamps that can be sold.
penny_stamps = money_inserted_in_cents % 44;
//Display the amount of first class stamps and penny stamps sold
cout << endl << "The amount of first class stamps dispensed:-" << first_class_stamps << endl << endl;
cout << "The amount of penny (one cent) stamps dispensed:-" << penny_stamps << endl;
return 0;
}
