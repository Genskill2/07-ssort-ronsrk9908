#include <stdio.h>

void swap_max(int a[],int l,int n)
{
	int k=a[n];int m=-1;
        for(int i=n+1;i<l;i++)
{ 
		if(k<a[i])

		{k=a[i];
		m=i;}
		
}
if(m!=-1)
{  a[m]=a[n];
a[n]=k;
}
	
	return 0;
}
void ssort(int a[],int l)
{
    for(int i=0;i<l;i++)
    {swap_max(a,l,i);}
    
    return 0;
}

