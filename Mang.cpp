#include <iostream>
//Bai tap ve mang
using namespace std;

void input (int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Moi nhap gia tri a["<<i<<"] : ";
		cin>>a[i];
	}
}

void output (int a[], int n)
{
	cout<<"Thu tu theo chieu thuan la : "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"a["<<i<<"] : "<<a[i]<<endl;
	}
	cout<<"Thu tu theo chieu nghich : "<<endl;
	for(int i=n-1;i>=0;i--)
	{
		cout<<"a["<<i<<"] : "<<a[i]<<endl;
	}
}

void outputeven (int a[],int n)
{
	cout<<"Cac gia tri chan trong mang :"<<endl;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			cout<<"a["<<i<<"] : "<<a[i]<<endl;
		}
	}
}

void outputodd (int a[],int n)
{
	cout<<"Cac gia tri le trong mang :"<<endl;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==1)
		{
			cout<<"a["<<i<<"] : "<<a[i]<<endl;
		}
	}
}

int sum(int a[],int n)
{
	int s = 0;
	for (int i=0;i<n;i++)
	{
		s+=a[i];
	}
	return(s);
}

void swap (int &a,int &b)
{
	int t=	a;
	a=b;
	b=t;
	
}

void raiseup(int a[],int n)
{
	cout<<"Sap xep theo thu tu tang dan :";
	for (int i=0; i<n;i++)
	for (int j=i+1;j<n;j++)
	{
		if(a[i]>a[j])
		{
			swap(a[i],a[j]);
		}
	}
	output(a,n);
}

void raisedown(int a[],int n)
{
	cout<<"Sap xep theo thu tu giam dan :";
	for (int i=0; i<n;i++)
	for (int j=i+1;j<n;j++)
	{
		if(a[i]<a[j])
		{
			swap(a[i],a[j]);
		}
	}
	output(a,n);
}

main()
{
	int a[20],n;n=20;
	input(a,n);
	output(a,n);
	outputeven(a,n);
	outputodd(a,n);
	cout <<"Tong cua mang : "<<sum(a,n);
	raiseup(a,n);
	raisedown(a,n);
}

