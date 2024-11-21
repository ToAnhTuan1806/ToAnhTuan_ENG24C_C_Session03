#include<stdio.h>

int main(){
// B1 Khai bao celsius, fahrenheit
	float celsius, fahrenheit;
	
// B2 Nhap gai tri celsius
	printf("Nhap nhiet do theo do Celsius: ");
	scanf("%f", &celsius);
	
// B3 Xu ly tinh toan
	fahrenheit = (celsius * 9/5) + 32;
	
// B4 In ra man hinh
	printf("Chuyen doi nhiet do %.2f do Celsius = %.2f do Fahrenheit \n", celsius, fahrenheit);
	
	return 0;
}
