#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter a Number : ");
	scanf("%d", &a);
	printf("Enter a Number : ");
	scanf("%d", &b);
	printf("Enter a Number : ");
	scanf("%d", &c);
	if((a>b)?(a>c)?printf("a is the largest") : printf("c is the largest") : (b>c)?printf("b is the largest") : printf("c is the largest"))
return 0;
}
