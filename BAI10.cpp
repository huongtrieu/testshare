//nhap ban kinh cua duong tron. tinh chu vi va dien tich
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float r,c,s;
	printf("nhap ban kinh cua duong tron:");
	scanf("%f",&r);
	c=2*r*M_PI;
	s=M_PI*r*r;
	printf("chu vi: %f\nDientich %f",c,s);
	getch();
}
