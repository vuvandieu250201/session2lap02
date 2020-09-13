#include <stdio.h>

int main5(void){
	float top,bottom,height,S;
	printf("nhap top =", top);
	scanf("%f", &top);
	printf("nhap bottom =", bottom);
	scanf("%f", &bottom);
	printf("nhap height = ", height);
	scanf("%f",&height);
	S = ((top+bottom)*height)/2;
	printf("S = %f",S);
	return 0;
	
	
}
