#include<iostream>
#include<cmath>
using namespace std;



int main(void) { 
	int dollars, cents,sum,quarters,dimes,nickles,pennies;
	cout << "Put in the number of dollars and then cents: " << endl;
	cin >> dollars >> cents;
	
	quarters = dollars*100 / 25 + cents / 25;
	
	dollars = dollars * 100 % 25;
	cents=cents % 25;
	dimes = dollars * 100 / 10 + cents / 10;
	dollars = dollars * 100 % 10;
	cents = cents % 10;
	nickles = dollars * 100 / 5 + cents / 5;
	dollars = dollars * 100 % 5;
	cents = cents % 5;
	pennies =cents;
	cout << "The coins are :" << quarters << " quarters, " << dimes << " dimes, " << nickles << " nickels, " << pennies << " pennies.";


}