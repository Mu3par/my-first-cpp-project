#include <iostream>
using namespace std;


int main()
{
cout << "========================\n";
cout << "== Age Calculator App ==\n";
cout << "========================\n";

int age;
cin >> age;
long long age_in_seconds = age * 31536000;
int age_in_minutes = age * 525600;
int age_in_hours = age * 8760;
int age_in_days = age * 365;
int age_in_weeks = age * 52;
int age_in_months = age * 12;
cout <<  " Your age in seconds is: " << age_in_seconds << endl;
cout <<  " Your age in minutes is: " << age_in_minutes << endl;
cout <<  " Your age in hours is: " << age_in_hours << endl;
cout <<  " Your age in days is: " << age_in_days << endl;
cout <<  " Your age in weeks is: " << age_in_weeks << endl;
cout <<  " Your age in months is: " << age_in_months << endl;

 cout << "==================================== Created by 3par ========" << endl; 
    return 0;
}
