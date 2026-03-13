#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;
    int n, i;
    printf("Nhap so phan tu: ");
    scanf("%d",&n);
    p = (int*)malloc(n * sizeof(int));
    printf("Nhap cac phan tu:\n");
    for(i = 0; i < n; i++){
        scanf("%d", p + i);
    }
    printf("Mang dao nguoc: ");
    for(i = n-1; i >= 0; i--){
        printf("%d ", *(p+i));
    }
    free(p);

    return 0;
}