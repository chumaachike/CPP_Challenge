#include <iostream>

using namespace std;

int main (){
	int num_cents {};
	cout <<"how many cents do you want to convert"<< endl;
	cin >> num_cents;
	
	int dollars = num_cents/100;
	int reminder = num_cents%100;
	int quarters = reminder/25;
	reminder = reminder%25;
	int dimes = reminder/10;
	reminder = reminder%10;
	int nickels = reminder/5;
	reminder = reminder%5;
	int pennies = reminder;
	
	cout << "You can provide the change as follows:" << endl;
    cout << "dollars: " << dollars << endl;
    cout << "quarters: " << quarters << endl;
    cout << "dimes: " << dimes << endl;
    cout << "nickels: " << nickels << endl;
    cout << "pennies: " << pennies << endl;
	
	
	return 0;
}
