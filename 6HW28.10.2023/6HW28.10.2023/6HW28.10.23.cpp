#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int s, maxi=0;
	cout << "введите натуральное число: ";
	cin >> s;
	while (s > 0)
	{
		if (s % 10 > maxi)
			maxi = s % 10;
		s = s / 10;
	}
	cout << maxi;
	return 0;
}