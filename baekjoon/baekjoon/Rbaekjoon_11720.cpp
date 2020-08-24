#include <iostream>
#include <string>
using namespace std;

int main()
{
	int insertNumber = 0;
	int sum = 0;
	cin >> insertNumber;

	string str1;
	cin >> str1;

	for (int i = 0; i < insertNumber; i++)
	{
		sum += (str1[i] - 48);
	}

	cout << sum << endl;

	return 0;
}