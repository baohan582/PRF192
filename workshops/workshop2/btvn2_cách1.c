#include <stdio.h>
#include <math.h>
int main() {
    int n;
    int count = 0;
    while (count < 5) {
        printf("Nhap so thu %d (0 < n <= 1000): ", count + 1);
        scanf("%d", &n);
        while (n <= 0 || n > 1000) {
            printf("Nhap lai (0 < n <= 1000): ");
            scanf("%d", &n);
        }
        printf("Can bac hai cua %d la: %.2f\n", n, sqrt(n));
        count++;
    }
    return 0;
}