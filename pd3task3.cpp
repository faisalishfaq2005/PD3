#include <iostream>
using namespace std;
main()
{
cout <<"Enter Initial Velocity (m/s): ";
double iniVelocity;
cin>>iniVelocity;
cout <<"Enter Acceleration (m/s^2): ";
double acc;
cin >>acc;
cout <<"Enter Time (s): ";
double time;
cin>>time;
double finVelocity = (acc *time)+iniVelocity;
cout<< "Final Velocity (m/s): "<< finVelocity;
}