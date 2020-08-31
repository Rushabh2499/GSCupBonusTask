#include<stdio.h>
int main(){
	int x;
	printf("Enter number\n");
	scanf("%d",&x);
	if(x%2==0)
		printf("It is even.\n");
	else
		printf("It is odd.\n");
	
	return 0;
}
