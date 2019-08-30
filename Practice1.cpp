#include <iostream>
using namespace std;

int main()
{
	int value = 1; /* Must have initialized value before using in this while statement*/
	while (value != 0)
	{
		cout << "Please give me a value: " << endl;
		cin >> value;
		if (value == 0)
			break;
		cout << "The square of your value is " << pow(value, 2) << endl;
	}

	system("pause");
	return 0;
}