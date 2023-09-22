#include <iostream>
using namespace std;
main()
{
cout<< "Enter a 4-digit number: ";
int num;
cin>>num;
int num1;
int num2;
int num3;
int num4;
num1=num%10;
num2=(num/10)%10;
num3=(num/100)%10;
num4=(num/1000)%10;
int sum=num1+num2+num3+num4;
cout << "Sum of the individual digits: "<<sum;

}