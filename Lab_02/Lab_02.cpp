// Lab_2_1.cpp
// < �������� ��� >
// ����������� ������ �2.1
// ˳��� ��������.
// ������ 16


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // ������� ��������
	// double z1; // ��������� ���������� 1-�� ������
	double z2;// ��������� ���������� 2-�� ������

	cout << "x = "; cin >> x;

	// z1 = (x * x + 2 * x - 3 + (x + 1) * sqrt(x * x - 9)) / (x * x - 2 * x - 3 + (x - 1) * sqrt(x * x - 9));
	z2 = sqrt((x + 3) / (x - 3));

	cout << endl;
	// cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	cin.get();
	return 0;
}
