#include<iostream>
using namespace std;

int main()
{
	int prime, option, i, j;
	cout << "\nPress 1 if you want to output prime numbers in a given range" << endl;
	cout << "\nPress 2 if you want to check whether a specific number is prime" << endl;

	cin>>option;
	if (option==1)

	{
		cout << "\nEnter starting range.";
		cin >> i;

		cout << "\nEnter ending range.";
		cin >> j;

		int factors = 0;
		for (int i =1; i<=j; i++) {
			if (n%i==0) 
			
			{
				factors++;
			}
	