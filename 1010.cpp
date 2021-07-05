//分析：1.flag用来判断是否已经有过输出～

//2.当b!=0时，因为给出的是所有非零项系数，
//所以必定会有输出，先判断flag是否为1，
//如果为1表示已经有过输出，那么在前面要先输出一个空格

//3.输出 a * b 和 b – 1，
//然后将flag标记为1表示已经有过输出

//4.最后判断当没有输出并且b==0的时候，输出“0 0”

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
