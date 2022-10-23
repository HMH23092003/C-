#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout <<"Nhap vao day nam can xet: " ;
	cin >>n;
	if (n%400==0) cout <<"la nam nhuan" <<endl;
	else if (n%4==0 && n%100!=0) cout <<"la nam nhuan" <<endl;
	else cout <<"la nam khong nhuan";
}