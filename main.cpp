#include <iostream>

using namespace std;

int main()
{
    double price =0;
    int quantity=0;

    cout<<"Enter quantity:"<<endl;
    cin>> quantity;
    cout<<"Enter Price:"<<endl;
    cin>> price;
    //calculate subTotal
    double subTotal= quantity*price;
    //Tax@ 15%
    double Tax= subTotal*0.15;
    //Calculate Total
    double Total=subTotal+Tax;
    //dISPLAY
    cout<<"The Subtotal is:R"<< fixed << setprecision(2)<<subTotal<<endl
    cout<<"Tax is:R"<< fixed << setprecision(2)<<Tax<<endl
    cout<<"And The Total is:R"<< fixed << setprecision(2)<<Total << endl;
    return 0;
}
