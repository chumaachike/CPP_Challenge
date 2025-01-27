#include <iostream>

using namespace std;


int main (){
	cout << "Hello welcome to Frank's Carpet Cleaning Service" <<endl;
	cout << endl;
	cout <<"How many rooms would you like cleaned" <<endl;
	int num_rooms {0};
	cin >> num_rooms;
	
	const double price_per_room {32.5};
	const double sales_tax {0.06};
	const int estimate_expiry {30}; // days
	
	
	cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of rooms: " << num_rooms << endl;
    cout << "Price per room: $" << price_per_room << endl;
	cout << "Cost : $" << price_per_room * num_rooms << endl;
	cout << "Tax: $" << price_per_room * num_rooms * sales_tax << endl;
	cout << "Total estimate: $" << (price_per_room * num_rooms) + (price_per_room * num_rooms * sales_tax) << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;
	
	cout << endl;
	return 0;
	
	
}