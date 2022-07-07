//This program demonstrates the use of structures. 
#include <iostream>
#include <string>
#include <iomanip>
using namespace std; 

struct PayRoll 
{
	int empNumber = 0;	 //Employee number
	string name;	     //Employee's name
	double hours = 0;	 //hours worked
	double payRate = 0;  //Hourly payRate
	double grossPay = 0; //Gross pay
};

int main()
{
	PayRoll employee;	//employee is a PayRoll structure 

	//Get the employee's number. 
	cout << "Enter the employee's number: "; 
	cin >> employee.empNumber; 

	//Get the employee's name. 
	cout << "Enter the employee's name: "; 
	cin.ignore();	//To skip the remaining '\n' character
	getline(cin, employee.name); 

	//Get the hours worked by the employee. 
	cout << "How many hours did the employee work? "; 
	cin >> employee.hours; 

	//Get the employee's hourly pay rate. 
	cout << "What is the employee's hourly payRate? "; 
	cin >> employee.payRate; 

	//Calculate the employee's gross pay. 
	employee.grossPay = employee.hours * employee.payRate; 

	//Display the employee data. 
	cout << "Here is the employee's payroll data:\n"; 
	cout << "Name: " << employee.name << endl; 
	cout << "Number: " << employee.empNumber << endl; 
	cout << "Hours worked: " << employee.hours << endl; 
	cout << "Hourly payRate: " << employee.payRate << endl; 
	cout << fixed << showpoint << setprecision(2); 
	//fixed keyword is used to display value in original state not exponential
	//showpoint keyword is used to display the numbers after the decimal 
	//setprecision keyword is used to display to round up the decimal numbers  
	cout << "Gross Pay: $" << employee.grossPay << endl;
	return 0; 
}