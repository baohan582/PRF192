#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Nhap n (0 < n <= 1000): ");
    scanf("%d", &n);
    while (n <= 0 || n > 1000) {
        printf("Nhap lai n (0 < n <= 1000): ");
        scanf("%d", &n);
    }
    printf("Can bac hai cua %d la: %.2f", n, sqrt(n));
    return 0;
}