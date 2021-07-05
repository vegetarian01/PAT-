//分析：对每一个输入的数字n进行验证，
//把验证过的数字对应的arr标记为1，
//然后对这些输入的数字从大到小排序，
//输出所有arr=0的数字即为关键数字～

#include<bits/stdc++.h>

using namespace std;

int arr[10000];

bool cmp(int a,int b)   //bool正确或错误 
{
	return a>b;
}

int main()
{
	int K;
	int n,flag=0;
	cin >> K;
	vector<int> temp(K);  //一维vector 指定长度为K 
	for(int i=0;i<K;i++)
	{
		cin >> n;
		temp[i]=n;
		while(n!=1){
		if(n%2==0)
		{
			n=n/2;
		}
		else
		{
			n=(3*n+1)/2;
		}
		if(arr[n]==1)
			break;
		arr[n]=1;              //把验证过的数字对应的arr标记为1 
	}
	}
	sort(temp.begin(),temp.end(),cmp);  //Sort(start,end,排序方法)
	//cmp bool类型，即sort根据cmp从大到小排序。 
	for(int i=0;i<temp.size();i++)
	{
		if(arr[temp[i]]==0)
		{
			if(flag==1)
				cout<< " ";
			cout << temp[i];
			flag=1; 
		}
	 } 
	return 0;
}
