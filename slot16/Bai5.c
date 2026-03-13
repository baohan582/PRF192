#include <stdio.h>

void swap2(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void swap3(int *a, int *b, int *c){
    int temp;
    temp = *a;
    *a = *c;
    *c = *b;
    *b = temp;
}
int main(){
    int a, b, c;
    printf("Nhap a b c: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Truoc khi doi: %d %d %d\n", a, b, c);
    swap2(&a, &b);
    printf("Sau khi swap2: %d %d %d\n", a, b, c);
    swap3(&a, &b, &c);
    printf("Sau khi swap3: %d %d %d\n", a, b, c);
    return 0;
}