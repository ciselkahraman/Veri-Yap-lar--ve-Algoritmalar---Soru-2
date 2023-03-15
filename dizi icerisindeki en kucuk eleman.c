#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	int main() {
		
	int sayi,i;
	int dizi[100];
	printf("Eleman sayisini giriniz: ");
	scanf("%d",&sayi);
	
	for(i=0;i<sayi;i++)
	{
		printf("%d. Elemani giriniz: ",i+1);
		scanf("%d",&dizi[i]);
	}
	int kucuk=dizi[0];
	for(i=1;i<sayi;i++)
	{
		if(kucuk>dizi[i])
		{
			kucuk=dizi[i];
			
		}
	
	
	}
	printf("En kucuk elemaniniz: %d",kucuk);
	
	
	return 0;
}
