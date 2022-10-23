#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,p,q;
	int a[100][100], b[100][100], c[100][100] , d[100][100];
	cout <<"Nhap hang cot ma tran a va b" ; cin >>n >>m;
	
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			{
				cin >>a[i][j];
			}
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			{
				cin >>b[i][j];
			}
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			{
				c[i][j] = a[i][j] +b[i][j];
				d[i][j] = a[i][j] -b[i][j];
			}
	cout <<"MA TRAN SAU KHI + - LA : " <<endl;
	for(int i=0;i<n;i++)
		{
		for(int j=0;j<m;j++)
			{
				cout <<c[i][j]  <<" ";	
			}
		cout <<endl;
	}
	for(int i=0;i<n;i++)
		{
		for(int j=0;j<m;j++)
			{
				cout <<d[i][j]  <<" ";	
			}
		cout <<endl;
	}
	
}