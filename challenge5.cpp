#include <iostream>
#include <vector>
#include <limits>
#include <numeric>

using namespace std;

int main(){
	vector <int> numbers {};
	char input {};
	int min = numeric_limits<int>::max();
	int max = numeric_limits<int>::min();
	int num_to_add {};
	double mean {};
	do{
		cout << "What operation would you like to perform"<<endl;
		cout<<"P - Print numbers"<<endl<<"A - Add number"<<endl<<
		"M - Display mean of the numbers"<<endl
		<<"S - Display the smallest number"<<endl<<"L - Display the largest number"<<endl<<"Q - Quit"<<endl;
		cin>>input;
		input = tolower(input);
		switch(input){
			case 'p': for (int i : numbers)
						cout << i << " ";
					cout<< endl; break;
			case 'a': cout<<"Please input a number"<<endl;
					cin>>num_to_add; 
					min = (num_to_add < min ? num_to_add : min);
					max = (num_to_add > max ? num_to_add : max);
					numbers.push_back(num_to_add);	
					break;
			case 'm': mean = accumulate(numbers.begin(), numbers.end(), 0.0) / numbers.size();
                    cout << "Mean: " << mean << endl;
					  cout<< mean<< endl; break;
			case 's': cout<<min<<endl; break;
			case 'l':cout<<max<<endl; break;
			case 'q':break;
			default: cout<<"Invalid option"<<endl; break;
					
					  
		}
	
		
	}while(input != 'q');
	return 0;
}