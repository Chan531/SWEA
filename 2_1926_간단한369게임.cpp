#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		string s = to_string(i);
		string out = "";
		for (int j = 0; j < s.length(); j++)
		{
			if (s[j] == '3' || s[j] == '6' || s[j] == '9')
				out += '-';
		}
		if (out.length() != 0)
			cout << out << ' ';
		else
			cout << s << ' ';
	}
	return 0;
}