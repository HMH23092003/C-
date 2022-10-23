#include<bits/stdc++.h>
using namespace std;
bool checknt(int n)
{
	if(n<2) return false; 
	else for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0) return false ;
		}
	return true;
}
int main()
{
	int n;
	do
	{
		cout <<"NHAP VAO DAY SO NGUYEN DUONG N: ";
		cin >>n;
	}
	while(n<=0);
	if(checknt(n)==true) cout <<"LA SO NGUYEN TO";
	else cout <<"KHONG LA SO NGUYEN TO";
}