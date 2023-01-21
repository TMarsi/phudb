#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	a != 0;
	b != 0;
	c != 0;
	cout << "hay nhap 3 canh cua tam giac " << endl;
	cin >> a >> b >> c;
	if (a+b>c && b+c>a && a+c>b)
	{
	cout << "la 3 canh cua tam giac" << endl;
	}
	else 
	{
		cout << "khong la 3 canh cua tam giac" << endl;
	}

	system ("pause");

	return 0;
}