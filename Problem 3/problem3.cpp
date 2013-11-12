#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>

using namespace std;

int main() 
{
	long long prime = 600851475143LL; 

	int counter = sqrt(prime);
	int i = 2;

	while (i <= counter)
	    if (prime % i == 0)
	    {
	        cout << i << endl;
	        prime = prime/i;
	    }
	    else
	        i++;

	system("pause");
	return 0;


}