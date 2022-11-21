#include<iostream>
using namespace std;
int main()
{
	string str1,str2;
	int c1=0,c2=0;
	cout<<"Enter the first string : ";
	getline(cin,str1);
	cout<<"Enter the second string : ";
	getline(cin,str2);
	for(int i=0;str2[i]!='\0';i++)
	{
		c2++;//finding length of string2
	}
	char last_ch=str2[c2-1];//storing last character in the ch
	for(int i=0;str1[i]!='\0';i++)
	{
		if(str1[i]==last_ch)
		{
			c1++;
		}
	}
	cout<<" number of occurrences of last character in second string, in the first string : ";
	cout<<c1;
	return 0;
	
}
