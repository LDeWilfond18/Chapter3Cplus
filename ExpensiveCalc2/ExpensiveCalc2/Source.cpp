#include <iostream>
#include <string>
using namespace std;


int main()
{
	string nameString;

		int firstNum;
		int secondNum;
		int add;
		int subtract;
		int multiply;
		int divide;

		cout << "Please enter your first number ";
		cin >> firstNum;

		cout << "Please enter another number ";

		cin >> secondNum; 

		add = firstNum + secondNum;
		subtract = firstNum - secondNum;
		multiply = firstNum * secondNum;
		divide = firstNum / secondNum;

		cout << "The sum of " << firstNum << " and " << secondNum << " = " << add << endl;
		cout << "The difference of " << firstNum << " and " << secondNum << " = " << subtract << endl;
		cout << "The product of " << firstNum << " and " << secondNum << " = " << multiply << endl;
		cout << "The quotient of " << firstNum << " and " << secondNum << " = " << divide << endl;
		system("pause");


}