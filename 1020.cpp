//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int main()
//{
//	int n,d;
//	float temp;
//	float result=0.0;
//	cin >> n >> d;
//	float a[n]={0.0};
//	float b[n]={0.0};
//	for(int i=0;i<n;i++)
//	{
//		cin >> a[i] ;
//		cin >> b[i] ; 
//		float avg[i]=b[i]/a[i];
//		for(int i=0;i<n;i++)
//		{
//			if(avg[i]<=avg[i+1])
//			{
//				temp=avg[i+1];
//				avg[i+1]=avg[i];
//				avg[i]=temp;
//			}
//			
//			if(a[i]<=d){
//			result=result+b[i];
//		}
//		else
//		{
//			result=result+avg[i]*d;
//			break;
//		}
//		d=d-a[i];	
//	}
//	cout << result ;
//}
//	return 0;
//}

//���������ȸ����±����ܼۺ����������ÿһ���±��ĵ��ۣ�
//Ȼ���±����鰴�յ��۴Ӵ�С����
//����������need�Ĵ�С���ӵ��������±���ʼ������
//�����۵������±��ļ۸��ۼӵ�result�У�������result���ɡ�
#include<bits/stdc++.h>

using namespace std;

struct mooncake{
	float mount,price,unit;
};

bool cmp(mooncake a,mooncake b)
{
	return a.unit>b.unit;
}

int main()
{
	int n,d;
	cin >> n >> d ;
	vector<mooncake> a(n);
	for(int i=0;i<n;i++)
	{
		scanf("%f",&a[i].mount);
	}
	for(int i=0;i<n;i++)
	{
		scanf("%f",&a[i].price);
	}
	for(int i=0;i<n;i++)
	{
		a[i].unit=a[i].price/a[i].mount;
	}
	sort(a.begin(),a.end(),cmp);
	float result=0.0;
	for(int i=0;i<n;i++)
	{
		if(a[i].mount<=d){
			result=result+a[i].price;
		}else
		{
			result=result+a[i].unit*d;
			break;
		}
		d=d-a[i].mount;
	}
	printf("%.2f",result);
	return 0;
}
