#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

void combinations(int index,int arr[],vector<int> &ds,vector<vector<int>> &ans,int len,int target,int s)
{
	if(index==len)
	{
		if(s==target){
			ans.push_back(ds);
		}return;
	}
	if(s<=target)
	{
		ds.push_back(arr[index]);
		s+=arr[index];
		combinations(index,arr,ds,ans,len,target,s);
		ds.pop_back();
		s-=arr[index];
	}
	combinations(index+1,arr,ds,ans,len,target,s);
	
}

int main()
{
	int arr[]={2,3,6,7};
	int len=4;
	int target =7;
	vector<int> ds;
	vector<vector<int>> ans;
	combinations(0,arr,ds,ans,len,target,0);
	
	for(auto it: ans)
	{
		for(auto i: it)
		{
			cout<<i<<" ";
		}cout<<endl;
	}
}
