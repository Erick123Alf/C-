#include <iostream>
using namespace std;

main()
{
	float a;
	float b, su, res, mul, div;
	
	cout<<"Escribe el primer numero: ";
	cin>>a;
	cout<<"Escribe el segundo numero: ";
	cin>>b;
	
	cout<<endl;
	
	su = a+b;
	res = a-b;
	mul = a*b;
	div = a/b;
	
	cout<<"El resultado de la suma es: "<<su<<endl;
	cout<<"El resultado de la resta es: "<<res<<endl;
	cout<<"El resultado de la multiplicacion es: "<<mul<<endl;
	cout<<"El resultado de la division es: "<<div<<endl;
	
}
