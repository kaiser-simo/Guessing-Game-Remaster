#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;
int main(){
	int a,b;
	int n;
	char c;
	srand(time(NULL));
	b = rand() % 100;
	cout<<"Guessing Game! Guess the right number from 0 to 100 and you win!"<<endl;
	cout<<endl;
	cout<<"Guess a number:"<<endl;
	cin >> a;
	while(1){
		if(a == b){
			cout<<endl;
			cout<<"Congratulations!"<<endl;
			return 0;
		}
		while(a != b && n != 10){
			n++;
			cout<<"Wrong! Guess again!"<<endl;
			cin >> a;
		}
		while(a != b && n >= 10){
			cout<<"Wrong! Would you like to surrender? y/n"<<endl;
			cin >> c;
			if(c == 'y'){
				cout<<endl;
				cout<<"The right number was "<<b<<endl;
				return 0;
			}else if(c == 'n'){
				cout<<"Guess again!"<<endl;
				cin >> a;
			}
		}
	}
	return 0;
}
