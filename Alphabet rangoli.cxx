#include<iostream>
using namespace std;
void upside(int k,int n)
{
		int m=k;
		for(int i=1;i<=((n*2)-(k*2));i++)
		{
			cout<<"-";
		}
		for(int j=1,c=n-1; (j<=k )&& (c>=0 ); j++,c--)
		{
			cout<<char(65+c)<<"-";
			if(j==m)
			{
				if(m!=1)
				{
					int last=n-k+1;
					for(int l=last; l<n ;l++)
					{
						if(k==(n*2)/2 && (l== n-1))
						{
							cout<<char(65+l);
							break;
						}
						cout<<char(65+l)<<"-";
					}
				}
			}
		}
		for(int i=1;i<((n*2)-(2*k));i++)
		{
			cout<<"-";
		}
		cout<<endl;
}
int main()
{
	int num,row=1,length;
	cin>>num;
	length=(num*2);
	if(num<27 && num>0)
	{
	while(row < length)
	{
		if(row>length/2)
		{
			upside(length - row,num);
		}
		if(row <=length/2)
		{
			upside(row,num);
		}
		row++;
	}
	}
	else
	{
		return 0;
	}
}
/*
10
------------------J------------------
----------------J-I-J----------------
--------------J-I-H-I-J--------------
------------J-I-H-G-H-I-J------------
----------J-I-H-G-F-G-H-I-J----------
--------J-I-H-G-F-E-F-G-H-I-J--------
------J-I-H-G-F-E-D-E-F-G-H-I-J------
----J-I-H-G-F-E-D-C-D-E-F-G-H-I-J----
--J-I-H-G-F-E-D-C-B-C-D-E-F-G-H-I-J--
J-I-H-G-F-E-D-C-B-A-B-C-D-E-F-G-H-I-J
--J-I-H-G-F-E-D-C-B-C-D-E-F-G-H-I-J--
----J-I-H-G-F-E-D-C-D-E-F-G-H-I-J----
------J-I-H-G-F-E-D-E-F-G-H-I-J------
--------J-I-H-G-F-E-F-G-H-I-J--------
----------J-I-H-G-F-G-H-I-J----------
------------J-I-H-G-H-I-J------------
--------------J-I-H-I-J--------------
----------------J-I-J----------------
------------------J------------------

[Program finished]*/