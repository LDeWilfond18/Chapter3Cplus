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

		pounds = firstNum * .6318;
		pesos = firstNum * 12.8863;
		yen = firstNum * 82.34;

		cout << "There are " << pounds << " British Pounds in " << firstNum << " American dollars" << endl;
		cout << "There are " << pesos << " Mexican pesos in " << firstNum << " American dollars" << endl;
		cout << "There are " << yen << " Japanese yen in " << firstNum << " American dollars" << endl;

		system("pause");
		return 0;
}