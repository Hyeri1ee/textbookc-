#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	//Declarationa and intialization
	int low = 5;
	int high = 15;
	int tryLimit = 5;
	int guess;
	//Generation of random number
	srand(time(0));
	int temp = rand();
	int num = temp % (high - low + 1) + low;
	//Guessing loop
	int counter = 1;
	bool found = false;
	while (counter <= tryLimit && !found)
	{
		do {
			cout << "Enter your guess between 5 to 15 (inclusive): ";
			cin >> guess;
		} while (guess < 5 || guess > 15);
		if (guess == num)
			found = true;
		else if (guess > num)
		{
			cout << "Your guess was too high!" << endl;
		}
		else
		{
			cout << "Your guess was too low!" << endl;
		}counter++;
	}

	//result 
	if (found)
	{
		cout << "Congratulation: You found it in "<< counter << "!";
		cout << "The number was : " << num;
	}
	else
	{
		cout << "Sorry, you did not find it!";
		cout << "The number was : " << num;
	}
	return 0;
}