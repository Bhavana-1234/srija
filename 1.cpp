#include<bits/stdc++.h>
using namespace std;
int converttobase3(int a){ //function that converts number to base3
	 	int x,num=0,y=1;
        while(a!=0){
       x=a%3;
	num=num+(x*y);
	a=a/3;
	y=y*10;	
	}
	return num;	
}
int main(){
	int a;
	cout<<"Enter the number : ";
	cin>>a;
	cout<<"The number with base3 is :";
	cout<<converttobase3(a);
}
