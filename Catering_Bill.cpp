//Sanithu Hulathduwage
//Building a program for a catering service using Arithmetic calculations
//and taking inputs from the user and displaying them on the bill as a result.


#include <iostream>
#include <iomanip>

using namespace std;
int main() {
  // Declaring the Variables
  int tot_people, x, y; 
  double tot1, tot2, price1, price2, price3, roomfee, tax, taxamount, deposit, tot_d, tot_f, subtotal, bdue;

  // Outputs and Inputs
  cout << "\nWelcome to the Catering Service. \n";
  cout<< "Please provide the following information \n\n";
  cout << "Number of adults: "; 
  cin >> x; 
  cout << '\n';
  cout << "Number of children: ";
  cin >> y;
  cout << '\n';
  cout << "Cost per adult meal: $ ";
  cin >> price1;
  cout << '\n';
  cout << "Price for a single dessert: $ ";
  cin >> price3;
  cout << '\n';
  cout << "Enter the Room Fee charge : $ ";
  cin >> roomfee;
  cout << '\n';
  cout << "Enter the current tax rate: ";
  cin >> tax;
  cout << '\n';
  cout << "Enter the amount of DEPOSIT: " << '$';
  cin >> deposit;
  cout << " \n\n";

  //Arithmetic operations and assignments
  tot_people = x + y;             //total number of people
  price2 = price1 * 0.6;          //price for 1 child
  tot1 = x * (price1);            //total price for adults
  tot2 = price2 * y;              //total price for children
  tot_d = price3 * tot_people;    //total price for desserts
  tot_f= tot_d+tot2+tot1;        //total food cost
  taxamount=tot_f*tax;             //tax amount in $
  subtotal= tot_f+taxamount+roomfee; //calculating subtotal
  bdue=subtotal-deposit;           //calculating balance due
  cout << "\n";

  // using manipulators to align the output bill

  cout << setw(50) << "*********** Catering Service ***********      \n";
  cout << '\n';
  cout << "Number of Adults: ";
  cout << setw(29) << x << '\n';
  cout << "Number of Children: ";
  cout << setw(27) << y << '\n';

  cout << "Cost per adult meal: ";
  cout << setw(20) << "$" << setw(7) << fixed << setprecision(2) << price1
       << '\n';
  cout << "Cost per child meal: ";
  cout << setw(20) << "$" << setw(7) << fixed << setprecision(2) << price2
       << '\n';
  cout << "Cost per dessert: ";
  cout << setw(23) << "$" << setw(7) << fixed << setprecision(2) << price3
       << '\n';
  cout << "Room fee: ";
  cout << setw(31) << "$" << setw(7) << fixed << setprecision(2) << roomfee
       << '\n';
  cout << "Tax rate: ";
  cout << setw(38) << fixed << setprecision(2) << tax << '\n';
  cout << '\n';

  cout << "Total for adult meals: ";
  cout << setw(18) << "$" << setw(7) << fixed << setprecision(2) << tot1
       << '\n';
  cout << "Total for child meals: ";
  cout << setw(18) << "$" << setw(7) << fixed << setprecision(2) << tot2
       << '\n';
  cout<< "Total for desserts: ";
  cout<<setw(21)<<"$"<<setw(7)<<fixed<<setprecision(2)<<tot_d<<'\n';
  cout<< "Tax amount: ";
  cout<<setw(29)<<"$"<<setw(7)<<fixed<<setprecision(2)<<taxamount<<'\n';
  cout<<"Room fee: ";
  cout<<setw(31)<<"$"<<setw(7)<<fixed<<setprecision(2)<<roomfee<<'\n';
  cout<<"\n";


  cout<<"Subtotal: ";
  cout<<setw(31)<<"$"<<fixed<<setw(7)<<setprecision(2)<<subtotal<<'\n';
  cout<<"Less Deposit: ";
  cout<<setw(27)<<"(-) $"<<fixed<<setw(7)<<setprecision(2)<<deposit<<'\n';
  cout<<"________________________________________________\n";
  cout<<"Balance due: ";
  cout<<setw(28)<<"$"<<fixed<<setw(7)<<setprecision(2)<<bdue<<endl<<endl;
  

  return 0;
}