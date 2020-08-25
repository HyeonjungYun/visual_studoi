#include <iostream>
using namespace std;

int main()
{
	int insert = 0;
	cin >> insert;
	for (int i = 0; i < insert; i++)
	{
		int rep = 0;
		cin >> rep;
		string s;
		cin >> s;

		for (int j = 0; j < s.length(); j++)
		{
			for (int k = 0; k < rep; k++)
				cout << s[j];
		}
	}

	return 0;
}