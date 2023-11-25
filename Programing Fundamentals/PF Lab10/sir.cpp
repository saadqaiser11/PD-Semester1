#include <iostream>
#include <conio.h>

using namespace std;

string signIn(string name, string password, string users[], string passwords[], string roles[], int usersCount);
bool signUp(string name, string password, string role, string users[], string passwords[], string roles[], int &usersCount, int userArrSize);
void topHeader();
void subMenuBeforeMainMenu(string submenu);
void subMenu(string submenu);
int loginMenu();
int adminMenu();
void adminInterface();
int userMenu();
void userInterface();
void clearScreen();

main()
{
    const int userArrSize = 10;
    string users[userArrSize];
    string passwords[userArrSize];
    string roles[userArrSize];
    int usersCount = 0;
    int loginOption = 0;
    while (loginOption != 3)
    {
        topHeader();
        subMenuBeforeMainMenu("Login");
        loginOption = loginMenu();
        if (loginOption == 1)
        {
            system("cls");

            string name;
            string password;
            string role;
            topHeader();
            subMenuBeforeMainMenu("SignIn");
            cout << "Enter your Name: " << endl;
            cin >> name;
            cout << "Enter your Password: " << endl;
            cin >> password;
            role = signIn(name, password, users, passwords, roles, usersCount);

            if (role == "Admin")
            {
                clearScreen();
                adminInterface();
            }
            else if (role == "User")
            {
                clearScreen();
                userInterface();
            }
            else if (role == "undefined")
            {
                cout << "You Entered wrong Credentials" << endl;
            }
        }
        else if (loginOption == 2)
        {
            system("cls");
            string name;
            string password;
            string role;
            topHeader();
            subMenuBeforeMainMenu("SignUp");
            cout << "Enter your Name: " << endl;
            cin >> name;
            cout << "Enter your Password: " << endl;
            cin >> password;
            cout << "Enter your Role (Admin or User): " << endl;
            cin >> role;
            bool isValid = signUp(name, password, role, users, passwords, roles, usersCount, userArrSize);
            if (isValid)
            {
                cout << "SignedUp Successfully" << endl;
            }
            if (!isValid)
            {
                cout << "SignedUp not Successfully" << endl;
            }
        }
        clearScreen();
    }
}

int loginMenu()
{
    int option;
    cout << "1. SignIn with your Credentials" << endl;
    cout << "2. SignUp to get your Credentials" << endl;
    cout << "3. Exit the Application" << endl;
    cout << endl;
    cout << "Enter the Option Number > ";
    cin >> option;
    return option;
}
string signIn(string name, string password, string users[], string passwords[], string roles[], int usersCount)
{
    for (int index = 0; index < usersCount; index++)
    {
        if (users[index] == name && passwords[index] == password)
        {
            return roles[index];
        }
    }
    return "undefined";
}

bool signUp(string name, string password, string role, string users[], string passwords[], string roles[], int &usersCount, int userArrSize)
{
    bool isPresent = false;

    for (int index = 0; index < usersCount; index++)
    {
        if (users[index] == name && passwords[index] == password)
        {
            isPresent = true;
            break;
        }
    }
    if (isPresent == true)
    {
        return 0;     
    }
    else if (usersCount < userArrSize)
    {
        users[usersCount] = name;
        passwords[usersCount] = password;
        roles[usersCount] = role;
        usersCount++;
        return true;
    }
    else
    {
        return false;
    }
}

void topHeader()
{
    cout << "************************************************************" << endl;
    cout << "*                 Business Application System              *" << endl;
    cout << "************************************************************" << endl;
    cout << endl;
}

void subMenuBeforeMainMenu(string submenu)
{
    string message = submenu + " Menu";
    cout << message << endl;
    cout << "---------------------" << endl;
}

void subMenu(string submenu)
{
    string message = "Main Menu > " + submenu;
    cout << message << endl;
    cout << "---------------------" << endl;
}

void clearScreen()
{
    cout << "Press Any Key to Continue.." << endl;
    getch();
    system("cls");
}

int adminMenu()
{
    int option;
    cout << "Select one of the following options number..." << endl;
    cout << "1. " << endl;
    cout << "2. " << endl;
    cout << "3. " << endl;
    cout << "4. " << endl;
    cout << "5. " << endl;
    cout << "6. Exit" << endl;
    cout << "Your Option..";
    cin >> option;
    return option;
}

void adminInterface()
{
    int adminOption = 0;
    while (adminOption != 6)
    {
        topHeader();
        subMenu("");
        adminOption = adminMenu();
        if (adminOption == 1)
        {
            system("cls");
            topHeader();
            subMenu("View");
            // Implement the Functionality
        }
        // Implement the rest of the Admin Options
        clearScreen();
    }
}

int userMenu()
{
    int option;
    cout << "Select one of the following options number..." << endl;
    cout << "1. " << endl;
    cout << "2. " << endl;
    cout << "3. " << endl;
    cout << "4. Exit" << endl;
    cout << "Your Option..";
    cin >> option;
    return option;
}

void userInterface()
{
    int userOption = 0;
    while (userOption != 4)
    {
        topHeader();
        subMenu("");
        userOption = userMenu();
        if (userOption == 1)
        {
            system("cls");
            topHeader();
            subMenu("View Details");
            // Implement the View Details Functionality
        }
        // Implement the rest of the User Options
        clearScreen();
    }
}
