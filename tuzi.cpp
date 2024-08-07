#include<iostream>
using namespace std;
#define N 100
int main()
{
	int k;
	int a[N];
	a[0]=1;
	a[1]=1;
	for( int i =2; i<=50; i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	cin>>k;
	printf("%d",a[k-1]);
	return 0;
}
