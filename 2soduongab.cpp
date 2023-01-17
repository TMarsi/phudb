#include <iostream>
using namespace std;

int main()
{
	char a , b;
	1 <= b <= a <=108;
	cin >> a;
	cin >> b;
	if (a%b==0)
	{
	cout << "a" << endl;
	}
	else 
	{
	cout << (a/b+1)*b << endl;
	}

	system("pause");

	return 0;
}