#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	string s;
	cin >> s;

	int list[26] = { 0, };

	for (int i = 0; i < s.length(); i++)
	{
		int n = s[i];
		if (n < 97)
			list[n - 65]++;
		else
			list[n - 97]++;

	}

	int max = 0;
	int index = 0;

	for (int i = 0; i < 26; i++)
	{
		if (max < list[i])
		{
			max = list[i];
			index = i;
		}

	}
	int count = 0;

	for (int i = 0; i < 26; i++)
	{
		if (list[i] == max)
		{
			count++;
			if (count >= 2)
			{
				cout << "?" << endl;
				return 0;
			}
		}
	}
	cout << (char)(index + 65) << endl;

	return 0;
}