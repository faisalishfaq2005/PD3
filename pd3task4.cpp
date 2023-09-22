#include <iostream>
using namespace std;
main()
{
cout << "Enter Imposter Count: ";
double imCount;
cin>>imCount;
cout << "Enter Player Count: ";
double plaCount;
cin>>plaCount;
double Ccount=(imCount/plaCount)*100;
cout<< "Chance of being an imposter: "<<Ccount<<"%";
}