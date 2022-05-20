#include<iostream>
#include<cstring>
#include<string>

using namespace std;
#define SIZE 2

//Coordinator class
class Coordinator{
	private :
		string coorID;
		string coorName;
		string coorDepartment;
		
	public :
		Coordinator();
		Coordinator(string pcoorID, string pcoorName, string pcoorDepartment);	
		void replyInq();
		void displayCoordinator();
};

//implementing Coordinator class
Coordinator::Coordinator(){}
Coordinator::Coordinator(string pcoorID, string pcoorName, string pcoorDepartment){
	coorID = pcoorID;
	coorName = pcoorName;
	coorDepartment = pcoorDepartment;
}
void Coordinator:: replyInq() {}

void Coordinator:: displayCoordinator() 
{
	cout<<"Coordinator ID : "<<coorID<<endl;
	cout<<"Name of the Coordinator : "<<coorName<<endl;
	cout<<"Coordinating Department : "<<coorDepartment<<endl;
}


//Admin class
class Admin{
	private :
		string adminID;
		string adminName;
		
	public :
		Admin();
		Admin(string padminID, string padminName);	
		void prepareReport();
		void updateSystem();
		void displayAdmin();
};

//implementing Admin class
Admin::Admin(){}
Admin::Admin(string padminID, string padminName){
	adminID = padminID;
	adminName = padminName;
}
void Admin:: prepareReport() {}
void Admin:: updateSystem() {}

void Admin:: displayAdmin() 
{
	cout<<"Admin ID : "<<adminID<<endl;
	cout<<"Admin Name : "<<adminName<<endl;
}


//Main Program
int main() {
	
  Coordinator *c;
  c=new Coordinator("C001","Jagan","IT");
  c->displayCoordinator();
  cout<<"................................"<<endl;
  cout<<endl;
  
  Admin *ad;
  ad=new Admin("A01","Kasun");
  ad->displayAdmin();
  cout<<"................................"<<endl;
  cout<<endl;
  
  return 0;
}