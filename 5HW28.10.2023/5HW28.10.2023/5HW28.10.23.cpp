#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int s,k=0;
	cout << "введите натуральное число: ";
	cin >> s;
	while (s > 0)
	{
		if ((s % 10) % 2 == 0)
			k++;
		s = s / 10;
	}
	cout << k;
	return 0;
}