#include <iostream>

using namespace std;


int main (){
	cout << "Hello welcome to Frank's Carpet Cleaning Service" <<endl;
	cout << endl;
	cout <<"How many small rooms would you like cleaned" <<endl;
	int num_small_rooms {0};
	cin >> num_small_rooms;
	
	cout << "How many large rooms would you like cleaned" << endl;
	int num_large_rooms {0};
	cin >> num_large_rooms;
	
	const double price_per_small_room {25};
	const double price_per_large_room {35};
	const double sales_tax {0.06};
	const int estimate_expiry {30}; // days
	
	double cost = (price_per_large_room * num_large_rooms) + (price_per_small_room * num_small_rooms);
	
	
	cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of  small rooms: " << num_small_rooms << endl;
	cout << "Number of  large rooms: " << num_large_rooms << endl;
    cout << "Price per small room: $" << price_per_small_room << endl;
	cout << "Price per large room: $" << price_per_large_room << endl;
	cout << "Cost : $" << cost << endl;
	cout << "Tax: $" << cost * sales_tax << endl;
	cout << "===============================" << endl;
	cout << "Total estimate: $" << cost + (cost * sales_tax) << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;
	
	cout << endl;
	return 0;
	
	
}