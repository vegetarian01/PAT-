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

//分析：首先根据月饼的总价和数量计算出每一种月饼的单价，
//然后将月饼数组按照单价从大到小排序，
//根据需求量need的大小，从单价最大的月饼开始售卖，
//将销售掉这种月饼的价格累加到result中，最后输出result即可～
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
