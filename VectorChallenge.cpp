#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector <int> vector1;
	vector <int> vector2;
	
	vector1.push_back(10);
	vector1.push_back(20);
	
	cout << "The vectors in vector1 are: " << vector1.at(0) <<" , " << vector1.at(1) << "\nThe size of the vector is: " << vector1.size() <<endl;
	
	vector2.push_back(100);
	vector2.push_back(200);
	
	cout << "The vectors in vector1 are: " << vector2.at(0) <<" , " << vector2.at(1) << "\nThe size of the vector is: " << vector1.size() <<endl;
	
	vector<vector<int>> vector_2d;
	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);
	
	cout << "The vectors in vector_2d are: " << vector_2d.at(0).at(0) <<" , " << vector_2d.at(0).at(1) << "\nThe size of the vector is: " << vector_2d.size() <<endl;

	
	vector1.at(0) = 1000;
	cout << "The vectors in vector_2d are: " << vector_2d.at(0).at(0) <<" , " << vector_2d.at(0).at(1) << "\nThe size of the vector_2d is: " << vector_2d.size() <<endl;
	
	
	cout << "The vectors in vector1 are: " << vector1.at(0) <<" , " << vector1.at(1) << "\nThe size of the vector is: " << vector1.size() <<endl;

	return 0;
}