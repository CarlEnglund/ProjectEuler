#include <iostream>
#include <cstdlib>
#include <vector>


using namespace std;
int main () 
{
	int max = 0;
	int i = 2;
	int s;
	vector<int> storage(100000);

	cout << "Which primenumber do you want to know of?" << endl;
	cin >> s;


   do
   {
   		i++;
        for (int j=2; j<i; j++)
        {
            if (i % j == 0) 
                break;
            else if (i == j+1)
            {
            	storage[max] = i;
            	max++;
            }

        } 
    }while(max < s);

    cout <<"I have now reached the " << s << " primenumber" << endl << "The answer to your question is " << storage.at(max-2) << endl;
    system("pause");  
    return 0;
}