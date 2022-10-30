#include<bits/stdc++.h>
using namespace std;
void nhap(int n)
{
	do
	{
		cout <<"Nhap vao day so nguyen duong n";
		cin >>n;
	}
	while(n<=0);
}
bool checknt(int n)
{
	if (n<2) return false ;
	for(int i=2;i<=sqrt(n);i++)
	{
		if (n%i==0) return false ;
	}
	return true;
}
int main()
{
	int n;
	nhap(n);
	int dem=0;
	for(int i=0;i<=n;i++)
	{
		if(checknt(i)==true) dem++; 
	}
	cout <<dem;
}