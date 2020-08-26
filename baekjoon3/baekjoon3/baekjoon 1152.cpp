#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	int count = 0;
	int begin = 0;
	int end = 0;

	if (s == " ")
	{
		cout << "0" << endl;
		return 0;
	}

	for (int j = 0; j < s.length(); j++)
	{
		if (s[j] != ' ')
		{
			begin = j;
			break;
		}
	}
	
	for (int i = s.length() - 1; i > 0; i--)
	{
		if (s[i] != ' ')
		{
			end = i;
			break;
		}
	}

	for (int i = begin; i <= end; i++)
	{
		if (s[i] == ' ')
		{
			if ((s[i + 1] != ' ') && (s[i - 1] != ' '))
				count++;
		}
	}

	cout << (count + 1) << endl;

	return 0;
}