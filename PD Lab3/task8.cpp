#include<iostream>
using namespace std;
main()
{
	float veg,fru,kveg,kfru,vegi,frui,res,res1;
	cout<<"Enter vegetable price per kilogram (in coins): ";
	cin>>veg;
	cout<<"Enter fruit price per kilogram (in coins): ";
	cin>>fru;
	cout<<"Enter total kilograms of vegetables: ";
	cin>>kveg;
	cout<<"Enter total kilograms of fruits: ";
	cin>>kfru;
	vegi=kveg*veg;
	frui=kfru*fru;
	res=vegi+frui;
	res1=res/1.94;
	cout<<"Total earnings in Rupees (Rps): "<<res1;
}
