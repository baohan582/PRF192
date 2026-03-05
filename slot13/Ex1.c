#include <stdio.h>
void doubleX(int x){
	x = x + x;
}
void doubleX2(int *p){
	*p = *p + *p;
}
// nhập mảng (dùng con trỏ)
void inputArr(int *a, int n){
	for(int i = 0; i < n; i++){
		printf("a[%d] = ", i);
		scanf("%d", a + i);
	}
}
// xuất mảng (dùng con trỏ)
void outputArr(int *a, int n){
	for(int i = 0; i < n; i++){
		printf("%d ", *(a + i));
	}
	printf("\n");
}
// kiểm tra số nguyên tố (KHÔNG dùng con trỏ)
int isPrime(int n){
	if(n < 2) return 0;
	for(int i = 2; i * i <= n; i++){
		if(n % i == 0)
			return 0;
	}
	return 1;
}
// đếm số nguyên tố (dùng con trỏ)
int countPrimes(int *a, int n){
	int cnt = 0;
	for(int i = 0; i < n; i++){
		if(isPrime(*(a + i)))
			cnt++;
	}
	return cnt;
}
int main(){
	int x = 10;
	doubleX2(&x);
	printf("Gia tri x = %d\n", x);
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	int a[100];
	inputArr(a, n);
	printf("Mang: ");
	outputArr(a, n);
	printf("So luong so nguyen to: %d", countPrimes(a, n));
	return 0;
}