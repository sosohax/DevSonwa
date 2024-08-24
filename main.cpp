#include <iostream>

using namespace std;

void deposit(double &balance)
{
  double amount;
  cout<<"Enter amount you want to deposite: R";
  cin>>amount;
  if(amount>0)
  {
      balance+=amount;
      cout<<"You have Deposited an amount of "<<amount<<" Successfully"<<endl;
  }
  else
  {
     cout<<"unfortunately the deposit was unsuccessfully, please try again"<<endl;
  }
}
void Withdraw(double &balance)
{
  double amount;
  cout<<"Enter an amount you want to withdraw: R";
  cin>>amount;
  if(amount<=balance)
  {
      balance-=amount;
      cout<<"Withdrawal of "<< amount<<" was successful"<<endl;
  }
  else
  {
      cout<<"You have insufficient funds to make this transaction"<<endl;
  }
}
void CheckBalance(double &balance)
{
  cout<<"Your Balance is: R"<<balance<<endl;
}
int main()
{
 double balance = 0.00;
 int Options;
 do{
    cout<<"_____Banking Management System___\n"<<endl;
    cout<<"Select one of the Options below!"<<endl;
    cout<<"1. Deposit Money"<<endl;
    cout<<"2. Withdraw money "<<endl;
    cout<<"3. Check Balance"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"Enter one of the options: ";
    cin>>Options;

switch(Options)
{
    case 1:
      deposit(balance);
    break;
    case 2:
        Withdraw(balance);
        break;
    case 3: CheckBalance(balance);
        break;
    case 4:
        cout<<"exiting the Program"<<endl;
        return 0;
        break;
    default:
        cout<<"Invalid input, please try again"<<endl;
        break;
}

 } while(Options!=4);


    return 0;
}
