//分析：模拟手动除法的过程，
//每次用第一位去除以B，
//如果得到的商不是0就输出，
//否则就*10+下一位，直到最后的数为余数～

#include<bits/stdc++.h>

using namespace std;

int main()
{
	string a;
	int b,temp=0;
	cin >> a >> b ;
	int len=a.length();
	int t=(a[0]-'0')/b;
	if((t!=0&&len>1)||len==1)
		cout << t;
	temp=(a[0]-'0')%b;
	for(int i=1;i<a.length();i++)
	{
		t=(temp*10+a[i]-'0')/b;
		cout << t ;
		temp=(temp*10+(a[i]-'0'))%b;
	}
	cout << " " << temp;

	return 0;
}
