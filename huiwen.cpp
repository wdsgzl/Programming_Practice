#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main()
{
	string s;
	string s1;
	cin>>s;
	s1=s;
	cout<<s1;
	reverse(s.begin(),s.end());
	cout<<s;
	if(s1.compare(s))
	cout<<"yes"<<endl;
	else 
	cout<<"no"<<endl;
	return 0;
}
