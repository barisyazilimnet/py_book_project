#include <stdio.h>
#include <conio.h>
#include <stdlib.h>	
#include <locale.h>	
main(){
	setlocale(LC_ALL,"Turkish");
	char ornek1[20], ornek2[10], ornek3[10],ornek4[10], a[9]="istiyorum", b[10]="'Merhaba", c[10]="Zalim", d[10]="D�nya!'";
	int a1, b1, c1,d1;
	printf(">>>'Merhaba Zalim D�nya!'\n"); 
	printf("---------------------------------------------------------------------------------------------------------------------\n");
	printf("L�tfen denemek istiyorsan�z istiyorum\nDenemek istemiyorsan�z istemiyorum yaz�n�z...\n");
	scanf("%s",&ornek1);
	a1 = strcmp(ornek1, a);
	if(a1 == 0){ // s�f�ra e�it oldugu zaman kullan�c�n yazd�g� atlaya e�ittir
		printf("Devam ediyoruz o zaman :)\n");
	}
	else {
		printf(">>>");
		scanf("%s%s%s",&ornek2,&ornek3,&ornek4);
		b1 = strcmp(ornek2,b);
		c1 = strcmp(ornek3, c);
		d1 = strcmp(ornek4, d);
		printf("%d%d%d",b1,c1,d1);
		printf("%s",ornek4);
		printf("%s",d);
	 /*	if(b1&&c1&&d1 == 0){
	 		printf("Tebrikler! Do�ru cevap verdiniz :)\n");
		}
		else{
		 	printf("Bir yerde hata yapt�n�z san�rsam\nL�tfen tekrar deneyiniz :)\n");
		 	sleep(2);
//		 	etkilesimli_kabukta_ilk_adimlar();
		}*/
	}
}
