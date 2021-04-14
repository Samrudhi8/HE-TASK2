#include<iostream>

using namespace std;

int solve (int n){
	
	if((n == 1) || (n==0)){
		return 0;
	}
	else{
		for(int i = 2; i <= n/2; ++i){
			if(n % i == 0){
				return 0;
				break;
			}
		}
	}
   return 1;	
}
int main()
{
	int T,num;
	cout << "No. of test cases" << endl;
	cin >> T;
	cout << "Numbers are:" << endl;
	for(int i=0; i < T; i++)
	{
		cin >> num;
		if(solve(num) == 1)
		cout << num << "\tYes" << endl;
		else
		cout << num << "\tNo" << endl;
	}
	
	return 0;
}
