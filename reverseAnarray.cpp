#include<iostream>
#include<stdio.h>
using namespace std;
void reverse(int arr[],int l,int r){
	if (l>r) {
	
	for(int i=0;i<5;i++)
	{
		cout<<arr[i];
	}
	return;}
	int temp;
	temp=arr[l];
	arr[l]=arr[r];
	arr[r]=temp;
	reverse(arr,l+1,r-1);
}
int main(){
	int arr[5] = {1,2,3,4,5};
	reverse(arr,0,4);
}
