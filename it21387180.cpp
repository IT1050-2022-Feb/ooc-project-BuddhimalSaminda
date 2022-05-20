#include<iostream>
#include<cstring>
#include<string>

using namespace std;
#define SIZE 2

//Nominee class
class Nominee{
	private :
		string nomineeID;
		string nomineeName;
		string nomineeEmail;
		int nomineeAge;
		
	public :
		Nominee();
		Nominee(string pnomineeID, string pnomineeName, string pnomineeEmail, int pnomineeAge);	
		void nomineeValidation();
		void displayNominee();
};

//implementing Nominee class
Nominee::Nominee(){}
Nominee::Nominee(string pnomineeID, string pnomineeName, string pnomineeEmail, int pnomineeAge){
	nomineeID = pnomineeID;
	nomineeName = pnomineeName;
	nomineeEmail = pnomineeEmail;
	nomineeAge = pnomineeAge;
}
void Nominee:: nomineeValidation() {}

void Nominee:: displayNominee() 
{
	cout<<"Nominee ID : "<<nomineeID<<endl;
	cout<<"Name of the Nominee : "<<nomineeName<<endl;
	cout<<"Email of the Nominee : "<<nomineeEmail<<endl;
	cout<<"Age : "<<nomineeAge<<endl;
}

//Report class
class Report{
	private :
		string reportID;
		
	public :
		Report();
		Report(string preportID);	
		void updateReport();
		void displayReport();
};

//implementing Report class
Report::Report(){}
Report::Report(string preportID){
	reportID = preportID;
}
void Report:: updateReport() {}

void Report:: displayReport() 
{
	cout<<"Report ID : "<<reportID<<endl;
}

//Main Program
int main() {
	
   Nominee *n;
   n=new Nominee("N001","Shane","Shane@gmail.com",40);
   n->displayNominee();
   cout<<"................................"<<endl;
   cout<<endl;
   
   Report *r;
   r=new Report("R001");
   r->displayReport();
   cout<<"................................"<<endl;
   cout<<endl;
   
   return 0;
}