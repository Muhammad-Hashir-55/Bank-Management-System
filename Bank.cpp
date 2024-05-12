#include "pch.h"
#include "Bank.h"
#include <Windows.h>
#include <conio.h>
#include <iostream>
using namespace std;
  
Bank::Bank() {
	total = 0;
}

void Bank::perData()
{

    cout << "Enter data of person " << total + 1 << endl;

    cout << "Enter name: ";

    cin >> person[total].name;

    cout << "ID: ";

    cin >> person[total].ID;

    cout << "Address: ";

    cin >> person[total].address;

    cout << "Contact: ";

    cin >> person[total].contact;

    cout << "Total Cash: ";

    cin >> person[total].cash;

    total++;
}

//void Bank::show()
//{
//
//    for (int i = 0; i < total; i++)
//    {
//
//        cout << "Data of person " << i + 1 << endl;
//
//        cout << "Name: " << person[i].name << endl;
//
//        cout << "ID: " << person[i].ID << endl;
//
//        cout << "Address: " << person[i].address << endl;
//
//        cout << "Contact: " << person[i].contact << endl;
//
//        cout << "Cash: " << person[i].cash << endl;
//    }
//}

void Bank::update()
{

    cout << "Enter id of student those data you want to update" << endl;

    cin >> id;

    for (int i = 0; i < total; i++)
    {

        if (id == person[i].ID)
        {

            cout << "Previous data" << endl;

            cout << "Data of person " << i + 1 << endl;

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

    cout << "Enter id of student those data you want to search" << endl;

    cin >> id;

    for (int i = 0; i < total; i++)
    {

        if (id == person[i].ID)
        {

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

    char ch;

    cout << "Press 1 to remove specific record" << endl;

    cout << "Press 2 to remove full record" << endl;

    //ch = getch();
    cin >> ch;

    switch (ch)
    {

    case '1':

        cout << "Enter id those data you want to remove" << endl;

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

                    total--;

                    cout << "Your required data is deleted" << endl;

                    break;
                }
            }

            if (i = total - 1)
            {

                cout << "No such record found" << endl;
            }
        }

        break;

    case '2':

        total = 0;

        cout << "All record is deleted" << endl;

        break;

    default:

        cout << "Invalid Input" << endl;

        break;
    }
}

void Bank::settotal(int tot){
   // Bank::total  = tot;
   Bank::total = tot;

}

int Bank::gettotal() {
    return Bank::total;
}
void Bank::setid(string id) {
    Bank::id = id;
}
string Bank::getid() {
    return Bank::id;
}
void Bank::setname(string nam) {
    Bank::person[0].name = nam;
}
string Bank::getname() {
    return Bank::person[0].name;
}

void Bank::setaddress(string add) {
    Bank::person[0].address = add;
}
string Bank::getaddress() {
    return Bank::person[0].address;
}