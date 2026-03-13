#include <stdio.h>

int main(){
    int a[100];
    int n, i;
    printf("Nhap so phan tu: ");
    scanf("%d",&n);
    printf("Nhap cac phan tu:\n");
    for(i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    printf("Mang dao nguoc: ");
    for(i = n-1; i >= 0; i--){
        printf("%d ", a[i]);
    }
    return 0;
}