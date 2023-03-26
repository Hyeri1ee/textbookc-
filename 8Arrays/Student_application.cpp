#include "Student.h"
int main(void)
{
	Student students[5];
	students[0] = Student("Georgia", 82);
	students[1] = Student("John", 73);
	students[2] = Student("Luci", 91);
	students[3] = Student("Mary", 91);
	students[4] = Student("Sue", 65);

	for (int i = 0; i < 5; i++)
	{
		students[i].print();
	}
	return 0;
}