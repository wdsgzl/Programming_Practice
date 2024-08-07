#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	int judge=1;
	cin>>n;
	if(n==1)
	{cout<<"2";
	return 0;
	}
	if(n==2)
	{cout<<"3";
	return 0;
	}
	int count=0;
	for(int i=5;;i++)
	{
		judge=1;
		for(int j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
			{
				judge=0;
				break;
			}
		}
		if(judge)
		{
			count++;
		}
		if(n==count+2)
		{
		printf("%d",i);
		return 0;
		}
	
}
}
