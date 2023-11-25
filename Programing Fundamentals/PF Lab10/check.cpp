#include <iostream>
using namespace std;
void signupMenu();
void signinMenu();
bool checkUser(string name);
int usernameInd(string name);
string username[100];
string password[100];
string role[100];
int idx=0;

main()
{
    int op;

    while(op!=3)
    {
    system("cls");
    cout << "1. Sign in" << endl;
    cout << "2. Sign up" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice.. : ";
    cin >> op;

    if(op==1)
    {
        signinMenu();
    }

    if(op==2)
    {
        signupMenu();
    }


    }

}

void signinMenu()
{
    string name;
    string password1;
    int index;
    system("cls");
    cout << endl << endl;
    cout << "\t \t \t  Enter Username: ";
    cin >> name;
    cout << "\t \t \t  Enter Password: ";
    cin >> password1;


    if(checkUser(name))
    {
    
    index=usernameInd(name);
    if(password1==password[index])
    {
       string role1= role[index];

    }

    

    }

}


void signupMenu(){
    string name;
    string role1;
    cout << endl<<endl ;
    cout << "Enter Username: ";
    cin >> name;
    if(checkUser(name))
    {
        cout << "Username Already Taken..";
        signupMenu();
    }
    else
    {
    username[idx]=name;
    cout << "Enter Password: ";
    cin >> password[idx];

    cout << "Enter Role (Admin or Customer): ";
    cin >> role1;
    if(role1=="Admin" || role1=="Customer")
    {
        role[idx]=role1;
    }
    else
    {
        cout << "Incorrect role..";
        signupMenu();
    }

    }





}



int usernameInd(string name)
{
    for(int x=0; x<idx; x++)
    {
        if(name==username[x])
        {
            return x;
            break;
        }
    }
}


bool checkUser(string name)
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