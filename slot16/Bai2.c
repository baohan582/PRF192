#include <stdio.h>

void printArray(int *a, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d ", *(a+i));
    }
}
int main(){
    int a[100], n, i;
    printf("Nhap so phan tu: ");
    scanf("%d",&n);
    for(i = 0; i < n; i++){
        printf("a[%d] = ", i);
        scanf("%d",&a[i]);
    }
    printf("Mang vua nhap: ");
    printArray(a,n);
    return 0;
}