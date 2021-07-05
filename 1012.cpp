#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,a,A1=0,A2=0,A5=0;  //初始化 
	double A4=0.0;
	cin >> n;   //输入测试数的个数 
	vector<int> v[5];
	
	for(int i=0;i<n;i++)
	{
		cin >> a;
		v[a%5].push_back(a);  //输入且写入a%5进vector 
	}
	
	//根据条件写条件表达式 
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<v[i].size();j++)
		{
			if(i==0&&v[i][j]%2==0)
				A1+=v[i][j];
			if(i==1&&j%2==0)
				A2+=v[i][j];
			if(i==1&&j%2==1)
				A2-=v[i][j];
			if(i==3)
				A4+=v[i][j];
			if(i==4&&v[i][j]>A5)
				A5=v[i][j];
		}
	}
	
	for(int i=0;i<5;i++){
		if(i!=0)
			printf(" ");
		//要输出N的无非两种情况，
		//对于A1来说，A1等于0就要输出N；
		//对于A2-A5来说，假设被5整除后余i，不存在这种数字，
		//也就是v[i].size() == 0时候输出N。
		if(i==0&&A1==0||i!=0&&v[i].size()==0){
			printf("N");
		continue;
		}
		if(i==0)
			printf("%d",A1);
		if(i==1)
			printf("%d",A2);
		if(i==2)
			printf("%d",v[2].size());
		if(i==3)
			printf("%.1f",A4/v[3].size());
		if(i==4)
			printf("%d",A5);
	} 
	return 0;
}
