#include<bits/stdc++.h>


using namespace std;

struct decai{
	int num,de,cai;
};

decai temp;

int cmp(struct decai a,struct decai b)
{
	if((a.cai+a.de)!=(b.cai+b.de))
		return (a.cai+a.de)>(b.cai+b.de);
	else if(a.de!=b.de)
		return a.de>b.de;
	else
		return a.num<b.num;
}

int main()
{
	int n,l,h;
	cin >> n >> l >> h ;
	vector<decai> v[4];  //?????
	int cnt=n;
	for(int i=0;i<n;i++)
	{
		scanf("%d %d %d",&temp.num,&temp.de,&temp.cai);
		//cin >> &temp.num >> &temp.de >> &temp.cai ; 
		if(temp.de<l||temp.cai<l)   
		//必须要小于，不然条件包括了下面的else if条件 
			cnt--;
		else if(temp.de>=h&&temp.cai>=h)
			v[0].push_back(temp);
		else if(temp.de>=h&&temp.cai<h)
			v[1].push_back(temp);
		else if(temp.de<h&&temp.cai<h&&temp.de>=temp.cai)
			v[2].push_back(temp);
		else 
			v[3].push_back(temp);
	}
	
//	int zf=df+cf;
//	switch(zf){
//		case 1:
//			if(df>=h&&cf>=h)
//				
//	}
	cout << cnt << endl;
	for(int i=0;i<4;i++){
		sort(v[i].begin(),v[i].end(),cmp);
		for(int j=0;j<v[i].size();j++)
			cout << v[i][j].num << " " << v[i][j].de << " " << v[i][j].cai << endl ;
	}
	
	return 0;
}
