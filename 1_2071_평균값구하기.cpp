#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	int n, num;
	double sum, ave;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		sum = 0;
		for (int j = 0; j < 10; j++)
		{
			cin >> num;
			sum += num;
		}
		cout << fixed;
		cout.precision(1);
		ave = floor(sum / 10 + 0.5);
		cout << '#' << i + 1 << ' ' << int(ave) << '\n';
	}
	return 0;
}