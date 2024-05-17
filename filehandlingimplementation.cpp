#include <iostream>
#include <conio.h>
#include <windows.h>
#include <fstream>
#include <string>

using namespace std;

class Bank
{
public:
    int total;
    string id;

    struct person
    {
        string name, ID, address;
        int contact, cash;
    } person[100];

public:
    Bank() : total(0)
    {
        loadFromFile();
    }

    ~Bank()
    {
        saveToFile();
    }

    void perData();
    void show();
    void update();
    void search();
    void del();
    void saveToFile();
    void loadFromFile();
    virtual void login() = 0;
};

class Admin : public Bank
{
public:
    void login()
    {
        cout << " Welcome Admin" << endl;
    }
};

class employee : public Bank
{
public:
    void login()
    {
        cout << " Welcome Employee" << endl;
    }
};

class User : public Bank
{
public:
    void login()
    {
        cout << " Welcome user " << endl;
    }
    void transactions();
};

void welcome()
{
    cout << "___________________________________________________________________________" << endl;
    cout << "*     *    *******   *             ***       *         *     *     *******" << endl;
    cout << "*     *    *         *          **         *   *       * * * *     *" << endl;
    cout << "*  *  *    *******   *         **         *     *      *  *  *     *******" << endl;
    cout << "* * * *    *         *          **         *   *       *     *     *" << endl;
    cout << "*     *    *******   *******       ***       *         *     *     *******" << endl;
    cout << "___________________________________________________________________________" << endl;
    cout << endl << "To our Bank" << endl;
}

void define()
{
    cout << "______________________________" << endl;
    cout << "_ Press 1 if you are Admin    _" << endl;
    cout << "_ Press 2 if you are employee _" << endl;
    cout << "_ Press 3 if you are User     _" << endl;
    cout << "______________________________" << endl;
    cout << "Select how you want to login ." << endl;
}

int main()
{
    User u1;
    Admin a1;

    welcome();

    int choice;
loginselection:
    define();
    cin >> choice;

    if (choice == 1 || choice == 2 || choice == 3)
    {
        if (choice == 1)
        {
            a1.login();
            int insidechoice;
            string username, password;
            username = "hashir";
            password = "secret";
            string enusrname;
            string enpassword;
            cout << "Enter user name" << endl;
            cin.ignore();
            getline(cin, enusrname);
            while (enusrname != username)
            {
                cout << "Wrong username enter again !!" << endl;
                getline(cin, enusrname);
            }

            cout << "Enter password" << endl;
            getline(cin, enpassword);
            while (enpassword != password)
            {
                cout << "Wrong password enter again !! " << endl;
                getline(cin, enpassword);
            }
            cout << "Login successful  " << endl;

            char ch;
            while (1)
            {
                cout << "\n\nCHOOSE..!!" << endl;
                cout << "1. View customers list" << endl;
                cout << "2. Update information of existing account" << endl;
                cout << "3. Check the details of an existing account" << endl;
                cout << "4. Remove existing account" << endl;
                cout << "5. To go to login Screen Menu" << endl;
                cout << "6. Exit to fully exit the program without performing any changes or performing anything" << endl;

                cin >> ch;
                system("CLS");
                switch (ch)
                {
                case '1':
                    if (u1.total == 0)
                    {
                        cout << "No data is entered" << endl;
                    }
                    else
                    {
                        u1.show();
                    }
                    break;
                case '2':
                    if (u1.total == 0)
                        cout << "No data is entered" << endl;
                    else
                        u1.update();
                    break;
                case '3':
                    if (u1.total == 0)
                        cout << "No data is entered" << endl;
                    else
                        u1.search();
                    break;
                case '4':
                    if (u1.total == 0)
                        cout << "No data is entered" << endl;
                    else
                        u1.del();
                    break;
                case '5':
                    cout << "Going to login screen Page" << endl;
                    system("CLS");
                    goto loginselection;
                case '6':
                    exit(0);
                    break;
                default:
                    cout << "Invalid input" << endl;
                    break;
                }
            }
        }

        if (choice == 2)
        {
            employee e1;
            e1.login();
            string username, password;
            username = "employee";
            password = "secret";
            string enusrname;
            string enpassword;
            cout << "enter user name" << endl;
            cin.ignore();
            getline(cin, enusrname);
            while (enusrname != username)
            {
                cout << "Wrong username enter again!! " << endl;
                getline(cin, enusrname);
            }
            cout << "Enter password" << endl;
            getline(cin, enpassword);
            while (enpassword != password)
            {
                cout << "Wrong password enter again !!" << endl;
                getline(cin, enpassword);
            }
            cout << "Login successful " << endl;

            int insidechoice;
        employeeselection:
            cout << "Choose your desired option " << endl;
            cout << "Choose 1 to view customer list" << endl;
            cout << "Choose 2 to update info of existing account" << endl;
            cout << "Choose 3 view details of existing account " << endl;
            cout << "Choose 4 to go to login menu" << endl;
            cin >> insidechoice;
            if (insidechoice == 1)
            {
                if (u1.total == 0)
                {
                    cout << "no such data entries" << endl;
                    cout << "Do you want to go to the Employee screen?" << endl;
                    cout << "Choose 1 for yes" << endl;
                    cout << "Choose any other number to terminate the program" << endl;
                    cin >> insidechoice;
                    if (insidechoice == 1)
                    {
                        goto employeeselection;
                    }
                }
                else
                {
                    u1.show();
                    cout << "Do you want to go to the Employee screen?" << endl;
                    cout << "Choose 1 for yes" << endl;
                    cout << "Choose any other number to terminate the program" << endl;
                    cin >> insidechoice;
                    if (insidechoice == 1)
                    {
                        goto employeeselection;
                    }
                    else
                    {
                        cout << "Exiting the program...." << endl;
                        cout << "Please wait " << endl;
                        cout << endl;
                        cout << endl;
                    }
                }
            }
            if (insidechoice == 2)
            {
                if (u1.total == 0)
                {
                    cout << "no such data entries" << endl;
                    cout << "Do you want to go to the Employee screen?" << endl;
                    cout << "Choose 1 for yes" << endl;
                    cout << "Choose any other number to terminate the program" << endl;
                    cin >> insidechoice;
                    if (insidechoice == 1)
                    {
                        goto employeeselection;
                    }
                    else
                    {
                        cout << "Exiting the program...." << endl;
                        cout << "Please wait " << endl;
                        cout << endl;
                        cout << endl;
                    }
                }
                else
                {
                    u1.update();
                    cout << "----------------------" << endl;
                    u1.show();
                    cout << "Do you want to go to the Employee screen?" << endl;
                    cout << "Choose 1 for yes" << endl;
                    cout << "Choose any other number to terminate the program" << endl;
                    cin >> insidechoice;
                    if (insidechoice == 1)
                    {
                        goto employeeselection;
                    }
                    else
                    {
                        cout << "Exiting the program...." << endl;
                        cout << "Please wait " << endl;
                        cout << endl;
                        cout << endl;
                    }
                }
            }
            if (insidechoice == 3)
            {
                if (u1.total == 0)
                {
                    cout << "no such data entries" << endl;
                    cout << "Do you want to go to the Employee screen?" << endl;
                    cout << "Choose 1 for yes" << endl;
                    cout << "Choose any other number to terminate the program" << endl;
                    cin >> insidechoice;
                    if (insidechoice == 1)
                    {
                        goto employeeselection;
                    }
                    else
                    {
                        cout << "Exiting the program...." << endl;
                        cout << "Please wait " << endl;
                        cout << endl;
                        cout << endl;
                    }
                }
                else
                {
                    u1.search();
                    cout << "Do you want to go to the Employee screen?" << endl;
                    cout << "Choose 1 for yes" << endl;
                    cout << "Choose any other number to terminate the program" << endl;
                    cin >> insidechoice;
                    if (insidechoice == 1)
                    {
                        goto employeeselection;
                    }
                    else
                    {
                        cout << "Exiting the program...." << endl;
                        cout << "Please wait " << endl;
                        cout << endl;
                        cout << endl;
                    }
                }
            }
            if (insidechoice == 4)
            {
                cout << "Going to login screen Page" << endl;
                system("CLS");
                goto loginselection;
            }
        }
        if (choice == 3)
        {
            cout << "Welcome User" << endl;
            u1.transactions();
        }
    }
    else
    {
        cout << "Invalid input" << endl;
    }
    return 0;
}

void Bank::perData()
{
    int n;
    cout << "How many person data do you want to enter: ";
    cin >> n;

    for (int i = total; i < total + n; i++)
    {
        cout << "Enter data of person " << i + 1 << endl;
        cout << "Enter name: ";
        cin >> person[i].name;
        cout << "ID: ";
        cin >> person[i].ID;
        cout << "Address: ";
        cin >> person[i].address;
        cout << "Contact: ";
        cin >> person[i].contact;
        cout << "Total Cash: ";
        cin >> person[i].cash;
    }
    total += n;
}

void Bank::show()
{
    for (int i = 0; i < total; i++)
    {
        cout << "Data of person " << i + 1 << endl;
        cout << "Name: " << person[i].name << endl;
        cout << "ID: " << person[i].ID << endl;
        cout << "Address: " << person[i].address << endl;
        cout << "Contact: " << person[i].contact << endl;
        cout << "Cash: " << person[i].cash << endl;
    }
}

void Bank::update()
{
    cout << "Enter id of the person those data you want to update" << endl;
    cin >> id;
    for (int i = 0; i < total; i++)
    {
        if (id == person[i].ID)
        {
            cout << "Old data of person " << i + 1 << endl;
            cout << "Name: " << person[i].name << endl;
            cout << "ID: " << person[i].ID << endl;
            cout << "Address: " << person[i].address << endl;
            cout << "Contact: " << person[i].contact << endl;
            cout << "Cash: " << person[i].cash << endl;

            cout << "\nEnter new data" << endl;
            cout << "Enter name: ";
            cin >> person[i].name;
            cout << "ID: ";
            cin >> person[i].ID;
            cout << "Address: ";
            cin >> person[i].address;
            cout << "Contact: ";
            cin >> person[i].contact;
            cout << "Total Cash: ";
            cin >> person[i].cash;
            break;
        }
        if (i == total - 1)
        {
            cout << "No such record found" << endl;
        }
    }
}

void Bank::search()
{
    cout << "Enter id of the person those data you want to search" << endl;
    cin >> id;
    for (int i = 0; i < total; i++)
    {
        if (id == person[i].ID)
        {
            cout << "Data of person " << i + 1 << endl;
            cout << "Name: " << person[i].name << endl;
            cout << "ID: " << person[i].ID << endl;
            cout << "Address: " << person[i].address << endl;
            cout << "Contact: " << person[i].contact << endl;
            cout << "Cash: " << person[i].cash << endl;
            break;
        }
        if (i == total - 1)
        {
            cout << "No such record found" << endl;
        }
    }
}

void Bank::del()
{
    cout << "Enter id of the person those data you want to delete" << endl;
    cin >> id;
    for (int i = 0; i < total; i++)
    {
        if (id == person[i].ID)
        {
            for (int j = i; j < total; j++)
            {
                person[j].name = person[j + 1].name;
                person[j].ID = person[j + 1].ID;
                person[j].address = person[j + 1].address;
                person[j].contact = person[j + 1].contact;
                person[j].cash = person[j + 1].cash;
            }
            total--;
            cout << "Your required data is deleted" << endl;
            break;
        }
        if (i == total - 1)
        {
            cout << "No such record found" << endl;
        }
    }
}

void User::transactions()
{
    int choice;
    cout << "Press 1 to enter data" << endl;
    cout << "Press 2 to see entered data" << endl;
    cout << "Press 3 to search specific data" << endl;
    cout << "Press 4 to update data" << endl;
    cout << "Press 5 to delete data" << endl;
    cout << "Press 6 to exit the program" << endl;
    cin >> choice;
    system("CLS");
    switch (choice)
    {
    case 1:
        perData();
        break;
    case 2:
        if (total == 0)
        {
            cout << "No data is entered" << endl;
        }
        else
        {
            show();
        }
        break;
    case 3:
        if (total == 0)
        {
            cout << "No data is entered" << endl;
        }
        else
        {
            search();
        }
        break;
    case 4:
        if (total == 0)
        {
            cout << "No data is entered" << endl;
        }
        else
        {
            update();
        }
        break;
    case 5:
        if (total == 0)
        {
            cout << "No data is entered" << endl;
        }
        else
        {
            del();
        }
        break;
    case 6:
        exit(0);
    default:
        cout << "Invalid input" << endl;
        break;
    }
}

void Bank::saveToFile()
{
    ofstream file("bank_data.txt");
    if (file.is_open())
    {
        file << total << endl;
        for (int i = 0; i < total; i++)
        {
            file << person[i].name << endl;
            file << person[i].ID << endl;
            file << person[i].address << endl;
            file << person[i].contact << endl;
            file << person[i].cash << endl;
        }
        file.close();
    }
    else
    {
        cout << "Unable to open file for saving data." << endl;
    }
}

void Bank::loadFromFile()
{
    ifstream file("bank_data.txt");
    if (file.is_open())
    {
        file >> total;
        file.ignore();
        for (int i = 0; i < total; i++)
        {
            getline(file, person[i].name);
            getline(file, person[i].ID);
            getline(file, person[i].address);
            file >> person[i].contact;
            file >> person[i].cash;
            file.ignore();
        }
        file.close();
    }
    else
    {
        cout << "Unable to open file for loading data." << endl;
    }
}
