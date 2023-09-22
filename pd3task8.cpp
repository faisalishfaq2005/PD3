#include <iostream>
using namespace std;
main()
{
cout << "Enter vegetable price per kilogram (in coins): ";
double vegPrice;
cin>>vegPrice;
cout << "Enter fruit price per kilogram (in coins): ";
double fruitPrice;
cin>>fruitPrice;
cout << "Enter total kilograms of vegetables: ";
double vegTotal;
cin>>vegTotal;
cout << "Enter total kilograms of fruits: ";
double fruTotal;
cin>>fruTotal;
double vegRPS=(vegPrice*vegTotal)/1.94;
double fruRPS=(fruitPrice* fruTotal)/1.94;
double total=vegRPS+fruRPS;

cout<< "Total earnings in Rupees (Rps): "<<total;
}