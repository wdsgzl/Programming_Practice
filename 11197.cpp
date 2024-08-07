#include<iostream>
using namespace std;
int main()
{
	int n;
	int x;
	int y;
	int s;
	cin>>n>>x>>y;
	s=n-y/x-1;
	if(y%x==0)
	s=s+1;
	if(s<=0)
	s=0;
	cout<<s<<endl;
	return 0;
}
