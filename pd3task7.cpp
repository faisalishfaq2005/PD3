#include <iostream>
using namespace std;
main()
{
cout << "Enter the movie name: ";
string name;
cin>>name;
cout << "Enter the adult ticket price: $";
int adultPrice;
cin>>adultPrice;
cout << "Enter the child ticket price: $";
int childPrice;
cin>>childPrice;
cout << "Enter the number of adult tickets sold: ";
int adultSold;
cin>>adultSold;
cout << "Enter the number of child tickets sold: ";
int childSold;
cin>>childSold;
cout << "Enter the percentage of the amount to be donated to charity: ";
int charity;
cin>>charity;
cout<<endl;
int total=(adultPrice * adultSold) + (childPrice * childSold);
int donation=total/charity;
int remaining=total-donation;
cout<< "Movie: "<<name<<endl;
cout<< "Total amount generated from ticket sales: $"<<total<<endl;
cout<< "Donation to charity ("<<charity<<"%): $"<<donation<<endl;
cout<< "Remaining amount after donation: $"<<remaining;
}