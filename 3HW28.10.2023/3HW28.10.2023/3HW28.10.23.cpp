#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n, a, s=0;
	cout << "введите число с клавиатуры: ";
	cin >> n;
	for (a = 1; a < n + 1; a++)
		s = s + a;
	cout << s;
	return 0;
}