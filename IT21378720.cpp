#include<iostream>
#include<cstring>
#include<string>

using namespace std;
#define SIZE 2

//Award class
class Award{
	private :
		int awardNo;
		string awardName;
		
	public :
		Award();
		Award(int pawardNo, string pawardName);	
		void storeAward();
		void displayAward();
};

//implementing Award class
Award::Award(){}
Award::Award(int pawardNo, string pawardName){
	awardNo = pawardNo;
	awardName = pawardName;
}
void Award:: storeAward() {}

void Award:: displayAward() 
{
	cout<<"Award Number : "<<awardNo<<endl;
	cout<<"Name of the award : "<<awardName<<endl;
}

//Main Program
int main() {
	
  Award *a;
  a=new Award(1,"Best Actor");
  a->displayAward();
  cout<<"................................"<<endl;
  cout<<endl;
  
  return 0;
}