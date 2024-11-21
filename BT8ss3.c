#include <stdio.h>

int main() {
// B1 Khai bao number, inverse	
    int number, inverse = 0;
    
// B2 Nhap gia tri number    
    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &number);

// B3 Xu ly tinh toan
     inverse += (number % 10) * 1000;
    number /= 10;

    inverse += (number % 10) * 100;
    number /= 10;

    inverse += (number % 10) * 10;
    number /= 10;

    inverse += number;

// B4 In ra man hinh
    printf("So nghich dao = %d\n", inverse);
    
    return 0;
}
