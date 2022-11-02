#include <stdio.h>
#include <stdlib.h>

void ilkislem(int i,int islem1)
{
	for(i=0;i<=100;i++)
	{
		islem1 += i;
	}
	
	
	islem1 = islem1 * islem1;
	
	printf("islem1:%d",islem1);
	
}

void ikinciislem(int a,int sonuc,int islem2,int islem1)
{
	int i;
	

	
   islem1=25664356;
   
    
	for(a=0;a<=100;a++)
	{
			islem2 = a*(a+1)*(a*2+1)/6;
	}
	
	printf("\nislem2:%d",islem2);
	
	sonuc = islem1 - islem2;
	
	printf("\nsonuc:%d",sonuc);
	

}


int main()
{
	int i;
	int islem1;
	int a;
	int sonuc;
	int islem2;
	

	
	ilkislem(i,islem1);
	
	
	ikinciislem(a,sonuc,islem1,islem2);
   

	
	return 0;
}
