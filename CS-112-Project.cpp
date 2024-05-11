
#include <iostream>

#include <conio.h>



#include <windows.h>

using namespace std;
// creating a big parent class

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

// named as bank
// making

    Bank()
    {

        total = 0;
    }

    void perData();

    void show();

    void update();

    void search();


    void del();
	};
class Admin : public Bank
{
public:
};
class employee : public Bank
{
public:
};
class User : public Bank
{
public:
    void transactions();
};
void welcome(){
     cout<<"___________________________________________________________________________"<<endl;
    cout<<"*     *    *******   *             ***       *         *     *     *******"<<endl;
    cout<<"*     *    *         *          **         *   *       * * * *     *"<<endl;
    cout<<"*  *  *    *******   *         **         *     *      *  *  *     *******"<<endl;
    cout<<"* * * *    *         *          **         *   *       *     *     *"<<endl;
    cout<<"*     *    *******   *******       ***       *         *     *     *******"<<endl;
    cout<<"___________________________________________________________________________"<<endl;
    cout<<endl<<"To our Bank"<<endl;

}
void define(){
     cout<<  "______________________________"<<endl;
    cout << "_ Press 1 if you,re Admin    _" << endl;
    cout << "_ Press 2 if you,re employee _" << endl;
    cout << "_ Press 3 if you,re User     _" << endl;
    cout<<  "______________________________"<<endl;
    cout << "Select how you want to login ." << endl;
}
int main()
{
    // creating user object for our first customer
    User u1;
    // greeting message
   welcome();
    
    // creating bank object named b
    
    int choice;
loginselection:
    define();
    cin >> choice;
    if (choice == 1)
    {
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
        Admin a1;
        char ch;

        while (1)
        {

            cout << "\n\nCHOOSE..!!" << endl;

            cout << "1. View customers list" << endl;

            cout << "2. Update information of existing account" << endl;

            cout << "3. Check the details of an existing account" << endl;

            cout << "4. Remove existing account" << endl;

			cout <<"5. To go to login Screen Menu"<<endl;

            cout << "6. Exit to fully exit the program wihtout performing changing or performng anything" << endl;
             
			
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
				case '5' :
				cout <<"Going to login screen Page"<<endl;
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
        cout << "Choose 1 to veiw customer list" << endl;
        cout << "Choose 2 to update info of exisitng account" << endl;
        cout << "Choose 3 view details of existing account " << endl;
        cout << "Choose 4 to goto login menu" << endl;
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
                    ;
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
                    ;
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
			system("CLS");

            goto loginselection;
        }
    }
    if (choice == 3)
    {
        cout << "choose your Desired option" << endl;
        cout << "Either you want to log in as an old customer or create a new account" << endl;
        int insidechoice;
        cout << "choose 1 to log in as an old customer" << endl;
        cout << "choose 2 to create a new account" << endl;
        cin >> insidechoice;

        if (insidechoice == 1)
        {
            if (u1.total == 0)
            {
                cout << "No data is entered" << endl;
                cout << "Do you want to go back to the Employee screen?" << endl;
                cout << "Choose 1 for yes" << endl;
                cout << "Choose any other number to terminate the program" << endl;
                cin >> insidechoice;
                if (insidechoice == 1)
                {
				    system("CLS");

                    goto loginselection;
                }
                else
                {
                    cout << "Exiting the program...." << endl;
                    cout << "Please wait " << endl;
                    cout << endl;
                    cout << endl;
                    return 0;
                }
            }

            else
            {
                int userid;
                cout << "Enter your ID: ";
                cin >> userid;
                bool found = false;
                for (int i = 0; i < u1.total; i++)
                {
                    if (userid == stoi(u1.person[i].ID))
                    {
                        found = true;
                        cout << "Name: " << u1.person[i].name << endl;
                        cout << "ID: " << u1.person[i].ID << endl;
                        cout << "Address: " << u1.person[i].address << endl;
                        cout << "Contact: " << u1.person[i].contact << endl;
                        cout << "Cash: " << u1.person[i].cash << endl;
                        cout << "Welcome, dear customer!" << endl;
                        cout << "Choose your desired option:" << endl;
                        cout << "Choose 1 to perform transactions" << endl;
                        cout << "Choose 2 to view account details again" << endl;
                        cout << "Choose 3 to update your details" << endl;
                        cout << "Choose 4 to go back to the login screen" << endl;
                        cin >> insidechoice;

                        switch (insidechoice)
                        {
                        case 1:
                            u1.transactions();
                            break;
                        case 2:
                            u1.search();
                            break;
                        case 3:
                            u1.update();
                            break;
                        case 4:
                            goto loginselection;
                            break;
                        default:
                            cout << "Invalid choice" << endl;
                            break;
                        }
                        break;
                    }
                }
                if (!found)
                {
                    cout << "No record found with the entered ID" << endl;
                    cout << "Do you want to go back to the login screen?" << endl;
                    cout << "Choose 1 for yes" << endl;
                    cout << "Choose any other number to terminate the program" << endl;
                    cin >> insidechoice;
                    if (insidechoice == 1)
                    {
					  	system("CLS");

                        goto loginselection;
                    }
                    else
                    {
                        cout << "Exiting the program...." << endl;
                        cout << "Please wait " << endl;
                        cout << endl;
                        cout << endl;
                        return 0;
                    }
                }
            }
        }

        if (insidechoice == 2)
        {
            u1.perData();
            cout << "Do you want to go to the login screen?" << endl;
            cout << "Choose 1 for yes" << endl;
            cout << "Choose any other number to terminate the program" << endl;
            cin >> insidechoice;
            if (insidechoice == 1)
            {
                goto loginselection;
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

    // calling choice function
    //	b.choice();
    cout << "Thank you for coming to our Bank" << endl;
    return 0;
}