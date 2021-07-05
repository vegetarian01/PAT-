#include<bits/stdc++.h>


using namespace std;

int main()
{
	string pinyin[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	int digit[6];
	int sum=0,i=0;
	char c;
	while((c=getchar())!='\n')   //各位上的数 
	sum+=c-'0';          //各位数上的和 
	while(sum!=0)
	{
		digit[i]=sum%10;
		sum=sum/10;
		i++;               
	}
	i--;
	cout<< pinyin[digit[i]];
	i--;
	for(;i>=0;i--)
	{
		printf(" ");
		cout << pinyin[digit[i]];
	}
	return 0;
}
