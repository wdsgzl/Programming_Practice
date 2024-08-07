#include<iostream>
using namespace std;
#define N 101
int main()
{
	int n;
	int a[N];
	double sum=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	printf("%.2lf",sum/n);
	return 0;
}
