#include<bits/stdc++.h>
using namespace std;

int main()
{
	int *a= new int[];
	int n;
	cout <<"Nhap vao day so luong phan tu cua mang" ; cin >>n;
	for (int i=0;i<n;i++)
	{
		cout <<"Nhap vao day phan thu" <<i <<" : ";
		cin >> *(a+i);
	}
	for (int i=0;i<n;i++)
		for(int j=i+1;j<n-1;j++)
			{
				if(*(a+i)>= *(a+j)) swap(*(a+i),*(a+j));
			}
	for (int i=0;i<n;i++)
	{
		cout <<"Day so tang dan la : " <<*(a+i);
	}
}