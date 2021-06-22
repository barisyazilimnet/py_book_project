#include <stdio.h>
#include <conio.h>
#include <stdlib.h>	
#include <locale.h>	
main(){
	setlocale(LC_ALL,"Turkish");
	char ornek1[20], ornek2[10], ornek3[10],ornek4[10], a[9]="istiyorum", b[10]="'Merhaba", c[10]="Zalim", d[10]="Dünya!'";
	int a1, b1, c1,d1;
	printf(">>>'Merhaba Zalim Dünya!'\n"); 
	printf("---------------------------------------------------------------------------------------------------------------------\n");
	printf("Lütfen denemek istiyorsanýz istiyorum\nDenemek istemiyorsanýz istemiyorum yazýnýz...\n");
	scanf("%s",&ornek1);
	a1 = strcmp(ornek1, a);
	if(a1 == 0){ // sýfýra eþit oldugu zaman kullanýcýn yazdýgý atlaya eþittir
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
	 		printf("Tebrikler! Doðru cevap verdiniz :)\n");
		}
		else{
		 	printf("Bir yerde hata yaptýnýz sanýrsam\nLütfen tekrar deneyiniz :)\n");
		 	sleep(2);
//		 	etkilesimli_kabukta_ilk_adimlar();
		}*/
	}
}
