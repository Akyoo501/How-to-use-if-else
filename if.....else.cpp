#include <iostream>
using namespace std;

int main(){
	int age;
	cout<<"Enter your age: ";
	cin>>age;
	
	if(age>18){
		cout<<"Your Adult";
	}
	else{
		cout<<"Your Child";
	}
	
	return 0;
}
