#include<bits/stdc++.h>
using namespace std;
int giaithua(int n)
{
	if(n==1) return 1;
	else return n*giaithua(n-1);
}
int main()
{
	int n,x;
	cout <<"nhap vao day x va n: "; cin >>n >>x;
	float S1=0,S2=1,S3=1;
	for (int i=1;i<=n;i++)
	{
		S1+= (float)pow(x,i)/ giaithua(i);
	}
	for (int i=1;i<=n;i++)
	{
		S2+= (float	)pow(x,2*i)/ giaithua(2*i);
	}
	for (int i=0;i<=n;i++)
	{
		S3+= (float)pow(x,2*i+1)/ giaithua(2*i+1);
	}
	cout <<"KET QUA BIEU THUC 1 LA: " <<S1 <<endl;
	cout <<"KET QUA BIEU THUC 2 LA: " <<S2 <<endl;
	cout <<"KET QUA BIEU THUC 3 LA: " <<S3 <<endl;
}