#include <iostream>
using namespace std;
main()
{
cout << "Enter the Name of the Person: ";
string name;
cin>>name;
cout << "Enter the target weight loss in kilograms: ";
double target;
cin>>target;
double days=target * 15;
cout<< name<<" will need "<<days<< " days to lose "<<target<< " kg of weight by following the doctor's suggestions";
}