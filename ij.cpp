#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define N 100010
int main()
{
	int n;
	int a[N];
	int m;
	int minus;
	cin>>n;
	vector<int> s;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		s.push_back(a[i]);
	}
	sort(a,a+n);
	cin>>m;
	for(int i=0;i<n;i++)
	{
		int find = m - a[i];
		if(s.count(find)) 
		{
			if(find == a[i] && s.count(find) == 1)
			{
				continue;
			}
		cout<<a[i]<<" "<<m-a[i]<<endl;
		return 0;}
	}
	
	cout<<"No"<<endl;
	return 0;
}
