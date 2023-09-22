#include <iostream>
using namespace std;
main()
{
cout << "Enter the size of the fertilizer bag in pounds: ";
double size;
cin>>size;
cout << "Enter the cost of the bag: $";
double cost;
cin>>cost;
cout << "Enter the area in square feet that can be covered by the bag: ";
double area;
cin>>area;
double ferPerPound=cost/size;
double ferPerArea=cost/area;
cout<< "Cost of fertilizer per pound: $"<<ferPerPound<<endl;
cout<< "Cost of fertilizing per square foot: $"<<ferPerArea;

}