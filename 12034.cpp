#include<bits/stdc++.h>
using namespace std;
#define N 210
int main()
{
	int i=0;
	char a[N],b[N];
	char c,d;
	int e[N];
	cin.getline(a,N);
	cin.getline(b,N);
	for(int i=0;i<max(strlen(a),strlen(b));i++)
	{
		c=a[i]-'0';
		d=b[i]-'0';
		e[i]=c+d;
		if(e[i]>=10&&i>0)
		{
			e[i-1]++;
			e[i]=e[i]%10;
		}		
	}
	for(i=0;i<max(strlen(a),strlen(b))&&e[i]==0;i++)
	{
	}
	for(i=i;i<max(strlen(a),strlen(b));i++)
	{
		cout<<e[i];
	}
	return 0;
	
}
