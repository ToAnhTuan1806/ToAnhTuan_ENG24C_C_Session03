#include <stdio.h>

int main() {
// B1 Khai bao number, sum	
    int number, sum = 0;
    
// B2 Nhap gia tri number    
    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &number);

// B3 Xu ly tinh toan
    sum += number % 10;
    number /= 10;

    sum += number % 10;
    number /= 10;

    sum += number % 10;
    number /= 10;

    sum += number % 10;

// B4 In ra man hinh
    printf("Tong cac chu so = %d\n", sum);
    
    return 0;
}
