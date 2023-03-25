#include <iostream>
#include <ctime>
using namespace std;

int main() {
	//Finding elapsed seconds and current second
	long elapsedSeconds = time(0);
	int currentSecond = elapsedSeconds % 60;
	//Finding elapsed minutes and current minute
	long elapsedMinutes = elapsedSeconds / 60;
	int currentMinute = elapsedMinutes % 60;
	//Finding elapsed hour and current hour
	long elapsedHours = elapsedMinutes / 60;
	int currentHour = elapsedHours % 24;
	//printing current time
	cout << "Current time : ";
	cout << currentHour+9 << " : " << currentMinute << " : " << currentSecond << endl;
	
	return 0;
}