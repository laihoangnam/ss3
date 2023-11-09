#include<stdio.h>
#include<math.h>
int main(){
	int nghin,tram,chuc,donvi;
	printf("nhap so 4 chu so:");
	nghin=getchar();
	tram=getchar();
	chuc=getchar();
	donvi=getchar();
	int tong= nghin + tram + chuc + donvi-192;
	printf("tong cac chu so :%d\n",tong);
	printf("so dao:");
	putchar(donvi);
	putchar(chuc);
	putchar(tram);
	putchar(nghin);
	}
