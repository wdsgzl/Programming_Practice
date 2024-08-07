#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
	long a;
	long b;

	cin>>a>>b;
	for(int i=a;i<b;i++)
	{
			int judge=1;
		for(int j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
			{judge=0;
			break;
			}
		}
		if(judge)
		{
			string s;
			s=to_string(i);
			string s1;
			s1=s;
			reverse(s.begin(),s.end());
			if(s==s1)
			cout<<i<<endl;
		}
	}
	return 0;
}
