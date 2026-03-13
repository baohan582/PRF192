#include <stdio.h>

void reverseArray(int a[], int n){
    int i, temp;
    for(i = 0; i < n/2; i++){
        temp = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = temp;
    }
}
int main(){
    int a[100], n, i;

    printf("Nhap so phan tu: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    reverseArray(a,n);
    printf("Mang sau khi dao nguoc: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}