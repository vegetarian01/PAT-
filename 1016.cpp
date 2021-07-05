//分析：将A和B保存在string a和b中，
//将DA和DB保存在da和db中，
//因为A为字符串，所以对于它的每一位a[i]，
//当da == (a[i]- '0')时候表示da和a[i]相等，
//则pa = pa * 10 + da；
//B同理，当db == (b[i]- '0')时候表示db和b[i]相等，
//则pb = pb * 10 + db；最后输出pa+pb的值～

#include<bits/stdc++.h>

using namespace std;

int main()
{
	string a,b;
	int pa=0,pb=0,da,db;
	cin >> a >> da >> b >> db ;
	for(int i=0;i<a.length();i++)
	{
		if((a[i]-'0')==da)
			pa=pa*10+da;
	}
	for(int j=0;j<b.length();j++)
	{
		if((b[j]-'0')==db)
			pb=pb*10+db;
	}
	cout << pa+pb;
	return 0;
}

