#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int a=n/100;
	int b=(n-a*100)/10;
	int c=n%10;
	for(int i=0;i<a;i++){
		cout << 'B' ;
	}
	for(int i=0;i<b;i++)
	{
		cout << 'S';
	}
	for(int i=0;i<c;i++)
	{
		cout << i+1;
	}
	return 0;
}
