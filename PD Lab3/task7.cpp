#include<iostream>
using namespace std;
main()
{
	string name;
	float at,ct,nat,nct,per,ag,dper,rem;
	cout<<"Enter the movie name: ";
	cin>>name;
	cout<<"Enter the adult ticket price: $";
	cin>>at;
	cout<<"Enter the child ticket price: $";
	cin>>ct;
	cout<<"Enter the number of adult tickets sold: ";
	cin>>nat;
	cout<<"Enter the number of child tickets sold: ";
	cin>>nct;
	cout<<"Enter the percentage of the amount to be donated to charity: ";
	cin>>per;
	cout<<endl;
	cout<<"Movie: "<<name<<endl;
	ag=(at*nat)+(ct*nct);
	cout<<"Total amount generated from ticket sales: $"<<ag<<endl;
	dper=(ag/per);
	cout<<"Donation to charity ("<<per<<"%): $"<<dper<<endl;
	rem=ag-dper;
	cout<<"Remaining amount after donation: $"<<rem<<endl;
}

