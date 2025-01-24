#include<stdio.h>
int main(){
	int n,i;
	printf("Enter a Number : ");
	scanf("%d", &n);
	int c= 0;
	for(i=2; i<=n/2; i++){
		if(n%i==0){
			c++;
			break;
		}
	}
	if(c==1){
		printf("Not a Prime Number");
	}else{
		printf("Prime Number");
	}
}
