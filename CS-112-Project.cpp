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

public:
    Bank()
    {

        total = 0;
    }

    void perData();

    void show();

    void update();

    void search();

    void del();}
	;
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