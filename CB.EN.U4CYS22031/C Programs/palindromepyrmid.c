#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,j,k,l,n;
printf("Enter the number of rows : ");
scanf("%d",&n);
for(i = 1; i <= n; i++){
	for(int j = 1; j <= i; j++){
		printf("%d ",j);
	}
	for(int j = i-1; j >= 2; j--){
		printf("%d ",j);
	}
	printf("\n");
	}
return 0;
}
