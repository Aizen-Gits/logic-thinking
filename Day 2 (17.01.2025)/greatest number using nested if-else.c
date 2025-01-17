#include<stdio.h>
int main (){
	int m,n,o;
	printf("Enter a number m: ");
	scanf("%d", &m);
	printf("Enter a number n: ");
	scanf("%d", &n);
	printf("Enter a number o: ");
	scanf("%d", &o);
	if(m>n){
		if(m>o){
			printf("m is greatest");
		}else{
			printf("o is greatest");
		}
	}else{
		if(n>o){
			printf("n is greatest");
		}else{
			printf("o is greatest");
		}
	}
	return 0;
}
