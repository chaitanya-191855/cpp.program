//prime game

/*Example:
Range: [ 1, 10 ]  -> 2,3,5,7 

Difference = 7 - 2 = 5
----------------------------------
Range: [ 5, 5 ]  -> 5

Difference=0
----------------------------------
Range: [ 8 , 10 ]

no prime numbers between 8,10
so print -1

*/
#include<iostream>
using namespace std;
bool isprime(int first)
{
	if(first<2)
	{
		return false;
	}
	if(first==2 || first==3)
	{
		return true;
	}
	if(first%2==0 || first%3==0)
	{
		return false;
	}
	for(int i=5;i*i<first;i=i+6)
	{
		if(first%i ==0 || first%(i+2)==0)
		{
			return false;
		}
	}
	return true;
}
void primeDiff(int first,int last)
{
	int f=0,l=0,flag=0;
	while(first<=last)
	{
		if(isprime(first))
		{
			if(f==0)
			{
				f=first;
				flag=1;
			}
			l=first;
		}
		first++;
	}
	if(flag==1)
	{
		cout<<l-f<<endl;
	}
	else
	{
		cout<<-1<<endl;
	}
}
int main()
{
	int n,first,last;
	cin>>n;
	while(n--)
	{
		cin>>first>>last;
		primeDiff(first,last);
	}
}
/* output:
3
2 10
5
5 5
0
8 10
-1
[Program finished]*/