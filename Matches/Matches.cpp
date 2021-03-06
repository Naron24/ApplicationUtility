// Matches.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "ConsoleMenu.h"
#include "FactroialAlgo.h"
#include "MatchesAlgo.h"
#include "FactorialMenu.h"
#include "MatchesMenu.h"
using namespace std;

///The class for the exercise execution
class Exercise
{
public:
	Exercise()
	{

	}
	~Exercise();
	///MatchStick Exercise
	void MatchSticksMenu() {
		while (true)
		{
			int value = 0;
			cout << endl << endl << "Hi, there please enter the number of squares you want to create." << endl << endl << "The programm on its turn will create the min number of matches it needs." << endl;
			cin >> value;
			if (1 <= value && value <= 2000) {
				int result = CalculateMatchSticks(value);
				if (result != 0) {
					cout << "The result is " << result << endl << endl;
					break;
				}
				else {
					cout << "The value is wrong! Please try once more time!";
					continue;
				}
			}
			else {
				cout << "The value is wrong! Please try once more time!";
				continue;
			}
		}
	}
	///Factorial Exercise
	void FactorialMenu() {
		while (true)
		{
			int value = 0;
			cout << endl << endl << "Hi, there please enter the number of squares you want to create. " << endl << "The programm will calculate the number from the factorial."
				<< endl << endl;
			cin >> value;
			if (value >= 1 && value <= INT32_MAX) {
				int result = FindFactorialFromNumber(value);
				if (result != 0) {
					cout << "The result is " << result << endl << endl;
					break;
				}
				else {
					cout << "The value is wrong! Please try once more time!";
					continue;
				}
			}
			else {
				cout << "The value is wrong! Please try once more time!";
				continue;
			}
		}
	}
private:
	///The algorythm for matchsticks
	int CalculateMatchSticks(int value) {
		int matchsticks = 0;
		for (int i = 1; i <= value; i++)
		{
			matchsticks = matchsticks + 4 * i;
		}
		return matchsticks;
	}
	///The algorythm for factorial
	int FindFactorialFromNumber(int num) {

		int i = 1;
		if (1 <= num && num <= 2000)
		{
			do
			{
				num /= i;
				i++;
			} while (num > 1);
		}
		///Excluding the division on 1
		return i - 1;
	}

	int value = 0;
};

Exercise::~Exercise()
{
}


int main()
{
	///The Ordinary solution 
	/*Exercise exer;
	exer.MatchSticksMenu();
	exer.FactorialMenu();*/

	///Experimental use case for such a programm 
	///Failing
	IAlgorythm* algo = new MatchesAlgo();
	IMenu* menu = new MatchesMenu(algo);

	IApplication* app = new MatchesApplication();
	app->Initialize().SetAlgo(*algo).SetMenu(*menu)
		.Start();
	algo = new FactorialAlgo();
	menu = new FactorialMenu(algo);

	app->Initialize()
		.SetAlgo(*algo).SetMenu(*menu)
		.Start();

	delete app;
	delete algo;
	delete menu;
	/*algo = &FactorialAlgo();
	menu = &FactorialMenu(algo);*/
	/*	app->Initialize()
			.SetAlgo()
			.SetMenu().Start();*/
			/*MatchesApplication()
				.Initialize().SetAlgo(*algo).SetMenu(*menu)
				.Start();*/
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
