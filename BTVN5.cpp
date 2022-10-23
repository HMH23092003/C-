#include<bits/stdc++.h>
using namespace std;
void Erase(int a[], int &n , int vitri) {
	--n;
	for(int i=vitri; i<=n; i++)
		a[i]=a[i+1];
}
void AfterErase(int a[],int n,int vitri) {
	int t=0;
	for(int i=0; i<n; i++) {
		if(i==vitri) {
			Erase(a,n,i);
			i--;
			break;
		}
	}
	cout <<"DAY SAU KHI XOA LA : " ;
	for(int i=0; i<n; i++) cout <<a[i] <<" ";
	cout <<endl;
}
int main()
{
	int n,vitri;
	cout <<"Nhap vao day so phan tu N va vi tri: " ;
	cin >>n >>vitri;
	int *a=new int[n];
	for(int i=0;i<n;i++)
	{
		cout <<"Nhap vao day phan tu a[" <<i <<"] ";cin >>a[i];
	}
	AfterErase(a,n,vitri);
}