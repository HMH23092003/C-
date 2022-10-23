#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,m,a[100][100];
	cin >>m >>n;
	for(int i=1; i<=m; i++)
		for(int j=1; j<=n; j++) {
			cin >>a[i][j];
		}
	for(int i=1; i<=m; i++) {
		for(int j=1; j<=n; j++) {
			cout <<a[i][j] << " ";
		}
		cout <<endl;
	}
}