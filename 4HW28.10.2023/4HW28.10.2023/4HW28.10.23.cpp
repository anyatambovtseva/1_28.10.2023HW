#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a,p;
	cout << "������� ����������� �����: ";
	cin >> a;
	while (a < 100 || a>999)
	{
		cout << "����� �� ������������� ������� ������, ���������� �����" << endl;
		cin >> a;
	}
	p = (a % 10) * (a / 10 % 10) * (a / 100);
	cout << p;
	return 0;
}