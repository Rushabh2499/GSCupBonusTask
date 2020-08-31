#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	printf("Enter a string\n");
	gets(str);
	int i, j;
	for(i=i; i<strlen(str); i++){
		if (islower(str[i])){
			for(j=i; j<strlen(str); j++)
				str[j]=str[j+1];
			str[j]='\0';
			i--;
		}
	}
	printf("%s\n", str);
	return 0;
}
