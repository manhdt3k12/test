#include <iostream>

using namespace std;

int main()
{
	int length, sum = 0;
	cout << "Enter the number of students in the group" << endl;
	cin >> length;
	
	int *marks = new int[length];
	cout << "Enter the marks of the students" << endl;
	
	for( int i = 0; i < length; i++ )            // entering marks of students
	{
		cin >> *(marks+i);
	}
	
	for( int i = 0; i < length; i++ )            // calculating sum
	{
		sum += *(marks+i);
	}
	cout << "sum is " << sum << endl;
	delete[] marks;
	return 0;
}
/* Output
Enter the number of students in the group
4
Enter the marks of the students
65
47
74
45
sum is 231
 */