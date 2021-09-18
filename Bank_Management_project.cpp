#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;
class bank{
    char name[100], add[100],y;
    int balance,amount;
public:
    void open_account();
    void deposit_money();
    void withdraw_money();
    void display_account();

};
void bank :: open_account()
{
    cout << "\n\t\t\tEnter your full name ::\n";
    cin.ignore();
    cin.getline(name,100);
    cout<<"\n\t\t\tEnter your Address ::\n";
    cin.ignore();
    cin.getline(add,100);
    cout <<"\n\t\t\tWhat type of account you want to open saving (s) or current (c)\n";
    cin>>y;
    cout<< "\n\t\t\tEnter amount for deposit ::\n";
    cin>>balance;
    cout<<"\n\t\t\tYour account is created \n";



}
void bank ::deposit_money()
{
    int a;
    cout<<"\n\t\t\tEnter how much money you want to deposite ::\n";
    cin>>a;
    balance+=a;
    cout<<"\n\t\t\tTotal amount you deposite :: "<<balance<<"\n";

}
void bank :: display_account()
{
    cout <<"\n\t\t\tYour full name  ::"<<name<<endl;
    cout <<"\n\t\t\tYour address ::"<<add<<endl;
    cout <<"\n\t\t\tType of account that you open :: "<<y<<endl;
    cout <<"\n\t\t\tAmount you deposite :: "<<balance<<endl;

}void bank :: withdraw_money(){
    float amount;
    cout<<"\n\t\t\t Withdraw ::";
    cout<< "\n\t\t\t Enter amount to withdraw";
    cin>>amount;
    balance-=amount;
    cout <<"\n\t\t\t Now total amount left is :: "<<balance<<"\n";


}

int main(){
    cout<<"\n\t\t\tBANK MANAGEMENT";
int ch,x;
bank obj;
    do
    {
    cout<<"\n\t\t\t1) Open account \n";
    cout<<"\n\t\t\t2) Deposite money \n";
    cout<<"\n\t\t\t3) withdraw money \n";
    cout<<"\n\t\t\t4) Display account \n";
    cout<<"\n\t\t\t5) Exit \n";
    cout<<"\n\n\t\t\tSelct the option from above \n";
    cin>>ch;
    switch(ch){
        case 1:
        cout<< "1) open account \n";
        obj.open_account();
        break;
         
        case 2:
        cout<<"2) deposite money\n";
        obj.deposit_money();
        break;

        case 3:
        cout<<"3) withdraw money : \n";
        obj.withdraw_money();
        break;

        case 4:
        cout<<"4) Display account \n";
        obj.display_account();
        break;

        case 5:
          if (ch==5)
          {
              exit(1);
          }
    default:
       cout <<"This does not exist please try again \n";

    }
    cout<<"\n\t\t\t Do you want to select next option then press :: y\n";
    cout<<"\n\t\t\tif you want to exit then press :: N\n";
    x=getch();
    if (x=='n'|| x=='N')
    exit(0);
    } while (x=='y'|| x=='Y');

    getch();

    return 0;
}