#include<iostream>
using namespace std;

int main()
{
	int t,j,key;
	cout<<"Enter the Total no of Elements:"<<endl;
	cin>>t;
	int a[t];
	cout<<"Enter the elements:"<<endl;
	for(int i=0;i<t;i++)
	{
		cin>>a[i];
	}
	cout<<"Applying insertion sort --------"<<endl;
	for(int i=1;i<t;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
	}
	cout<<" After Insertion Sorting :-------"<<endl;
	for(int i=0;i<t;i++)
	{
		cout<<a[i]<<endl;
	}
return 0;
}

