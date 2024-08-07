#include<iostream>
using namespace std;
#define N 10010
int main()
{
	int m=0;
	int a[N];
	int max=0;
	int mini=0;
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
	}
	max=a[0];
	mini=a[0];
	for(int i=0; i<m;i++)
	{
		if(a[i]>max)
		max=a[i];
		if(a[i]<mini)
		mini=a[i];
	 } 
	 cout<<max-mini;
	 return 0;
	
}
