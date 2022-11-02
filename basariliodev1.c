#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void birbinarasiucunveyabesinkatlarinintoplami (int toplam, int a, int b, int c)
{
	
	
	for(a=0;a<1000;a++)
	{
	
	if(a%3==0)
	
	toplam=toplam+a;}

	
	for(b=0;b<1000;b++){
	
	
	if(b%5==0)
	
	toplam=toplam+b;
}
		
	for(c=0;c<1000;c++){
	                   	
	if(c%15==0)
	
	toplam=toplam-c;
}
	
	
	printf("sonuc:%d",toplam);

}
int main()
{
	int toplam;
	int a;
	int b;
	int c;


    birbinarasiucunveyabesinkatlarinintoplami(toplam,a,b,c);



	
return 0;
}