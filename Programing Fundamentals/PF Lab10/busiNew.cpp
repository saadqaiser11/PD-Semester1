#include <iostream>
#include <conio.h>
using namespace std;


string name[100]={"Sneakers","Spikes ","Grippers"};
float price[100]={300.0,700.0,1000.0};
int quantity[100]={0,0,0};
int stock[100]={50,50,50};
float tax[100]={10.0,15.0,10.0};
float total[100]={0.0,0.0,0.0};
int option;
//float price1=300.0,price2=700.0,price3=1000.0;
//int stock1=50,stock2=50,stock3=50;


int productCount=3;
//string Items[100]={"Sneakers", "Spikes", "Grippers"};
//int Price[100]={300, 700, 1000};
//int Quantity[100]={50, 50, 50};
//float taxs[100]={10,15,10};


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
void taxProduct();
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
void clearScreen();


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
		system("cls");
        sign_in();
    }
    if(op==2)
    {
		system("cls");
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

		system("cls");
		header();
		option = menu();
		if (option == 1) 
		{
			system("cls");
			header();
			categories();
			
		}
		if (option == 2)
		{
			system("cls");
			header();
			cart();
			
		}
		if (option == 3)
		{
			system("cls");
			header();
			for(int x=0;x<productCount;x++)
			{
				total[x]=totalCost(price[x],quantity[x],tax[x]);
			}
			//total[0] = totalCost(price[0], quantity[0], tax[0]);
			//total[1] = totalCost(price[1], quantity[1], tax[1]);
			//total[2] = totalCost(price[2], quantity[2], tax[2]);
			float totalAmount=0;
			for(int x=0;x<productCount;x++)
			{
				totalAmount+=total[x];
			}
			//totalAmount = total[0] + total[1] + total[2];
			cout << "All Products Data" << endl;
			cout << "Name" << " \t  \t \t" << "Price " << "\t" << "No. of Pairs" << "\t" << "Tax(%)" << "\t" <<
			"TotalPerProduct" << endl;
			for(int x=0;x<productCount;x++)
			{
				product(name[x], price[x], quantity[x], tax[x], total[x]);
			}
			//product(name[0], price[0], quantity[0], tax[0], total[0]);
			//product(name[1], price[1], quantity[1], tax[1], total[1]);
			//product(name[2], price[2], quantity[2], tax[2], total[2]);
			cout << "Total Amount is: "<<totalAmount<<endl;
			
		}
		if (option == 4)
		{
			system("cls");
			header();
			for(int x=0;x<productCount;x++)
			{
				total[x]=totalCost(price[x],quantity[x],tax[x]);
			}
			//total[0] = totalCost(price[0], quantity[0], tax[0]);
			//total[1] = totalCost(price[1], quantity[1], tax[1]);
			//total[2] = totalCost(price[2], quantity[2], tax[2]);
			float totalAmount=0;
			for(int x=0;x<productCount;x++)
			{
				totalAmount+=total[x];
			}
			//totalAmount = total[0] + total[1] + total[2];
			cout << "Total Amount So Far (including tax): $" << totalAmount << endl;
			
		}
		if (option == 5)
		{

		}
		if (option == 6)
		{
			system("cls");
			header();
			taxProduct();
			
		}
		if (option == 7)
		{
			system("cls");
			header();
			payment();
			
		}
		if (option == 8)
		{
			system("cls");
			header();
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
			system("cls");
			header();
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
			system("cls");
			header();
			viewProducts();
			
		}
		if (option == 2)
		{
			system("cls");
			header();
			int prices=changePrices();
            int x=0;
            while(x<productCount+1)
            {
				if(prices==x)
				{
            	    cout<<"Enter new Price of "<<name[x-1]<<": ";
            	    cin>>price[x-1];
					break;
				}
                //cout<<"Enter new Price of "<<name[x]<<": ";
                //cin>>price[x];
                x++;
            }
			
		}
		if (option == 3)
		{
			system("cls");
			header();
			int stocks=changeStock();
            int x=0;
            while(x<productCount+1)
            {
				if(stocks==x)
				{
            	    cout<<"Enter new Stock of "<<name[x-1]<<": ";
            	    cin>>stock[x-1];
					break;
				}
                //cout<<"Enter new Stock of "<<name[x]<<": ";
                //cin>>stock[x];
                x++;
            }
			
		}
		if (option == 4)
		{

		}
		if (option == 5)
		{
			system("cls");
			header();
			addNewItem();
			
		}
		if (option == 6)
		{
			system("cls");
			header();
			delItem();
			
		}
		if (option == 7)
		{
			system("cls");
			header();
			int stocks=changeTax();
		    int x=0;
            while(x<productCount+1)
            {
				if(stocks==x)
				{
            	    cout<<"Enter new tax of "<<name[x-1]<<": ";
            	    cin>>tax[x-1];
					break;
				}
                //cout<<"Enter new Stock of "<<name[x]<<": ";
                //cin>>stock[x];
                x++;
            }
			
		}
		if (option == 8)
		{
			system("cls");
			header();
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
    for (int x=0;x<productCount;x++)
    {
        cout<<name[x]<<"\t \t \t"<<stock[x]<<endl;
    }
}


void taxProduct()
{
	cout << "Name   \t \t    Tax       "<<endl;
    for (int x=0;x<productCount;x++)
    {
        cout<<name[x]<<"\t \t \t"<<tax[x]<<endl;
    }

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
    for (int x=0;x<productCount;x++)
    {
        cout<<x+1<<" for "<<name[x]<<endl;
    }
	cout<<"Enter your option...";
	cin>>option;
	return option;
}


void cart()
{
	int option;
	int op=cartOption(option);
    for (int x=0;x<productCount+1;x++)
    {
		if(op==x)
		{
		cout<<"How many pairs of "<<name[x-1]<<" do you want: ";
        cin>>quantity[x-1];
		break;
		}
		//cout<<"How many pairs of "<<name[x]<<" do you want: ";
        //cin>>quantity[x];
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
    for (int x=0;x<productCount;x++)
    {
        cout<<x+1<<" for "<<name[x]<<endl;
    }
	cout<<"Your Option...";
	cin>>price;
	return price;
}


int changeStock()
{
	int stock;
	cout<<"Enter the type of shoes you want to Change Stock of: "<<endl;
    for (int x=0;x<productCount;x++)
    {
        cout<<x+1<<" for "<<name[x]<<endl;
    }
	cout<<"Your Option...";
	cin>>stock;
	return stock;
}


int changeTax()
{
	int tax;
	cout<<"Enter the type of shoes you want to Change Tax of: "<<endl;
    for (int x=0;x<productCount;x++)
    {
        cout<<x+1<<" for "<<name[x]<<endl;
    }
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
    string names;
    int prices,quantitys;
    cout <<"Enter name of the item: ";
    cin >> names;
    cout <<"Enter price of the item: ";
    cin >> prices;
    cout <<"Enter the quantity: ";
    cin >> quantitys;

    name[productCount] = names;
    price[productCount] = prices;
    quantity[productCount] = quantitys;
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

    name[num - 1] = "";
    del = 0;
    viewProducts();
}
void viewProducts()
{
    system("cls");
    cout << "No.  Products Name\t\tPrice\t\tQuantity "<< endl;
    for (int i=0 ; i<productCount ; i++)
    {   
        if (name[i] != "")
        cout << i+1 << "    " << name[i] << "\t\t\t" << price[i] << "\t\t" << quantity[i]<< endl;
    }
    if (del == 0)
    {
        //admin();
    }
}


void clearScreen()
{
    cout << "Press Any Key to Continue.." << endl;
    getch();
    system("cls");
}