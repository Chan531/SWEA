#include <iostream>
#include <map>

using namespace std;

int main(void)
{
	int n, no;
	string s = "";
	map<char, int> m;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		no = 0;
		cin >> s;
		for (int j = 0; j < s.length(); j++)
			m[s[j]]++;
		for (int j = 0; j < s.length(); j++)
		{
			if (m[s[j]] != 2)
			{
				no = 1;
				cout << '#' << i + 1 << ' ' << "No\n";
				break;
			}
		}
		if (no == 0)
			cout << '#' << i + 1 << ' ' << "Yes\n";
		m.clear();
	}
	return 0;
}