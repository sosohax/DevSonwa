#include <iostream>

using namespace std;

int main()
{
    //2d declaration
    int salaries[4][5];
    //size of row and colum
    int n1= sizeof(salaries)/sizeof(salaries[0]);
    int n2= sizeof(salaries[0])/sizeof(salaries[0][0]);
    //get user input
    for(int departments=0;departments<n1;departments++)
    {
        cout<<"Enter salary's for employees in Department "<<departments+1<<endl;
        for(int employees=0;employees<n2;employees++)
        {
            cout<<"Employee "<<employees+1<<": R";
            cin>>salaries[departments][employees];
        }
    }
    //Calculations
      cout<<endl;
    for(int departments=0;departments<n1;departments++)
    {
        double sum=0;
       for(int employees=0;employees<n2;employees++)
       {
           sum+=salaries[departments][employees];
       }
       double AVG = sum/5;
       cout<<"Average salary of employees in department "<<departments+1<<": "<<AVG<<endl;
    }
    return 0;
}
