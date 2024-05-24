#include <iostream>
#include <math.h>
using namespace std;

double findSqrt(double  x)
{
	if (x < 2)
		return x;

	double y = x;
	double z = (y + (x / y)) / 2;
	while (abs(y - z) >= 0.00001) {
		y = z;
		z = (y + (x / y)) / 2;
	}
	return z;
}

int main()
{

	double n;
    cin >> n;
	double ans = findSqrt(n);
	cout <<ans << endl;
	return 0;
}
