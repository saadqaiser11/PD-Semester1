#include <iostream>
#include <conio.h>
using namespace std;


//string name[100]={"Sneakers","Spikes ","Grippers"};
//float price[100]={300.0,700.0,1000.0};
//int quantity[100]={0,0,0};
//int stock[100]={50,50,50};
//float tax[100]={10.0,15.0,10.0};
//float total[100]={0.0,0.0,0.0};
//int option;
//float price1=300.0,price2=700.0,price3=1000.0;
//int stock1=50,stock2=50,stock3=50;

//string name[100],float price[100],int quantity[100],int stock[100],float tax[100],float total[100],int option,int productCount
//int productCount=3;
//string Items[100]={"Sneakers", "Spikes", "Grippers"};
//int Price[100]={300, 700, 1000};
//int Quantity[100]={50, 50, 50};
//float taxs[100]={10,15,10};


void sign_up(string username[100],string password[100],string role[100],int &index);
void sign_in(string username[100],string password[100],string role[100],int &index);
bool flag(string name,string username[100],string password[100],string role[100],int &index);
int check(string name,string username[100],string password[100],string role[100],int &index);
//string username[100];
//string password[100];
//string role[100];
//int index=0;
void header();
int menu();
int menuAdmin();
void product(string &name,float &price,int &quantity,float &tax,float &total);
float totalCost(float &price,int &quantity,float &tax);
void message();
void categories(string name[],int stock[],int &productCount);
void taxProduct(string name[],float tax[],int &productCount);
string payment();
int details();
void cart(string[],int[],int &productCount);
string feedback();
void checkFeedBacks(string &review,string username[],int &index);
int cartOption(int &option,string name[],int &productCount);
void cust();
void admin();
int changePrices(string name[],int &productCount);
int changeStock(string name[],int &productCount);
int changeTax(string name[],int &productCount);
void viewProducts(string name[],float price[],int quantity[],int &productCount,int &del);
void addNewItem(string name[],float price[],int quantity[],int &productCount);
void delItem(string name[],int &del,float price[],int quantity[],int &productCount);
void removeUser(string username[],string password[],string role[],int &index);
void showUser(string username[],string role[], int &index);
void clearScreen();


main()
{
string username[100];
string password[100];
string role[100];
int index = 0;
string name[100]={"Sneakers","Spikes ","Grippers"};
float price[100]={300.0,700.0,1000.0};
int quantity[100]={0,0,0};
int stock[100]={50,50,50};
float tax[100]={10.0,15.0,10.0};
float total[100]={0.0,0.0,0.0};
int option;
int productCount=3;
int del=0;
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
        sign_in(username,password,role,index);
    }
    if(op==2)
    {
		system("cls");
        sign_up(username,password,role,index);
    }
	if(op==3)
	{
		return 0;
	}

    }
}


void cust()
{
string name[100]={"Sneakers","Spikes ","Grippers"};
float price[100]={300.0,700.0,1000.0};
int quantity[100]={0,0,0};
int stock[100]={50,50,50};
float tax[100]={10.0,15.0,10.0};
float total[100]={0.0,0.0,0.0};
int option;
int productCount=3;
int del=0;
string username[100];
string password[100];
string role[100];
int index = 0;
	while (true)
	{

		system("cls");
		header();
		option = menu();
		if (option == 1) 
		{
			system("cls");
			header();
			categories(name,stock,productCount);
			
		}
		if (option == 2)
		{
			system("cls");
			header();
			cart(name,quantity,productCount);
			
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
			taxProduct(name,tax,productCount);
			
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
			break;
			
		}
		cout << "Press any Key to Continue: ";
		getch();
		system("cls");
    }
}

//(string name[100],float price[100],int quantity[100],int stock[100],float tax[100],float total[100],int option,int productCount=3)
void admin()
{
string name[100]={"Sneakers","Spikes ","Grippers"};
float price[100]={300.0,700.0,1000.0};
int quantity[100]={0,0,0};
int stock[100]={50,50,50};
float tax[100]={10.0,15.0,10.0};
float total[100]={0.0,0.0,0.0};
int option;
int productCount=3;
int del=0;
string review;
string username[100];
string password[100];
string role[100];
int index = 0;
	while (true)
	{
		header();
		option = menuAdmin();
		if (option == 1) 
		{
			system("cls");
			header();
			viewProducts(name,price,quantity,productCount,del);
			
		}
		if (option == 2)
		{
			system("cls");
			header();
			int prices=changePrices(name,productCount);
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
			int stocks=changeStock(name,productCount);
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
			system("cls");
			header();
			checkFeedBacks(review,username,index);
		}
		if (option == 5)
		{
			system("cls");
			header();
			addNewItem(name,price,quantity,productCount);
			
		}
		if (option == 6)
		{
			system("cls");
			header();
			delItem(name,del,price,quantity,productCount);
			
		}
		if (option == 7)
		{
			system("cls");
			header();
			int stocks=changeTax(name,productCount);
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
			//viewProducts(name,price,quantity,productCount,del);
			//removeUser(username,password,role,index);
			showUser(username,role,index);
		}
    	if (option == 9)
		{
			system("cls");
			header();
			removeUser(username,password,role,index);
            //showUser(username,role,index);
		}
		if (option == 10)
		{
			break;
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
	cout << "8. Show Users" << endl;
	cout << "9. Remove Users" << endl;
	cout << "10. LogOut" << endl;
	cout << "Your Option..";
	cin >> option;
	return option;
}


float totalCost(float &price, int &quantity, float &tax)
{
	float total,totalPrice;
	total = price * quantity;
	totalPrice = total + (total * (tax / 100));
	return totalPrice;
}


void product(string &name, float &price, int &quantity, float &tax, float &total)
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


void categories(string name[],int stock[],int &productCount)
{
	cout << "Name   \t \t Availability "<<endl;
    for (int x=0;x<productCount;x++)
    {
        cout<<name[x]<<"\t \t \t"<<stock[x]<<endl;
    }
}


void taxProduct(string name[],float tax[],int &productCount)
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


int cartOption(int &option,string name[],int &productCount)
{
    for (int x=0;x<productCount;x++)
    {
        cout<<x+1<<" for "<<name[x]<<endl;
    }
	cout<<"Enter your option...";
	cin>>option;
	return option;
}


void cart(string name[],int quantity[],int &productCount)
{
	int option;
	int op=cartOption(option,name,productCount);
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


void sign_in(string username[100],string password[100],string role[100],int &index)
{
    string name;
    string pass;
    int idx;
    cout << "Enter Username: ";
    cin >> name;
    cout << "Enter Password: ";
    cin >> pass;


    if(flag(name,username,password,role,index))
	{
    idx=check(name,username,password,role,index);
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


void sign_up(string username[100],string password[100],string role[100],int &index)
{
    string name;
    string role1;
    cout << "Enter Username: ";
    cin >> name;


    if(flag(name,username,password,role,index))
    {
        cout << "Username Already Taken.."<<endl;
        sign_up(username,password,role,index);
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
		index++;
    }
    else
    {
        cout << "Incorrect role.."<<endl;
        sign_up(username,password,role,index);
    }

    }
}


int check(string name,string username[100],string password[100],string role[100],int &index)
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


bool flag(string name,string username[100],string password[100],string role[100],int &index)
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


int changePrices(string name[],int &productCount)
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


int changeStock(string name[],int &productCount)
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


int changeTax(string name[],int &productCount)
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


void checkFeedBacks(string &review,string username[],int &index)
{
	review=feedback();
	for(int x=0;x<index;x++)
	{
		cout << x+1 << username[x]<<endl;
		cout << review;
	}
}


void addNewItem(string name[],float price[],int quantity[],int &productCount)
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
//int del = 0;
void delItem(string name[],int &del,float price[],int quantity[],int &productCount)
{
	
    del = 1;
    viewProducts(name,price,quantity,productCount,del);
    int num;
    cout << "\nEnter the item number you want to remove: ";
    cin >> num;

    name[num - 1] = "";
    del = 0;
    viewProducts(name,price,quantity,productCount,del);
}
void viewProducts(string name[],float price[],int quantity[],int &productCount,int &del)
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


void showUser(string username[],string role[], int &index)
{
	for(int x=0;x<index;x++)
	{
        cout << x+1 <<"\t \t \t"<< username[x] <<"\t \t \t "<< role[x] << endl;
    }
}


void removeUser(string username[],string password[],string role[],int &index)
{
    string user;
    int idx;
    cout << "Users are: "<<endl;
    for(int x=0;x<index;x++)
	{
        cout << x+1 << username[x]<< endl;
    }
    cout << "Enter an index to delete: ";
    cin >> idx;
    user = username[idx-1];
        for(int i=idx-1;i<index-1;i++)
		{
            username[i] = username[i+1];
            password[i] = password[i+1];
            role[i] = role[i+1];
        }
    username[index-1] = "";
    password[index-1] = "";
    role[index-1] = "";
    index--;
    cout << user << " removed"<<endl;
}