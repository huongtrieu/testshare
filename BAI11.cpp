//Nhap vào so xe (gom 4 chu so) cua ban. Cho biet so xe cua ban duoc may nuoc?
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int bsx,a,b,c,d,e;
	printf("nhap bien so xe cua ban:");
	scanf("%d",&bsx);
	a=bsx%10;
	bsx=bsx/10;b=bsx%10;
	bsx=bsx/10;c=bsx%10;
	bsx=bsx/10;d=bsx%10;
	e=(a+b+c+d)%10;
	if(e==0)
	printf("bien so xe cua ban duoc 10 nuoc",e);
	else	
	printf("bien so xe cua ban duoc %d nuoc",e);
	getch();
	
}
