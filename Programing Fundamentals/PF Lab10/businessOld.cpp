#include <iostream>
#include <conio.h>
using namespace std;


string name1="Sneakers",name2="Spikes \t",name3="Grippers";
float price1=300.0,price2=700.0,price3=1000.0;
int quantity1=0,quantity2=0,quantity3=0;
int stock1=50,stock2=50,stock3=50;
float tax1=10.0,tax2=15.0,tax3=10.0;
float total1=0.0,total2=0.0,total3=0.0;
int option;

int productCount=3;
string Items[100]={"Sneakers", "Spikes", "Grippers"};
int Price[100]={300, 700, 1000};
int Quantity[100]={50, 50, 50};
float taxs[100]={10,15,10};


void sign_up();
void sign_in();
bool flag(string name);
int check(string name);
string username[100];
string password[100];
string role[100];
int index=0;
void header();
int menu();
int menuAdmin();
void product(string name,float price,int quantity,float tax,float total);
float totalCost(float price,int quantity,float tax);
void message();
void categories();
void tax();
string payment();
int details();
void cart();
string feedback();
int cartOption(int option);
void cust();
void admin();
int changePrices();
int changeStock();
int changeTax();
void viewProducts();
void addNewItem();
void delItem();


main()
{

    int op;
    while(true)
    {
    system("cls");
    cout << "1 for Sign in" << endl;
    cout << "2 for Sign up" << endl;
    cout << "3 for Exit" << endl;
    cout << "Enter your choice...";
    cin >> op;


    if(op==1)
    {
        sign_in();
    }
    if(op==2)
    {
        sign_up();
    }
	if(op==3)
	{
		return 0;
	}

    }
}


void cust()
{
	while (true)
	{


		header();
		option = menu();
		if (option == 1) 
		{
			categories();
		}
		if (option == 2)
		{
			cart();
		}
		if (option == 3)
		{
			total1 = totalCost(price1, quantity1, tax1);
			total2 = totalCost(price2, quantity2, tax2);
			total3 = totalCost(price3, quantity3, tax3);
			float totalAmount;
			totalAmount = total1 + total2 + total3;
			cout << "All Products Data" << endl;
			cout << "Name" << " \t  \t \t" << "Price " << "\t" << "No. of Pairs" << "\t" << "Tax(%)" << "\t" <<
			"TotalPerProduct" << endl;
			product(name1, price1, quantity1, tax1, total1);
			product(name2, price2, quantity2, tax2, total2);
			product(name3, price3, quantity3, tax3, total3);
			cout << "Total Amount is: "<<totalAmount<<endl;
		}
		if (option == 4)
		{
			total1 = totalCost(price1, quantity1, tax1);
			total2 = totalCost(price2, quantity2, tax2);
			total3 = totalCost(price3, quantity3, tax3);
			float totalAmount;
			totalAmount = total1 + total2 + total3;
			cout << "Total Amount So Far (including tax): $" << totalAmount << endl;
		}
		if (option == 5)
		{
			total1 = totalCost(price1, quantity1, tax1);
			total2 = totalCost(price2, quantity2, tax2);
			total3 = totalCost(price3, quantity3, tax3);
			float totalAmount;
			totalAmount = total1 + total2 + total3;
			cout << "All Products Data" << endl;
			cout << "Name" << " \t  \t \t" << "Price " << "\t" << "No. of Pairs" << "\t" << "Tax(%)" << "\t" <<
			"TotalPerProduct" << endl;
			product(name1, price1, quantity1, tax1, total1);
			product(name2, price2, quantity2, tax2, total2);
			product(name3, price3, quantity3, tax3, total3);
			cout << "Total Amount is: "<<totalAmount<<endl;
		}
		if (option == 6)
		{
			tax();
		}
		if (option == 7)
		{
			payment();
		}
		if (option == 8)
		{
			int day = details();
			if(day<=3)
			{
				cout<<"We are prepering the Package...";
			}
			else if (day>3 && day<7)
			{
				cout<<"Your Package is on his way...";
			}
			else if (day>=7)
			{
				cout<<"Package should be recieved...";
			}
		}
    	if (option == 9)
		{
			feedback();
		}
		if (option == 10)
		{
			main();
		}
		cout << "Press any Key to Continue: ";
		getch();
		system("cls");
    }
}


void admin()
{
	while (true)
	{
		header();
		option = menuAdmin();
		if (option == 1) 
		{
			viewProducts();
		}
		if (option == 2)
		{
			int price=changePrices();
			if(price==1)
			{
				cout<<"Enter new Price of Sneakers: ";
				cin>>price1;
			}
			if(price==2)
			{
				cout<<"Enter new Price of Spikes: ";
				cin>>price2;
			}
			if(price==3)
			{
				cout<<"Enter new Price of Grippers: ";
				cin>>price3;
			}
		}
		if (option == 3)
		{
			int stock=changeStock();
			if(stock==1)
			{
				cout<<"Enter new Stock of Sneakers: ";
				cin>>stock1;
			}
			if(stock==2)
			{
				cout<<"Enter new Stock of Spikes: ";
				cin>>stock2;
			}
			if(stock3==3)
			{
				cout<<"Enter new Stock of Grippers: ";
				cin>>stock3;
			}
		}
		if (option == 4)
		{
		}
		if (option == 5)
		{
			addNewItem();
		}
		if (option == 6)
		{
			delItem();
		}
		if (option == 7)
		{
			int stock=changeTax();
			if(stock==1)
			{
				cout<<"Enter new tax of Sneakers: ";
				cin>>tax1;
			}
			if(stock==2)
			{
				cout<<"Enter new tax of Spikes: ";
				cin>>tax2;
			}
			if(stock3==3)
			{
				cout<<"Enter new tax of Grippers: ";
				cin>>tax3;
			}
		}
		if (option == 8)
		{
			viewProducts();
		}
    	if (option == 9)
		{
            
		}
		if (option == 10)
		{
			main();
		}
		cout << "Press any Key to Continue: ";
		getch();
		system("cls");
    }
}


void header()
{
	system ("Color 	84");
	cout << "############################################################" << endl;
	cout << "************************************************************" << endl;
	cout << "#################Shoes Selling Shop########################" << endl;
	cout << "************************************************************" << endl;
	cout << "############################################################" << endl;
	cout << endl<<endl;
}


int menu()
{
	int option;
	cout << "Select one of the following options number..." << endl;
	cout << "1. Categories" << endl;
	cout << "2. Add to Cart" << endl;
	cout << "3. View Cart" << endl;
	cout << "4. TotalAmount" << endl;
	cout << "5. Remove from Cart" << endl;
	cout << "6. View tax" << endl;
	cout << "7. View Payment Options" << endl;
	cout << "8. Delivery Details" << endl;
	cout << "9. Feedback" << endl;
	cout << "10. LogOut" << endl;
	cout << "Your Option..";
	cin >> option;
	return option;
}


int menuAdmin()
{
	int option;
	cout << "Select one of the following options number..." << endl;
	cout << "1. View List Shoes" << endl;
	cout << "2. Change Prices" << endl;
	cout << "3. Change Available Stock" << endl;
	cout << "4. Check Reviews" << endl;
	cout << "5. Add item" << endl;
	cout << "6. Remove item" << endl;
	cout << "7. Update Tax" << endl;
	cout << "8. Special Days" << endl;
	cout << "9. Status of Delivery" << endl;
	cout << "10. LogOut" << endl;
	cout << "Your Option..";
	cin >> option;
	return option;
}


float totalCost(float price, int quantity, float tax)
{
	float total,totalPrice;
	total = price * quantity;
	totalPrice = total + (total * (tax / 100));
	return totalPrice;
}


void product(string name, float price, int quantity, float tax, float total)
{
	cout << name << " \t \t" << price << "\t" << quantity << "\t\t" << tax << "\t" << total << endl;
}


void message()
{
	cout << "############################################################" << endl;
	cout << "############################################################" << endl;
	cout << "       Thanks For Shopping and Hopefully You Enjoyed      " << endl;
	cout << "############################################################" << endl;
	cout << "############################################################" << endl;
}


void categories()
{
	cout << "Name   \t \t Availability "<<endl;
	cout << "Spikes \t \t \t \t"<<stock1<<endl;
	cout << "Sneakers  \t \t \t"<<stock2<<endl;
	cout << "Grippers  \t \t \t"<<stock3<<endl;
}


void tax()
{
	cout << "Name   \t \t    Tax       "<<endl;
	cout << "Spikes \t \t \t \t"<<tax1<<endl;
	cout << "Sneakers  \t \t \t"<<tax2<<endl;
	cout << "Grippers  \t \t \t"<<tax3<<endl;

}


string payment()
{
	string option;
	cout << "Enter Payment Option (Cash/Card): ";
	cin >> option;
	return option;
}


int details()
{
	int days;
	cout << "Enter the No. of Days since you placed the order: "<<endl;
	cin >> days;
	return days;
}


int cartOption(int option)
{
	cout<<"1 for Sneakers: "<<endl;
	cout<<"2 for Spikes: "<<endl;
	cout<<"3 for Grippers: "<<endl;
	cout<<"Enter your option...";
	cin>>option;
	return option;
}


void cart()
{
	int option;
	int op=cartOption(option);
	if(op==1)
	{
		cout<<"How many pairs do you want: ";
		cin>>quantity1;
	}
		if(op==2)
	{
		cout<<"How many pairs do you want: ";
		cin>>quantity2;
	}
	else if(op==3)
	{
		cout<<"How many pairs do you want: ";
		cin>>quantity3;
	}
}


void sign_in()
{
    string name;
    string pass;
    int idx;
    cout << "Enter Username: ";
    cin >> name;
    cout << "Enter Password: ";
    cin >> pass;


    if(flag(name))
    {
    idx=check(name);
    if(pass==password[idx])
    {
       string role1= role[idx];
	   if(role1=="A" )
        {
            admin();
        }
        else if(role1=="C")
        {
			cust();
        }
    }
	else
	{
		cout<<"Incorrect id";
	}

    }
}


void sign_up()
{
    string name;
    string role1;
    cout << "Enter Username: ";
    cin >> name;


    if(flag(name))
    {
        cout << "Username Already Taken.."<<endl;
        sign_up();
    }
    else
    {
    username[index]=name;
    cout << "Enter Password: ";
    cin >> password[index];
    cout << "Enter Role (A for Admin or C for Customer): ";
    cin >> role1;
    if(role1=="A" || role1=="C")
    {
        role[index]=role1;
    }
    else
    {
        cout << "Incorrect role.."<<endl;
        sign_up();
    }

    }
}


int check(string name)
{
    for(int x=0; x<index; x++)
    {
        if(name==username[x])
        {
            return x;
            break;
        }
    }
}


bool flag(string name)
{
    for(int x=0; x<100; x++)
    {
        if(name==username[x])
        {
            return true;
        }
    }
    return false;
}


int changePrices()
{
	int price;
	cout<<"Enter the type of shoes you want to Change price of: "<<endl;
	cout<<"1 for Sneakers"<<endl;
	cout<<"2 for Spikes"<<endl;
	cout<<"3 for Grippers"<<endl;
	cout<<"Your Option...";
	cin>>price;
	return price;
}


int changeStock()
{
	int stock;
	cout<<"Enter the type of shoes you want to Change Stock of: "<<endl;
	cout<<"1 for Sneakers"<<endl;
	cout<<"2 for Spikes"<<endl;
	cout<<"3 for Grippers"<<endl;
	cout<<"Your Option...";
	cin>>stock;
	return stock;
}


int changeTax()
{
	int tax;
	cout<<"Enter the type of shoes you want to Change Tax of: "<<endl;
	cout<<"1 for Sneakers"<<endl;
	cout<<"2 for Spikes"<<endl;
	cout<<"3 for Grippers"<<endl;
	cout<<"Your Option...";
	cin>>tax;
	return tax;
}


string feedback()
{
    string review="";
    cout << "Enter your Honest Review: ";
    cin >> review;
    return review;
}

void addNewItem()
{
    string item;
    int price,quantity;
    cout <<"Enter name of the item: ";
    cin >> item;
    cout <<"Enter price of the item: ";
    cin >> price;
    cout <<"Enter the quantity: ";
    cin >> quantity;

    Items[productCount] = item;
    Price[productCount] = price;
    Quantity[productCount] = quantity;
    productCount ++;
}
int del = 0;
void delItem()
{
    del = 1;
    viewProducts();
    int num;
    cout << "\nEnter the item number you want to remove: ";
    cin >> num;

    Items[num - 1] = "";
    del = 0;
    viewProducts();
}
void viewProducts()
{
    system("cls");
    cout << "No.  Products Name\t\tPrice\t\tQuantity "<< endl;
    for (int i=0 ; i<productCount ; i++)
    {   
        if (Items[i] != "")
        cout << i+1 << "    " << Items[i] << "\t\t\t" << Price[i] << "\t\t" << Quantity[i]<< endl;
    }
    if (del == 0)
    {
        //admin();
    }
}