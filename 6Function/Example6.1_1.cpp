#include <iostream>
using namespace std;
class Larger {
private:
	int num1, num2;
public:
	int larger(int first, int second)
	{
		int temp;
		if (first > second)
		{
			temp = first;
		}
		else
		{
			temp = second;
		}
		return temp;
	}
};
int main(void)
{
	Larger l;
	cout << l.larger(3, 13);
	cout << l.larger(10, 12);
	cout << l.larger(2, 12);
	return 0;
}