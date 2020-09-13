#include <stdio.h>

int main6 (void){
	// diem 3 mon toan li hoa
	// tong diem 3 mon
	// tb 3 mon
	float toan,li,hoa;
	printf("nhap diem toan = \n", toan);
	scanf("%f", &toan);
	printf("nhap diem li = \n", li);
	scanf("%f", &li);
	printf("nhap diem hoa = \n", hoa);
	scanf("%f", &hoa);
	float sum = toan + li + hoa;
	printf("tong diem 3 mon = %f\n", sum);
	float trungbinh = sum/3;
	printf("diem trung binh 3 mon = %f\n", trungbinh);
	return 0;
	
	
	
}
