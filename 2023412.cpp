#include <iostream>

int main()
{
	using namespace std;
	double mpg = 0;
	cout << "enter mpg:"; cin >> mpg;
	int consumption = (1 / mpg * 0.6214 * 3.785 * 10000 + 5) / 10;
	cout << "consumption per hundred kilometers:" << (double)consumption / 10;
	return 0;
}