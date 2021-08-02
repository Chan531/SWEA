#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main(void)
{
	int testcase, n;
	long long int money, num;
	cin >> testcase;
	for (int i = 0; i < testcase; i++)
	{
		cin >> n;
		vector<long long int> v;
		money = 0;
		for (int j = 0; j < n; j++)
		{
			cin >> num;
			v.push_back(num);
		}
		while (!v.empty())
		{
			long long int max = *max_element(v.begin(), v.end());
			long long int index = max_element(v.begin(), v.end()) - v.begin();
			money -= accumulate(v.begin(), v.begin() + index, 0);
			money += max * index;
			v.erase(v.begin(), v.begin() + index + 1);
		}
		cout << '#' << i + 1 << ' ' << money << '\n';
		v.clear();
	}
	return 0;
}