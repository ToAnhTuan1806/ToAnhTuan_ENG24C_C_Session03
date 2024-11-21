#include<stdio.h>

int main(){
// B1 Khai bao mathScore, literatureScore, englishScore, sum, average
	float mathScore, literatureScore, englishScore, sum, average;

// B2 Nhap gia tri mathScore, literatureScore, englishScore
	printf("Moi ban nhap diem toan: ");
	scanf("%f", &mathScore);
	printf("Moi ban nhap diem van: ");
	scanf("%f", &literatureScore);
	printf("Moi ban nhap diem anh: ");
	scanf("%f", &englishScore);
	
// B3 Xu ly tinh toan tinh diem tong, tinh diem trung binh
	sum = mathScore + literatureScore + englishScore;
	average = sum/3;
	
// B4 In ket qua ra man hinh
	printf("Tong diem = %.1f\n", sum);
	printf("Diem trung binh = %.1f", average);
	
// B5 Ket thuc
	return 0;
}
