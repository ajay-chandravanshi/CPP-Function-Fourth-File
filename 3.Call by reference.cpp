#include <iostream>
using namespace std;


int sum(int &b)
{
    return b;
}

int main()
{
int a;
cout<<"Enter the one number=";
cin>>a;
cout<<sum(a);
}