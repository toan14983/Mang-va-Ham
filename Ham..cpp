#include<iostream>
#include<math.h>
//Bai tap ham
using namespace std;

int sum(int a, int b)
{
	return(a+b);
}

int hieu(int a, int b)
{
	return(a-b);
}

int thuong(int a,int b )
{
	return(a/b);
}

int tich(int a, int b)
{
	return(a*b);
}

float giaiphuongtrinhbac1(int a, int b)
{
	return((-b)/a);
}

void giaiphuongtrinhbac2(int a, int b, int c)
{
	float delta =pow(b,2)-4*a*c;
	float x1 = ((-b)+ sqrt(delta))/2*a;
	float x2 = ((-b)- sqrt(delta))/2*a;
	cout <<x1<<endl;
	cout<<x2;
}

bool kiemtrasonguyento(int a)
{
	for(int i = 2 ;i<a;i++)
	if (a%i==0)
	{
		return (0);	
	}
	else return (true);
}

void kiemtratinhchanle(int a)

{
	if (a%2==0)
	{
		cout<<"So chan ";
	}
	else cout<<"So le ";
}

void nhapthangtinhngay(int thang)
{
	switch (thang)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout<<"Co 31 ngay"<<endl;
			break;
		case 2:
			cout<<"Co 28 hoac 29 ngay"<<endl;
		case 4 :
		case 6 :
		case 9 :
		case 11 :
			cout<<"Co 30 ngay" <<endl;
		default :
			cout<<"Nhap sai";
	}
}


main()
{
	int a ,b ;
	cin>>a;
	cin>>b;
	nhapthangtinhngay(a);
}










