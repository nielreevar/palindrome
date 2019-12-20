#include<iostream>
using namespace std;
int main()
{
	int i,j,count=0,c=0;
	
	
	char s[]="malayalam";
	
	for(i=0;s[i] != '\0';++i)
	{
	
		count+=1;
		
	}
	cout<<count-1;
	
	
	
	for(i=0;i<count/2;i++)
	{
		for(j=0;j<count;j++)
		{
			if(s[i]==s[10-j])
			{
				c++;
			}
		}
	}
	
	
	if(count==c)
	{
		cout<<"\npal";
		
	}
	else
	cout<<"\nno";
	
	
	
	return 0;
	
	
}
