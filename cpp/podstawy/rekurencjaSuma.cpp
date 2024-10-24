#include <iostream>
using namespace std;

long long suma(int n)
{
	if(n<1) 
		return 0;
	
	return n+suma(n-1);
}

int main()
{
	int n;
	
	cout<<"Podaj liczbę: ";
	cin>>n;
	
	cout<<"Suma "<<n<<" kolejnych liczb naturalnych wynosi "
<<suma(n)<<endl;

	return 0;
}