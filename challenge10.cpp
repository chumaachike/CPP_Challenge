#include <iostream>
#include <string>

using namespace std;

int main(){
	string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
	string s {};
	string encrypted {};
	string decrypted {};
	
	
	cout<<"Please input a string to be encrypted"<<endl;
	cin>>s;
	for (auto i : s){
		size_t pos = alphabet.find(i);
		if (pos != string::npos){
			encrypted+=key.at(pos);
			
		}else{
			encrypted+=i;
		}
	}
		cout<<encrypted;
	for (auto i : encrypted){
		size_t pos = key.find(i);
		if (pos != string::npos){
			decrypted+=alphabet.at(pos);
		}else{
			decrypted+=i;
		}
	}
	
	cout<<decrypted;
	return 0;
}
