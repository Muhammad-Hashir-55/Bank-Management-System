#include <iostream>
using namespace std;
int main() 
{

    int balance = 45000;
    int depositamount;
    cout <<"this is just testing the output and publishing this file for github repository"<<endl;
    cout <<"testing line "<<endl;
    cout <<"choose your desired option : "<<endl;
    int choice;
    cout <<"press 1 to show balance"<<endl;
    cout <<"press 2 to deposit amount "<<endl;
    cin>>choice;
    if (choice == 1){
        cout <<"your current balance is "<<balance<<endl;
    }
    else if (choice == 2){
        cout <<"enter the amount"<<endl;
        cin>>depositamount;
        cout <<"your new balance is "<<balance + depositamount<<endl;


    }
    cout <<"this line will be printed by default"<<endl;
return 0;
}