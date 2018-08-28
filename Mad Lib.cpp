#include <iostream>
#include <string>
using namespace std;

int main()
{
	string color;
	string wordEst;
	string bodyPartPlural;
	string anAnimal;
	string aNoun;
	string pluralNoun;

	int a;
	int b;
	int c;

	cout << "Enter a color ";
	cin >> color;

	cout << "Enter a word ening in est ";
	cin >> wordEst;

	cout << "Enter a body part plural ";
	cin >> bodyPartPlural;

		cout << "Enter an animal";
	cin >> anAnimal;

	cout << "Enter a Noun";
	cin >> aNoun;

	cout << "Enter a Plural Noun";
	cin >> pluralNoun;

	cout << "Please enter a Number";
	cin >> a;

	cout << "Please enter another Number";
	cin >> b;
	
	cout << "Please enter another Number";
	cin >> c;

	cout << "The " << color << "Dragon is the " << wordEst << "Dragon of all. It has " <<
		c << bodyPartPlural << ", and a/an " << anAnimal << "shaped like a " <<
		aNoun << ". It loves to eat " << pluralNoun << ", although it will feast on nearly anything.";


}