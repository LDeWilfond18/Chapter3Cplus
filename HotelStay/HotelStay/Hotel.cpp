#include <iostream>
using namespace std;

string name;

int main()
{
	double daysStayed = 0.0;
	double roomCharge = 0.0;
	double internetCharge = 0.0;
	double totalBill = 0.0;

	cout << "Enter the days stayed: ";
	cin >> daysStayed;
	cout << "Enter the room charge: ";
	cin >> roomCharge;
	cout << "Enter the internet charge: ";
	cin >> internetCharge;
	
	totalBill = internetCharge * daysStayed + roomCharge;

	cout << "*****************************\n";
	cout << "Your total charge is: " << totalBill;
	cout << "\n*****************************\n";

	system("pause");

	return 0;
}