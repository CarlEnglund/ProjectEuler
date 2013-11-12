#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main() 
{
	long stop = 4000000;
	long first = 1;
	long second = 2;
	vector<long> fibonacci(100);
	long total = 0;
	long breakpoint = 0;

	fibonacci[0] = first;
	fibonacci[1] = second;

	for(long i = 2; i < 100; i++)
	{
		fibonacci[i] = (fibonacci[i-1] + fibonacci[i-2]);
		if(fibonacci[i] < stop)
			breakpoint++;
	}

	for(long c = 0; c < 50; c++)
		cout << fibonacci[c] << endl;

	for(long i = 0; stop > fibonacci[i]; i++)
		if(fibonacci[i] % 2 == 0)
		{
			cout << fibonacci[i] << endl;
			total += fibonacci[i];
		}

	cout << total << endl;
	system("pause");
	return 0;
}