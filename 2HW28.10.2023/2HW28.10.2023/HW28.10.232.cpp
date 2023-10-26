#include <iostream>
using namespace std;
int main()
{
	int a;
	for (a = 35; a < 88; a++)
		if (a % 7 == 1 || a % 7 == 2 || a % 7 == 5)
			cout << a << endl;
	return 0;
}