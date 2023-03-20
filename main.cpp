#include <stdio.h>
#include <iostream>
#include <fstream>
#include <cmath>
#include <string.h>

using namespace std;


int displayMenu(double n)
{

	
	
	string str = to_string(n);
	int x=str.length();
	int m=floor(n);
	int l=ceil(n);
	int count=0;
	
	cout<<"---------------------------------"<<endl;
	cout<<"|                               |"<<endl;
	cout<<"|";
	if(m==n || l==n)
	{
	while (m>0)
	{
		m=m/10;
		count++;
	}
	for(int i=0;i<=30-count;i++)
	{
		cout<<" ";
	}
	count=0;
	cout<<n<<"|"<<endl;
	}
	else
	{
		for(int i=0;i<=30-x;i++)
		{
			cout<<" ";
		}	
		cout<<str<<"|"<<endl;
	
	}
	cout<<"|                               |"<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<"|   ;   |   /   |   *   |   -   |"<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<"|   7   |   8   |   9   |   +   |"<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<"|   4   |   5   |   6   |   ^   |"<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<"|   =   |   0   |   =   |   %   |"<<endl;
	cout<<"---------------------------------"<<endl;
	
	
	return 0;

}
double  addition(double  n)
{
	double m;
	cin>>m;
	n=n+m;
	
	return n;
}

double substract(double n)
{
	double m;
	cin>>m;
	n=n-m;
	
	return n;

}
double multiplication(double n)
{
	double m;
	cin>>m;
	n=n*m;
	
	return n;
}
double  div(double n)
{
	double m;
	cin>>m;
	n=n/m;
	
	return n;
}
double square(double n)
{
	
	n=n*n;
	
	return n;
}
double sqrtt(double n)
{
	double rez=sqrt(n);
	
	
	return rez;
	
	
}
int main(int argc, char **argv)
{
	
	char choise;
	double num;
	
	cin>>num;
	system("cls");
	
	while (choise!='%')
	{
		displayMenu(num);
		cin>>choise;
		system("cls");
		switch (choise)
		{
			case '+':
			num=addition(num);
			break;
			case '-':
			num=substract(num);
			break;
			case '*':
			num=multiplication(num);
			break;
			case '/':
			num=div(num);
			break;
			case '^':
			num=square(num);
			break;
			case ';':
			num=sqrtt(num);
			break;
			case '`':
			choise='%';
			break;
		}
	}
	
}
