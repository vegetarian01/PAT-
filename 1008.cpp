//分析：数组长度为n，要想把数组循环右移m位，
//只需要先将整个数组a倒置，
//再将数组前m位倒置，
//最后将数组后n-m位倒置即可完成循环右移m位～
//reverse函数可以实现将一个数组或者vector中元素倒置，
//这个函数在algorithm头文件中～
//（如果m大于n，那么循环右移m位相当于循环右移m%n位，
//因为那些n倍数位的移动是多余的，
//所以在使用m之前，先将m = m%n）
//reverse（a，b）包括前面一个数a，不包括后面一个数b 


//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	int N,M;
//	cin >> N >> M ;
//	vector<int> a(N);   //一维vector 大小为N 
//	for(int i=0;i<N;i++)
//		cin >> a[i];   //输入 
////		for(int i=0;i<M;i++)
////		{
////			temp=a[i];
////			a[i]=a[N-M];
////			a[N-M]=temp;
////		}
////		cout << a[i] << " " ;
//	M%=N;          // m<n,取余等于本身 
//	if(M!=0)
//	{
//		reverse(begin(a),begin(a)+N);  //转置0-n 
//		reverse(begin(a),begin(a)+M);  //转置0-m 
//		reverse(begin(a)+M,begin(a)+N);  //转置m-n 
//	}
//	for(int i=0;i<N-1;i++)
//		cout << a[i] << " ";
//	cout << a[N-1];
//	return 0;
//}

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;
	int a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	if(m>n)
		m%=n;
	int k=(n-m)%n;
	for(int i=0;i<n-1;i++)
	{
		cout << a[k] << " ";
		k=(k+1)%n;
	}
	cout << a[k] ;
}
