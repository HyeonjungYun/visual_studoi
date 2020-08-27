#include <iostream>
using namespace std;

int main()
{
	string insert;
	cin >> insert;

	int sum = 0;

	for (int i = 0; i < insert.length(); i++)
	{
		if (insert[i] == 'A' || insert[i] == 'B' || insert[i] == 'C')
			sum += 3;
		else if (insert[i] == 'D' || insert[i] == 'E' || insert[i] == 'F')
			sum += 4;
		else if (insert[i] == 'G' || insert[i] == 'H' || insert[i] == 'I')
			sum += 5;
		else if (insert[i] == 'J' || insert[i] == 'K' || insert[i] == 'L')
			sum += 6;
		else if (insert[i] == 'M' || insert[i] == 'N' || insert[i] == 'O')
			sum += 7;
		else if (insert[i] == 'P' || insert[i] == 'Q' || insert[i] == 'R' || insert[i] == 'S')
			sum += 8;
		else if (insert[i] == 'T' || insert[i] == 'U' || insert[i] == 'V')
			sum += 9;
		else if (insert[i] == 'X' || insert[i] == 'W' || insert[i] == 'Y' || insert[i] == 'Z')
			sum += 10;
	}
	cout << sum << endl;

	return 0;
}