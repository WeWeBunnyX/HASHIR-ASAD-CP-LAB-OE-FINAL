#include <iostream>
#include <string>
using namespace std;

int main()
{
    int option;
    string bname;
    int days,fine;
    cout <<"Press 1 to borrow a book"<< endl;
    cout <<"Press 2 to return a book"<< endl;
    cout<<"\n";
    cout<<"Choice =";
    cin>>option;
    cin.ignore();

    if (option== 1)
    {
        cout << "\nEnter the book name: ";
        getline(cin,bname);
        cout<<"\n";
        cout<<"You have been issued "<< bname <<" succesfully"<< endl;
    }
    else if (option ==2)

    {   cout <<"Enter the name of book you want to return: ";
        getline(cin,bname);
        cout<<"\n";
        cout << "How many days have exceeded since the due date ?" <<endl;
        cin>>days;
        fine = days*1;
        cout<<"\n";
        cout << "Book succesfully returned with a fine of "<<fine<< "$"<<endl;

        }
       

        cout<<"Thank you for the visit";
    }
