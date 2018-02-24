#include<stdio.h>

int main() 
{
	int n,k,i,sum = 0,arr[1000];
	scanf("%d %d",&n,&k);
	for(i = 0; i < n; i++)
	{
	    scanf("%d",&arr[i]);
	}
	for(i = 0; i < k; i++)
	{
	    sum += arr[i];
	}
	printf("%d",sum);
}    
