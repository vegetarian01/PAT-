//������1.flag�����ж��Ƿ��Ѿ��й������

//2.��b!=0ʱ����Ϊ�����������з�����ϵ����
//���Աض�������������ж�flag�Ƿ�Ϊ1��
//���Ϊ1��ʾ�Ѿ��й��������ô��ǰ��Ҫ�����һ���ո�

//3.��� a * b �� b �C 1��
//Ȼ��flag���Ϊ1��ʾ�Ѿ��й����

//4.����жϵ�û���������b==0��ʱ�������0 0��

#include<bits/stdc++.h>

using namespace std;

int main()
{
//	int a,b,flag=1;
//	for(int i=0;i<n;i++)
//	{
//		cin >> n ;
//		cin>> a[i] >> b[i];
//		if(b[i]==1)
//			cout << a << " " ;
//		else if(b[i]==0)
//			cout << 0 ;
//		else
//			cout << a[i]*b[i] << " " << (b[i]-1) ;
//	}
//	if(b[i]==1)
//		cout << a << " " ;
//	else if(b[i]==0)
//		cout << 0 ;
//	else
//		cout << a*b << " " << (b-1) ;
//	int a,b,flag=1;
//	while(cin >> a >> b)
//	{
//		if(b!=0){
//			if(flag==1)
//				cout << "";
//			cout << a*b << " " << b-1;
//			cout << " ";
//			flag=1;
//		}
//	}
//	if(flag==0)
//		cout << "0 0";
	int a,b,k=0,flag=0;
 	while(cin>>a>>b) 
 	{ 
 		if(flag==0) 
 		{ 
 			if(b==0) 
 		{ 
 		cout<<"0 0"<<endl; 
 		break; 
 		} 
 		cout<<a*b<<" "<<b-1; 
 		} 
 		if(flag==1) 
 		{ 
 		if(b==0) 
 		break; 
 		cout<<" "<<a*b<<" "<<b-1; 
 		} 
 		flag=1; 
 	} 
 return 0; 
}
