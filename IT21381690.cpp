#include<iostream>
#include<cstring>
#include<string>

using namespace std;
#define SIZE 2

//Inquiry class
class Inquiry{
	private :
		string inqID;
		string inqMsg;
		
	public :
		Inquiry();
		Inquiry(string pinqID, string pinqMsg);	
		void storeInq();
		void displayInquiry();
};

//implementing Inquiry class
Inquiry::Inquiry(){}
Inquiry::Inquiry(string pinqID, string pinqMsg){
	inqID = pinqID;
	inqMsg = pinqMsg;
}
void Inquiry:: storeInq() {}

void Inquiry:: displayInquiry()
{
	cout<<"Inquiry ID : "<<inqID<<endl;
	cout<<"Inquiry Message : "<<inqMsg<<endl;
}

//Feedback class
class Feedback{
	private :
		string feedbackID;
		string feedbackMsg;
		
	public :
		Feedback();
		Feedback(string pfeedbackID, string pfeedbackMsg);	
		void storeFeedback();
		void displayFeedback();
};

//implementing Feedback class
Feedback::Feedback(){}
Feedback::Feedback(string pfeedbackID, string pfeedbackMsg){
	feedbackID = pfeedbackID;
	feedbackMsg = pfeedbackMsg;
}
void Feedback:: storeFeedback() {}

void Feedback:: displayFeedback() 
{
	cout<<"Feedback ID : "<<feedbackID<<endl;
	cout<<"Feedback Message : "<<feedbackMsg<<endl;
}
//Main Program
int main() {
	
  Inquiry *i;
  i=new Inquiry("I001","How to edit my profile?");
  i->displayInquiry();
  cout<<"................................"<<endl;
  cout<<endl;
  
  Feedback *f;
  f=new Feedback("F01","Good Service");
  f->displayFeedback();
  cout<<"................................"<<endl;
  cout<<endl;
  
  return 0;
}