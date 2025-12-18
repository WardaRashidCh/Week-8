#include<iostream>
using namespace std;
int main(){
	int num1,num2;
	cout<<"enter two digits"<<endl;
	cin>> num1;
	cin>> num2;
	char op;
	cout<<"enter operator:";
	cin>>op;
	switch (op){
		case '+':
		cout<<"num1 + num2"<<endl;
		break;
		case '-':
		cout<<"num1 - num2"<<endl;
		break;
		case '*':
		cout<<"num1 * num2"<<endl;
		break;
		case'/':
		cout<<"num1 / num2"<<endl;
		break;
		default:
		cout<<"invalid operators";
		break;
	}
	return 0;
}