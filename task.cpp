#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int Var(char a[30]) {
	int v;
	v = abs(static_cast<int>(a[0])) % 2 + 1;
	return v;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Enter the surname: ";
	char surname[30];
	cin >> surname;
	cout << Var(surname);
}
