#include<iostream>
#include<stdio.h>
using namespace std;
int sum(int n,int limit,int s){
	if (n == limit)
	{
		return n;
	}
	s=n*sum(n+1,limit,s);
	return s;
}
int main()
{
	int ans;
	ans=sum(1,5,0);
	cout<<ans;
}
