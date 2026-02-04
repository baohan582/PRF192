#include <stdio.h>
int main() {
    int n;
    int ketQua = 0;
    int hang = 1;
    int soCuoi;
    printf("Nhap so thap phan n: ");
    scanf("%d", &n);
    while (n > 0) {
        soCuoi = n % 2;
        ketQua = ketQua + soCuoi * hang;
        hang = hang * 10;
        n = n / 2;
    }
    printf("So nhi phan la: %d", ketQua);

    return 0;
}