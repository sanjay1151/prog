#include<stdio.h>

int main() 
{
	int n1,n2,n3,n;
	scanf("%d %d %d",&n1,&n2,&n3);
	if(n1 > n2)
		n = n1;
	else 
		n = n2;
	if(n > n3)
		printf("%d",n);
	else 
		printf("%d",n3);
}    
