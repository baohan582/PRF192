//1.Khai bao và khởi tạo giá trị cho 2 số a,b nguyên
//2.Khai bao biến kq
//Hãy in kết quả: +, -, *, / của a,b
#include<stdio.h>
int main(){
	int a = 7;
	int b = 2;
	float kq;
kq = a + b;
printf("%d + %d = %.0f\n",a,b,kq);
kq = a - b;
printf("%d - %d = %.0f\n",a,b,kq);
kq = a * b;
printf("%d * %d = %d\n",a,b,kq);
kq = (float) a/b;
printf("%d / %d  = %.2f\n",a,b,kq);
return 0;
}
