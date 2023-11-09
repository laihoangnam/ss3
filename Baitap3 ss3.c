#include<stdio.h>
#include<math.h>

int main(){
	float a,b,c;
	printf("nhap diem toan: ");
	scanf("%f",&a);
	printf("nhap diem van: ");
	scanf("%f",&b);
	printf("nhap diem anh: ");
	scanf("%f",&c);
	float tong_diem = a+b+c;
	float diem_TB = (a+b+c)/3;
	printf("tong diem 3 mon la: %.2f \ndiem trung binh la: %.2f",tong_diem,diem_TB);
}
