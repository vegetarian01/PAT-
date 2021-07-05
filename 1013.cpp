#include<bits/stdc++.h>

using namespace std;


bool sushu(int a)
{
	for(int i=2;i*i<=a;i++)
		if(a%i==0)
			return false;
	return true;
}

int main()
{
	int m,n,num=2,cnt=0;
	cin >> m >> n;
	vector<int> v;//vector保存第M到第N个数
	while(cnt<n){
		if(sushu(num)){   //判断写入vector 
			cnt++;
			if(cnt>=m)
				v.push_back(num);
		}
		num++;
	}
	cnt=0; 
	for(int i=0;i<v.size();i++)
	{
		cnt++;
		if(cnt%10!=1)   //cnt从1开始输出 
			printf(" ");
		printf("%d",v[i]);
		if(cnt%10==0)
			printf("\n");
	}
	return 0;
}
