#include <iostream>
using namespace std;
main()
{
cout << "Number of square meters you can paint: ";
int noMeters;
cin>>noMeters;
cout << "Width of the single wall (in meters): ";
int w;
cin>>w;
cout << "Height of the single wall (in meters): ";
int h;
cin>>h;

double noWalls=noMeters/(w*h);
cout<< "Number of walls you can paint: "<<noWalls;
}