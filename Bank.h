#pragma once
//ref class Bank
//{
//};
#pragma once
#include <iostream>
#include <string>

using namespace std;
 
class Bank {
public :
   int total;

    string id;

    struct person
    {

        string name, ID, address;

        int contact, cash;

    } person[100]; 
    Bank();
    void perData();

    void show();

    void update();

    void search();

    void del();

    int gettotal();
    void settotal(int tot);
    void setname(string nam);
    void setid(string id);
    void setaddress(string add);
    //void setcontact(int con);
    //void setcash(int cas);
    string getname ();
    string getid();
    string getaddress();
    //int getcontact();
    //int getcash();
  /*  void setpersonid(string pid);
    string getpersonid();*/




};

