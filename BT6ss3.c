#include<stdio.h>

int main(){
// B1 Khai bao edgeLength, height, area
	float edgeLength, height, area;

// B2 Nhap gia tri edgeLength, height
	printf("Do dai canh day cua tam giac = ");
	scanf("%f", &edgeLength);
	
	printf("Chieu cao cua tam giac = ");
	scanf("%f", &height);
	
// B3 Xu ly tinh toan
	area = (edgeLength*height) / 2;
	
// B4 In ra man hinh
	printf("Dien tich cua tam giac = %.2f", area);
		
	return 0;
}
