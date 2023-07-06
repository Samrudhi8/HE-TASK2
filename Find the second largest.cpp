#include<iostream>

using namespace std;

int main()
{
	int T;
	int A,B,C;
	int num;
	

	cin >> T;
	
	while(T--)
	{
		cin >> A >> B >> C;
		if((((A>B)&&(B>C)) ||(A<B)&&(B<C)))
		num = B;
		else if((((B>A)&&(A>C)) ||(B<A)&&(A<C)))
		num = A;
		else
		num = C;
		cout << num << endl;
	}
	
	return 0;
}

