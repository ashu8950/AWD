#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	/*for (int i=0;i<=100;i++){
		if(i%3==0){
			continue;
		}
		cout<<i<<endl;
	}*/
	/*int n;
	cin>>n;
	int i;
	for(i=2;i<n;i++)
	{
		if (n%i==0){
			cout<<"Not Prime"<<endl;
			break;
		}
	}
	if(i=n){
		cout<<"Prime"<<endl;
	}*/
	/*int a,b;
	cin>>a>>b;
	for (int num=a;num<=b;num++){
		int i;
		for ( i=2;i<num;i++){
			if(num%i==0){
				break;
			}
		}
		if(i==num)
		{
			cout<<num<<endl;
		}
	}*/
	char a ;
	cin>>a;
	switch(a)
	{
		case 'a':
		cout<<"hello"<<endl;
		break;
		case'b':
		cout<<"hola"<<endl;
		break;      
		case 'c':
		cout<<"namaste"<<endl;
		break;
		default:
			cout<<"hey! I am still Learning dont'n you know!"<<endl;
			break;
	}
	return 0;
}
