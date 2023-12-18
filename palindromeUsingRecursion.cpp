#include<iostream>
#include<cstring>
using namespace std;

bool check (char str[],int pointer)
{
	if(pointer>strlen(str)/2){
		return true;
	}
	int len=strlen(str);
	bool res;
	if(str[pointer]==str[len-pointer-1]){
		res=check(str,++pointer);
		return res;
	}
	else return false;
}
int main()
{
	char in[] = "zaadaa";
	if(check(in,0))
	{
		cout<<"Palindrome";
	}
	else cout<<"NO";
}
