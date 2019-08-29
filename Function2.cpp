#include <iostream>
#include<string>
using namespace std;
int update_balance(string command ,float dollars,float &balance);

int main () {

    float balance=10000;
    float dollars;
	string command;

	do { 
		cout<<"Input Command (1 Or Withdraw ,2 Deposit) : ";
		cin>>command;
    
    update_balance(command,dollars,balance);

		 
	}while (command!="0");
	cout<<"EXIT";

}

int update_balance(string command,float dollars,float &balance)
{
	 if(command=="1") {
		cout<<"Input Amount : ";
	cin>>dollars;
	 balance = balance-dollars;
	 cout<<"Your Balance : "<<balance<<endl;
	 
	 return(balance);

	 }

	 else if (command=="2") {
		cout<<"Input Amount : ";
		cin>>dollars;
		balance =balance+dollars;
		 cout<<"Your Balance : "<<balance<<endl;
	   
		 return(balance);
}
		
}

