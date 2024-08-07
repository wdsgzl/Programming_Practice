#include<iostream>
using namespace std;
int main()
{
	int m;
	int k;
	int count=0;
	cin>>m>>k;
	int a,b,c,d,e;
	if(m/10000==3)
	count++;
	if(m%10000/1000==3)
	count++;
	if(m%10000%1000/100==3)
	count++;
	if(m%10000%1000%100/10==3)
	count++;
	if(m%10000%1000%100%10==3)
	count++;
	if(m%19==0&&count==k)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	return 0;
}
