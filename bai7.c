#include <stdio.h>

int main7(void){
	int LuaChon;
	printf("1.tinh chu vi hinh tron\n");
	printf("2.tinh dien tinh hinh tron\n");
	printf("3.tinh chu vi hinh chu nhat\n");
	printf("4.tinh dien tinh hinh chu nhat\n");
	scanf("%d", &LuaChon);
	switch(LuaChon){
		case 0: break;
		case 1:{
			float r,C;
			printf("nhap r = ", r);
			scanf("%f", &r);
			C=2*r*3.14;
			printf("chu vi hinh tron = %f", C);
			break;
		}
		case 2:{
			float r,S;
			printf("nhap r = ",r);
			scanf("%f", &r);
			S=r*r*3.14;
			printf("dien tich hinh tron = %f ", S);
			break;
		}
		case 3 :{
			float a,b;
			printf("nhap a la chieu rong =", a);
			scanf("%f", &a);
			printf("nhap b la chieu dai =", b);
			scanf("%f", &b);
			float C = (a+b)*2;
			printf("chu vi hinh chu nhat = %f", C);
			break;
		}
		case 4 :{
		    float a,b;
			printf("nhap a la chieu rong =", a);
			scanf("%f", &a);
			printf("nhap b la chieu dai =", b);
			scanf("%f", &b);
			float S = a*b;
			printf("chu vi hinh chu nhat = %f", S);
			
			break;
		}
	
	}
	return 0;
	
	
	
}
