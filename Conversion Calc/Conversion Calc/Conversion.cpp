#include <iostream>
#include <string>
using namespace std;

int main()
{
	string nameString;

		int firstNum;
		int pounds;
		int pesos;
		int yen;

		cout << "Enter your value ";
		cin >> firstNum;

		pounds = firstNum / .6318;



		cout << "There are " << pounds << " British Pounds in " << firstNum << " American dollars" << endl;
		

		system("pause");
		return 0;
}