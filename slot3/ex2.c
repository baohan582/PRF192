//2.Khai bao kieu kí tự tên kt, khởi gán giá trị cho 
//biến này.
//In ra: giá trị của biến:
//Giá trị thập phân, giá trị hex, giá trị octal
//Kích thước kiểu dữ liệu của biến kt
#include <stdio.h>
int main(){
	char kt = 'a';
	printf("%c\n",kt);
	printf("%d\n",kt);
	printf("%X\n",kt);
	printf("%o\n",kt);
	printf("%zu byte\n", sizeof(kt));
	
	return 0;
}