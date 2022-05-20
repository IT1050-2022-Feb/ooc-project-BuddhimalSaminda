#include<iostream>
#include<cstring>
#include<string>

using namespace std;
#define SIZE 2

//Guest class
class Guest{
	protected :
		string guestName;
		string guestEmail;
		
	public :
		Guest();
		Guest(string pguestName, string pguestEmail);
		void displayGuest();		
};

//implementing guest class
Guest::Guest(){}
Guest::Guest(string pguestName, string pguestEmail) {
	guestName = pguestName;
	guestEmail = pguestEmail;
}
void Guest::displayGuest() 
{
	cout<<"Name of the Guest : "<<guestName<<endl;
	cout<<"Email of the Guest : "<<guestEmail<<endl;
}


//Voter class
class Voter{
	private :
		string voterID;
		string voterUsername;
		int voterContactNo;
		int voterAge;
		
	public :
		Voter();
		Voter(string pvoterID, string pvoterUsername, int pvoterContactNo, int pvoterAge);	
		void passwordValidation();
		void usernameValidation();	
		void displayVoter();
};

//implementing Voter class
Voter::Voter(){}
Voter::Voter(string pvoterID, string pvoterUsername, int pvoterContactNo, int pvoterAge){
	voterID = pvoterID;
	voterUsername = pvoterUsername;
	voterContactNo = pvoterContactNo;
	voterAge = pvoterAge;
}
void Voter:: passwordValidation() {}
void Voter:: usernameValidation() {}

void Voter::displayVoter() 
{
	cout<<"Voter ID : "<<voterID<<endl;
	cout<<"Username : "<<voterUsername<<endl;
	cout<<"Contact Number : "<<voterContactNo<<endl;
	cout<<"Age : "<<voterAge<<endl;
}

//Main Program
int main() {
	
  Guest *g;
  g=new Guest("Hansaka","hansaka@gmail.com");
  g->displayGuest();
  cout<<"................................"<<endl;
  cout<<endl;
  
  Voter *v;
  v=new Voter("V001","hans@1",717593099,21);
  v->displayVoter();
  cout<<"................................"<<endl;
  cout<<endl;
  
  return 0;
}