//��������ÿһ�����������n������֤��
//����֤�������ֶ�Ӧ��arr���Ϊ1��
//Ȼ�����Щ��������ִӴ�С����
//�������arr=0�����ּ�Ϊ�ؼ����֡�

#include<bits/stdc++.h>

using namespace std;

int arr[10000];

bool cmp(int a,int b)   //bool��ȷ����� 
{
	return a>b;
}

int main()
{
	int K;
	int n,flag=0;
	cin >> K;
	vector<int> temp(K);  //һάvector ָ������ΪK 
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
		arr[n]=1;              //����֤�������ֶ�Ӧ��arr���Ϊ1 
	}
	}
	sort(temp.begin(),temp.end(),cmp);  //Sort(start,end,���򷽷�)
	//cmp bool���ͣ���sort����cmp�Ӵ�С���� 
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
