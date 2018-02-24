#include <stdio.h>
#include <iostream>

using namespace std;

int f(int i, int n)
{
	int sum = i;
	if (i <= n) {
		i++;
		sum += f(i, n);
	}
	cout << i << "-" << sum << endl;
	return sum;
}
int sumE1(int *mas, int i, int len)
{
	int sum = mas[i];
	if (i < len)
	{
		i++;
		sum += sumE1(mas, i, len);
	}
	return sum;
}

float P(int i, float n)
{
	if (i > 0) {
		i--;
		n *= P(i, n);
	}
	return n;
}

void main()
{
	/*cout << "vvedite n-i element";
	int n = 0;
	cin >> n;
	cout << "n chlen= " << f(1, n) << endl;
*/
	/*int mas[5] = { 2,3,56,78,25 };
	cout << sumE1(mas, 0, 4) << endl;*/
	cout << P(6, 2.0) << endl;
}