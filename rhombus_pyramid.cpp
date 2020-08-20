#include<iostream>
using namespace std;
main()
{
	int i,j,k,s;
	cout<<"Enter the side of rhombus: ";
	cin>>s;
	for(i=1;i<=s;i++)
	{
		for(j=s;j>i;j--)
		cout<<' ';
		for(k=1;k<=s;k++)
		cout<<'*';
		cout<<endl;
	}
}
