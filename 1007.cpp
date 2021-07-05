//分析：判断素数的函数isprime这样写：
//对于数字a，i从2到根号a，
//如果a能够被其中一个i整除，
//说明i不是素数，return false，
//否则说明a是素数return true；
//对于输入数据N，for循环中的i从5到N
//为什么从5开始：1和3不考虑，2和4不考虑 
//依次判断i-2和i是否是素数，
//如果都是素数，则统计个数的cnt++，最后输出cnt即可～

#include<bits/stdc++.h>

using namespace std;

bool sushu(int a)    //素数判断 
{
	for(int i=2;i*i<=a;i++)
		if(a%i==0)
			return false;
	return true;
}

int main()
{
	int N,n=0;
	cin >> N;
	for(int i=5;i<=N;i++)
		if(sushu(i-2)&&sushu(i))  //判断i-2和i 
			n++;
	cout << n;
	return 0;
}
