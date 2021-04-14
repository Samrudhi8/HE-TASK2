#include<iostream>

using namespace std;

int main()
{
	int N;
    int i;

	cout << "Enter a number\n";
	cin >> N;
	while (N != 0)
	{
		N = N/10;
		++i;
	}
	if(i > 3)
	cout << "More than 3 digits";
	else
	cout << i;
	
	return 0;
	
}
