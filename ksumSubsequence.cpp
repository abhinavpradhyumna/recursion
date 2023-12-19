#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void printSumofN(int index,int arr[],vector<int> &ds,int len,int sum,int s)
{
	if(index==len)
	{
			if (s==sum)
			{
				for(auto it : ds )
				{
					cout<<it<<" ";
				}
				cout<<endl;
			}return ;
	}
		
	
	ds.push_back(arr[index]);
	s+=arr[index];
	printSumofN(index+1,arr,ds,len,sum,s);
	s-=arr[index];
	ds.pop_back();
	printSumofN(index+1,arr,ds,len,sum,s);
}

int main()
{
	int	arr[]={1,2,3,4,5};
	vector<int> ds;
	printSumofN(0,arr,ds,5,3,0);
	return 0;
}
