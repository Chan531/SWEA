#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	vector<int> number;
	int testcase, n, num;
	cin >> testcase;
	for (int i = 0; i < testcase; i++)
	{
		vector<pair<int, int>> v(101);
		cin >> n;
		for (int j = 0; j < 1000; j++)
		{
			cin >> num;
			v[num].first++;
			v[num].second = num;
		}
		sort(v.begin(), v.end());
		number.push_back(v[v.size() - 1].second);
		v.clear();
	}
	for (int i = 0; i < testcase; i++)
	{
		cout << '#' << i + 1 << ' ' << number[i] << '\n';
	}
	return 0;
}