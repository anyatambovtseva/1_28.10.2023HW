#include <iostream>
using namespace std;
int main()
{
	int a, k = 0;
	for (a = 1000; a < 10000; a++)
		if ((a % 10) + (a % 100 / 10) + (a / 100 % 10) + (a / 1000) == 15)
			k++;
	cout << k;
	return 0;
}
