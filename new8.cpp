#include <iostream>
using namespace std;
class student
{
	public:
		int roll;
		string name;
	void insertdetails()
	{
		cin>>roll>>name;
	}
	void display()
	{
	cout<<roll<<name;
	}
};
int main(){
	student object;
	object.insertdetails();
	object.display();
	return 0;
}

