//分析：设t = A + B，
//将每一次t % d的结果保存在int类型的数组s中，
//然后将t / d，直到 t 等于 0为止，
//此时s中保存的
//就是 t 在 D 进制下每一位的结果的倒序，
//最后倒序输出s数组即可～

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a,b,d;
	cin >> a >> b >> d;
	int c=a+b;
	if(c==0){
		cout << 0;
		return 0;
	}
	int s[100];
	int i=0;
	while(c!=0)
	{
		s[i++]=c%d;
		c=c/d;
	}
	for(int j=i-1;j>=0;j--)
		cout << s[j];
	return 0;
}
