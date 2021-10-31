#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;
int main(){
	int a,b;
	int i;
	char c;
	srand(time(NULL));
	b = rand() % 100;
	cout<<b<<endl;
	cout<<"Guessing Game! Guess the right number from 0 to 100 and you win"<<endl;
	cin >> a;
	if(a == b){
		cout<<"da"<<endl;
		return 0;
	}
	while(a != b){
		if(a == b){
		cout<<"Brawo maika!"<<endl;
		return 0;
	}
		cout<<"Wrong! Guess again!"<<endl;
		for(i = 1; i < 9; i++){
			cin >> a;
			if(a != b){
				cout<<"Wrong! Guess again!"<<endl;
			}else{
				cout<<"da"<<endl;
				return 0;
			}
		}
		for(i = 11; i >= 11; i++){
			if(a != b){
				cin >> a;
				cout<<"Wrong! Would you like to surrender? y/n"<<endl;
				cin >> c;
				switch(c){
					case 'y': cout<<"The right number was "<< b << endl; return 0;
					break;
					case 'n': cout<<"Guess again"<<endl;
					break;
				}
			}else{
				cout<<"da"<<endl;
				return 0;
			}
		}
	}
	return 0;
}
