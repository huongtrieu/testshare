//Nhap diem thi v� he so 3 m�n To�n, L�, H�a cua mot sinh vi�n. T�nh diem trung b�nh cua sinh vi�n d�
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	float a,b,c,hsa,hsb,hsc;
	float dtb;
	printf("nhap diem thi mon toan:");
	scanf("%f",&a);
	printf("nhap diem thi mon ly:");
	scanf("%f",&b);
	printf("nhap diem thi mon hoa:");
	scanf("%f",&c);
	printf("nhap he so mon toan\nNhap he so mon ly\nNhap he so mon hoa\n");
	scanf("%f%f%f",&hsa,&hsb,&hsc);
	dtb=(a*hsa+b*hsb+c*hsc)/(hsa+hsb+hsc);
	printf("diem trung binh cua sinh vien do la: %f",dtb);
	
	getch();
	return 0;
}
