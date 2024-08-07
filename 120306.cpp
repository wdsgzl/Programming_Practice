#include<iostream>
#include<string.h>
using namespace std;
#define N 81
int main()
{
	char c[N];
	cin.getline(c, N);
	for(int i=0;i<strlen(c);i++)
	{
		if(c[i]=='z'||c[i]=='Z')
		c[i]-=25;
		else if(c[i]>=65&&c[i]<90||c[i]>=97&&c[i]<122)
		c[i]++;
	}
		for(int i=0;i<strlen(c);i++)
	{
	cout<<c[i];
	}
}
