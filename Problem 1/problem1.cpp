#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	const long three = 3, five = 5;
	long total = 0;
	
	for(int i = 0; i < 200; i++)
	{
		if(i*5 % 5 == 0)
			total += i*five;
	}

	for(int i = 0; i < 334; i++)
	{
		if(i*3 % 3 == 0)
			total += i*three;

	}

	for(int i = 0; i < 67; i++)
	{
		if(i*15 % 15 == 0)
			total -= i*15;

	}

	cout << total << endl;

	system("pause");
	return 0;

}
