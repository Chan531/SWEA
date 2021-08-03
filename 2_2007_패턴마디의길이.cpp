#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int n;
	string s = "";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		for (int j = 1; j <= 10; j++)
		{
			if (s.substr(0, j) == s.substr(j, j))
			{
				cout << '#' << i + 1 << ' ' << j;
				break;
			}
		}
	}
	return 0;
}