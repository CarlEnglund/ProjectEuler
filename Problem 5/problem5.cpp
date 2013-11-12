#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int primes []  = {2, 3, 5, 7, 11, 13, 17, 19};

   //Smallest divisor by all twenty numbers is all primes (with highest exponent possible that equals under twenty)
   //times eachother equals max.

   int x = primes[0]*primes[0]*primes[0]*primes[0]*primes[1]*primes[1];

   for(int i = 2; i < 8; i++)
    x *= primes[i];

    cout << x;
    system("pause");
    return 0;
}