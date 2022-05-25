#include <iostream>

using namespace std;

class person{
  public:
  	char Name[10];
		char address[20];
		int phone;
		public:
  person()
  {
  cout<<"Enter your name: ";
  cin>>Name;
  
  cout<<"Enter address";
  cin>>address;
  
  cout<<"Enter phone number";
  cin>>phone;
  }
  
  
};


class employee{
    public: 
     long int id;
    public:
    	
     employee()
     {
        cout<<"enter employ id.";
        cin>>id;
     }
    
};

class manager{
    public:
     string designation, department;
     int salary;
  manager()
  {
  cout<<"enter department: ";
  cin>>department;
  
   cout<<"enter designation: ";
  cin>>designation;
  
   cout<<"enter salary: ";
  cin>>salary;
  }
};


int main()
{
    int n;
    int arr[n];
    cout<<"enter no of managerrs: \n";
    cin>>n;
    for(int i=1; i<=n;i++){
    cout<<"enter the details for "<< i <<" manager \n";
    cout<<endl;
        
    }
    
    
        }
    person p1;
	employee p2;
	manager p3;
    
};
