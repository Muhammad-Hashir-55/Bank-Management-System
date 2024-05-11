#include<iostream>

#include<conio.h>

#include <windows.h>

using namespace std;
// creating a big parent class
// named as bank
// making
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

    void del();
};
