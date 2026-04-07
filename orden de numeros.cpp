#include <iostream>
using namespace std;

int main()
{
	int A, B, C;
	cin>> A >> B >> C;	
	
	if (A < B)
	{
		int tmp = A;
		A = B;
		B = tmp;
	}
	if(A < C)
	{
		int tmp = A;
		A = C;
		C =tmp;
	}
	if(B < C)
	{
		int tmp = B;
		B = C;
		C = tmp;
	}

	
	
	cout << A << "   " << B << "  " << C <<endl;
}

