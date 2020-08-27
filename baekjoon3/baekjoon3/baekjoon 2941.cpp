#include <iostream>
using namespace std;

int main()
{
	string alp;
	cin >> alp;
	int count = 0;
	count = alp.length();

	for (int i = 1; i < alp.length(); i++)
	{
		if (alp[i] == '-')
		{
			if (alp[i - 1] == 'c' || alp[i - 1] == 'd')
				count--;
		}
		else if (alp[i] == '=')
		{
			if (alp[i - 1] == 'c' || alp[i - 1] == 's' || alp[i - 1] == 'z')
				count--;
			if (i > 1)
			{
				if (alp[i - 2] == 'd' && alp[i - 1] == 'z')
					count--;
			}
		}
		else if (alp[i] == 'j' && alp[i - 1] == 'n')
			count--;
		else if (alp[i] == 'j' && alp[i - 1] == 'l')
			count--;
	}

	cout << count << endl;

	

	return 0;
}