//���������鳤��Ϊn��Ҫ�������ѭ������mλ��
//ֻ��Ҫ�Ƚ���������a���ã�
//�ٽ�����ǰmλ���ã�
//��������n-mλ���ü������ѭ������mλ��
//reverse��������ʵ�ֽ�һ���������vector��Ԫ�ص��ã�
//���������algorithmͷ�ļ��С�
//�����m����n����ôѭ������mλ�൱��ѭ������m%nλ��
//��Ϊ��Щn����λ���ƶ��Ƕ���ģ�
//������ʹ��m֮ǰ���Ƚ�m = m%n��
//reverse��a��b������ǰ��һ����a������������һ����b 


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
//	vector<int> a(N);   //һάvector ��СΪN 
//	for(int i=0;i<N;i++)
//		cin >> a[i];   //���� 
////		for(int i=0;i<M;i++)
////		{
////			temp=a[i];
////			a[i]=a[N-M];
////			a[N-M]=temp;
////		}
////		cout << a[i] << " " ;
//	M%=N;          // m<n,ȡ����ڱ��� 
//	if(M!=0)
//	{
//		reverse(begin(a),begin(a)+N);  //ת��0-n 
//		reverse(begin(a),begin(a)+M);  //ת��0-m 
//		reverse(begin(a)+M,begin(a)+N);  //ת��m-n 
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
