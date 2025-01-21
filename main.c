#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	//kenarlarý seçilen dikdörtgenin alanýný ve çevresini bul
	// bir çemberin çevresini ve alanýný bul
	//girilen sayinin faktoriyelini bul
	
	int kenar1,kenar2,dikcevre,dikalan,cemberalan,cembercevre,soru;
	int sayi1,sayi2,sayi3,ort,islem;
	int pi,r,yaricap;
	int faksayi, i;
	int fak=1;

	
	printf("*** Secmece Sorular ***");
	printf("\n 1 den 5 e kadar herhangi bir sayi girin ve karsiniza cikan soruyu hesaplayin: ");
	scanf("%d",&soru);
	switch(soru)
	{
		case 1: 
	printf("Secilen kenarlar ile olusan dikdortgenin cevresini bulun.");
	printf("\n1. Kenar: ");
	scanf("%d",&kenar1);
	printf("2. Kenar: ");
	scanf("%d",&kenar2);
	dikcevre=kenar1*2+kenar2*2;
	printf("Dikdortgen cevre sonucu: %d",dikcevre);
	break;
	
	    case 2: 
	printf("Secilen kenarlar ile olusan dikdortgenin alanini bulun.");
	printf("\n1.Kenar: ");
	scanf("%d",&kenar1);
	printf("2. Kenar: ");
	scanf("%d",&kenar2);
	dikalan=kenar1*kenar2;
	printf("Dikdortgen alan sonucu: %d",dikalan);
	break;
	   
	    case 3:
	printf("Secilen degerler ile cemberin cevresini bulun.");
	printf("\nCemberin yaricapi: ");
	scanf("%d",&yaricap);
	pi=3.14;
	cembercevre=2*yaricap*pi;
	printf("Cemberin cevre degeri: %d",cembercevre);
	break;
	
       case 4: 
    printf("Secilen degerler ile cemberin alanini bulun.");
    printf("\nCemberin yaricapi:");
    scanf("%d",&yaricap);
    pi=3.14;
    cemberalan=pi*yaricap^2;
    printf("Cemberin alani: %d",cemberalan);
    break;
    
        case 5:
    printf("Secilen sayinin faktoriyeli:");
    printf("\nBir sayi secin: ");
    scanf("%d",&faksayi);
    
	for(i=1;i<=faksayi;i++)
    {
    	fak=fak*i;
	}
	printf("Girdiginiz sayinin faktoriyeli: %d",fak);
	break;
		
	}
	return 0;
}
