//Program to generate the Fibonachi Sequence up to the number entered by the user
//
//
#include <bits/stdc++.h>

using namespace std;

int fiboGen(int n)
{
	if(n == 1 || n == 2)
	{
		return 1;
	}

	else
	{
		return fiboGen(n-1) + fiboGen(n-2);
	}

}


int main()
{
	int n;

	cout << "Enter the number that the sequence will be generated up to: " << endl;
	cin >> n;

	for(int i = 1; i <= n; i++)
	{
		cout << fiboGen(i) << " ";
	}

	cout << '\n';

	return 0;
}
