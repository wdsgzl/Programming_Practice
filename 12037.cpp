
#include<bits/stdc++.h>
#define N 101
#define K 101
using namespace std;
int main()
{
	int a,b;
	string n[N];
	int s[N];
	int temp[N];
	cin>>a>>b;
	int rank=0;
	for(int i=0;i<a;i++)
	{
		cin>>n[i]>>s[i];
	}
	for(int i=0;i<a;i++)
	{
		rank=0;
		for(int j=0;j<a;j++)
		{
			if(s[i]>=s[j])
			rank++;
		}
		if(rank==b)
		{
		cout<<n[i];
		break;
		}
	}
	return 0;
}
