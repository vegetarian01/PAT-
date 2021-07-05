#include<bits/stdc++.h>

#define N 1000

using namespace std;

int main()
{
	int n;
	cin >> n ;
	int count=0;
	if(n>N){
		cout << "error!" << endl;
	}
	else{
		while(n!=1)
		{
			if(n%2==0)
		{
			n=n/2;
			count++;
		}
			else
			{
				n=(3*n+1)/2; 
				count++;
			}
		}
		cout<< count <<endl ;
	}
	return 0;
}
