#include<stdio.h>
#define PI 3.14159
int main(){
// B1 Khai bao radius, perimeter, area
	float radius, perimeter, area;
	
// B2 Nhap gia tri radius
	printf("Nhap ban kinh cua hinh tron = ");
	scanf("%f", &radius);
	
// B3 Xu ly tinh toan
	// Tinh chu vi
	perimeter = 2*PI*radius;
	// Tinh dien tich
	area = PI*radius*radius;

// B4 In ra man hinh
	printf("Chu vi hinh tron = %.2f\n", perimeter);
	printf("Dien tich hinh tron = %.2f", area);
	
	return 0;
}
