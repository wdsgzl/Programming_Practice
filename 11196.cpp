#include<iostream>
using namespace std;
int main()
{
	int n;
	int money;
	char s;
	cin>>n>>s;
	int num=(n-1000)/500;
	int yu=(n-1000)%500;
	if(n<=1000)
	money=8;
	else
	{
	money=8+(num+1)*4;
	if(yu==0)
	money=money-4;
	}
	if(s=='y')
	money=money+5;
	cout<<money<<endl;
	return 0;
}
