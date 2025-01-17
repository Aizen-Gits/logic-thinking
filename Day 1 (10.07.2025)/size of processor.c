#include<stdio.h>
int main(){
	double *p;
	double a;
	p=&a;
	printf("Size of processor = %d bits",sizeof(p)*8);
	return 0;
}
