#include<bits/stdc++.h>
using namespace std;

int main()
{
	int first,k,n,temp;
	cin >> first >> n >> k ;
	int data[10005],next[10005],list[10005];
	for(int i=0;i<n;i++)
	{
		cin >> temp;
		cin >> data[temp] >> next[temp];
	}
	int sum=0; 
	//不一定所有输入均有用，加计数器
	while(first!=-1)
	{
		list[sum++]=first;
		first=next[first];
	 }
	for(int i=0;i<(sum-sum%k);i++)
	 	reverse(begin(list)+i,begin(list)+i+k);
	for(int i=0;i<sum-1;i++)
		 printf("%05d %d %05d\n",list[i],data[list[i]],data[list[i+1]]);
	printf("%05d %d -1",list[sum-1],data[list[sum-1]]);
	return 0;
}
