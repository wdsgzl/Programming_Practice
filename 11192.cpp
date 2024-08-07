#include<iostream>
using namespace std;
int main()
{
	int n;

	int sum=0;
	cin>>n;
	int cheng=1;
	for(int i=1;i<=n;i++)
	{
		int cheng=1;
		for(int j=n+1-i;j>=1;j--)
		cheng=cheng*j;	
		sum=sum+cheng;	
	}
	cout<<sum<<endl;
	return 0;
}
