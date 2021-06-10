/*  viris outbreak

main string ***********
sub string *****
which is seqence of main string
ex:
   covidvirus -> main string
   virus-> sub string //in main string **vi***rus
   >>it print "POSITIVE"
   
   dus->in main string ****d***us
   >>it print "NEGATIVE"

*/
#include<iostream>
using namespace std;
void print(string str1,string str2)
{
	int i=0,j=0;
	while(i<str1.size() && j<str2.size())
	{
		if(str1[i]==str2[j])
		{
			j++;
		}
		i++;
	}
	if(j==str2.size())
	{
		cout<<"POSITIVE"<<endl;
	}
	else
	{
		cout<<"NEGITIVE"<<endl;
	}
}
int main()
{
	int n;
	string str1;
	cin>>n>>str1;
	while(n--)
	{
		string str2;
		cin>>str2;
		print(str1,str2);
	}
}

/*output:
5
covidvirus
cous
POSITIVE
cvvs
POSITIVE
bacd
NEGITIVE
dvies
NEGITIVE
vidi
POSITIVE

[Program finished]*/
