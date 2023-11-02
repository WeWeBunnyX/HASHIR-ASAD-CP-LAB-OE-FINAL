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

		cout<<"\nPrime Numbers between range of "<<i<<" and "<<j<<" are : ";

		for(; i<=j; i++) //User range iteration
		{ 
           if(i/i==1 && i/1==i) //Divisible by number itself and 1 i.e Prime Number
		   { 
              cout<<i<<" ";
		   }
		}
	}

    else if(option==2)
	cout<<"\nEnter the number: ";
    cin>>i;

    if(i/i==1)

	{ cout<<"\nEnter the number:";
	  cin>>i;
	  cout<<"The number you entered"<<"(" <<i<< ")"<<"is prime"; }
}

	else
	{ cout<<"The number you entered"<<"(" <<i<< ")"<<"is not prime"; }
		
		
return 0;

}