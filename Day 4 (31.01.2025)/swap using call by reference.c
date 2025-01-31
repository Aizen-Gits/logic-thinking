#include <stdio.h>
void swap(int *a, int *b) {
    int n = *a;
    *a = *b;
    *b = n;
    printf("\na is : %d", *a);
    printf("\nb is : %d", *b);
}
int main() {
    int c, d;
    printf("Enter a number a  : ");
    scanf("%d", &c);
    printf("Enter a number b  : ");
    scanf("%d", &d);
    swap(&c, &d);
    return 0;
}

