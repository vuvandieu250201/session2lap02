#include <stdio.h>

int main(void){
	int a,b,tong,hieu,tich;
	printf("nhap a = ", a);
	scanf("%d", &a);
	printf("nhap b = ", b);
	scanf("%d", &b);
	tong=a+b;
	printf("tong a va b = %d\n ", tong);
	hieu=a-b;
	printf("hieu a va b = %d\n", hieu);
	tich=a*b;
	printf("tich a va b = %d\n", tich);
	float thuong;
	thuong = (float)a / b;
	printf("thuong a va b  = %f\n", thuong);
	return 0;
	
	
}
