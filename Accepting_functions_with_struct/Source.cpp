//This program has functions that accept structure variables 
//as arguments. 
#include <iostream>
#include <iomanip>
#include <string>
using namespace std; 

struct InventoryItem
{
	int partNum = 0;		//Part number
	string description; //Item description
	int onHand = 0;			//Units on hand
	double price = 0;		//Unit price
};

//Function Prototypes 
void getItem(InventoryItem&);	//Argument passed by reference 
void showItem(InventoryItem);  //Argument passed by value

int main()
{
	InventoryItem part; 

	getItem(part); 
	showItem(part); 
	return 0; 
}

void getItem(InventoryItem& p)	//Uses a reference parameter 
{
	//Get the part number. 
	cout << "Enter the part number: "; 
	cin >> p.partNum; 

	//Get the part description. 
	cout << "Enter the part description: "; 
	cin.ignore();	//Ignore the remaining newline character
	getline(cin, p.description); 

	//Get the quantity on hand. 
	cout << "Enter the quantity on hand: "; 
	cin >> p.onHand;

	//Get the unit price. 
	cout << "Enter the unit price: "; 
	cin >> p.price; 
}

void showItem(InventoryItem p)
{
	cout << fixed << showpoint << setprecision(2); 
	cout << "Part Number: " << p.partNum << endl; 
	cout << "Description: " << p.description << endl; 
	cout << "Units On Hand: " << p.onHand << endl; 
	cout << "Price: $" << p.price << endl; 
}