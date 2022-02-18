#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>


using namespace std;
class Bank{
    char name[10],accType[10];
    int accNo;
    double balance=0;
public:
    Bank(char inputName[10],int inputAccNo,char inputAccType[10],double inputBalance){
        strcpy(name,inputName);
        accNo = inputAccNo;
        strcpy(accType,inputAccType);
        balance = inputBalance;
    }
    void addAmount(double amount){
        balance = balance+amount;
    }
    int withDrawMoney(double amount){
        if(balance<amount){
            return 0;
        }
        else{
            balance = balance - amount;
        }
        return 1;
    }
    void display(){
        cout<<"\n\nName of Account Holder : "<<name;
        cout<<"\nBalance remains :"<<balance;
    }
};


int main(){
    int ch;
    char name[10],accType[10];
    int accNo;
    double balance=0,amount;
    cout<<"Enter the Depositors Name : ";
    cin>>name;
    cout<<"\nEnter the Depositors Account Number : ";
    cin>>accNo;
    cout<<"\nEnter Type of Account : ";
    cin>>accType;
    cout<<"\nEnter remaining balance : ";
    cin>>balance;
    Bank b1(name,accNo, accType, balance);
    do{
        system("cls");
        cout<<"Enter Your Choice : ";
        cout<<"\n1.Deposit the amount";
        cout<<"\n2.Withdrawal Amount";
        cout<<"\n3.Check Balance";
        cout<<"\n4.Exit";
        cin>>ch;
        switch(ch){
        case 1 :
            cout<<"Enter Amount You Wanna deposit : ";
            cin>>amount;
            b1.addAmount(amount);
            getch();
            break;
        case 2:
            cout<<"Enter the Amount You wanna Withdrawal : ";
            getch()ount;
            if(b1.withDrawMoney(amount)==-1){
                cout<<"Error .... Balance is less then withdrawal amount";
            }
            else{
                cout<<"Amount is Withdrawal ... Good Luck";
            }
            getch();
            break;
        case 3:
            b1.display();
            getch();
            break;
        case 4:
            break;
        default:
            cout<<"\n\nYou Entered Wrong choice .... ";
        }
    }while(ch!=4);
}