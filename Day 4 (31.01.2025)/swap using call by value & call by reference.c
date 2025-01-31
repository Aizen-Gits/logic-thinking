#include <stdio.h>
void Value(int a, int b) {
    int n = a;
    a = b;
    b = n;
    printf("\nCall by Value :\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}
void Ref(int *a, int *b) {
    int n = *a;
    *a = *b;
    *b = n;
    printf("\nCall by Reference :\n");
    printf("a = %d\n", *a);
    printf("b = %d\n", *b);
}
int main(){
    int c, d;
    printf("Enter a number a: ");
    scanf("%d", &c);
    printf("Enter a number b: ");
    scanf("%d", &d);
    Value(c, d);
    Ref(&c, &d);
    return 0;
}

