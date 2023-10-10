#include <iostream>
#include<iomanip>

using namespace std;

int main()
{

	int brojac, n;

	cout << " Vnesi go n : ";
		cin >> n;

	brojac = 1; // za parni "0" namesto 1 (iako ima drugi nacini )

	while (brojac <= n)
	{
	
		cout << "\n" << setw(3) << brojac;

		brojac += 2;
	
	}











	cin.get(); cin.get();

	return 0;



}