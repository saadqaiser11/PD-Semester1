#include<iostream>
using namespace std;
void flowerShop(int redRose,int whiteRose,int tulip);
main()
{
	int red,white,tulips;
	cout<<"Red Rose: ";
	cin>>red;
	cout<<"White Rose: ";
	cin>>white;
	cout<<"Tulips: ";
	cin>>tulips;
	flowerShop(red,white,tulips);
}
void flowerShop(int redRose,int whiteRose,int tulip)
{
	float red_price,white_price,tulips_price,discount,price;
	red_price=redRose*2.00;
	white_price=whiteRose*4.10;
	tulips_price=tulip*2.50;
	price=red_price+white_price+tulips_price;
	if (price>=200)
	{
		discount=price-(price*20)/100;
		cout<<"Original Price: $"<<price<<endl;
		cout<<"Price after Discount: $"<<discount;
	}
	if (price<200)
	{
		cout<<"Original Price: $"<<price<<endl;
		cout<<"No discount applied.";
	}
}