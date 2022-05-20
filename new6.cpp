#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int a,b;
	cout<<"enter the no"<<endl;
	cin>>a>>b;
	char op;
	cout<<"enter the operator"<<endl;
	cin>>op;
	switch(op)
	{
		case '+':
			cout<<a+b<<endl;
			break;
	    case '*':
			cout<<a*b<<endl;
			break;
		case '-':
			cout<<a-b<<endl:
				break;
	}
	return 0;
}
