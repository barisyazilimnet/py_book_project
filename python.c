#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <process.h>
#include <locale.h>
#define HATA "          HATA!\nGe�ersiz giri� yapt�n�z :(\nL�tfen bekleyiniz\nYeniden y�kleniyor..."
#define RESET "\033[22;0m"
#define BLACK "\033[22;30m"
#define RED "\033[22;31m"
#define GREEN "\033[22;32m"
#define BROWN "\033[22;33m"
#define BLUE "\033[22;34m"
#define MAGENTA "\033[22;35m"
#define CYAN "\033[22;36m"
#define GRAY "\033[22;37m"
#define DARK_GRAY "\033[01;30m"
#define LIGHT_RED "\033[01;31m"
#define LIGHT_GREEN "\033[01;32m"
#define YELLOW "\033[01;33m"
#define LIGHT_BLUE "\033[01;34m"
#define LIGHT_MAGENTA "\033[01;35m"
#define LIGHT_CYAN "\033[01;36m"
#define WHITE "\033[01;37m"

main(){
	setlocale(LC_ALL,"Turkish");
	system("color 80");
	char giris;
	printf(LIGHT_CYAN"--------------------------------------------------\n"
		   	BLACK"PYTHON Programlama Dili\n"
	       	LIGHT_CYAN"--------------------------------------------------\n"
	       	BLACK
		   	"[1] Python hakk�nda\n"
		   	"[2] Python nas�l kurulur ?\n"
		   	"[3] Python nas�l �al��t�r�l�r ?\n"
		   	"[4] Etkile�imli python\n"
		   	"[q] ��k��\n"
		 	LIGHT_CYAN"--------------------------------------------------\n"
		 	WHITE">");
	scanf("%s",&giris);
	switch(giris){
		case ('1'):
		 	python_hakkinda();break;
		case ('2'):
		 	python_kurulum();break;
		case ('3'):
			python_calistirma();break;
		case ('4'):
			etkilesimli_python();break;
		case ('q'):
		 	exit(0);break;
		default:
         	hata();
		 	main();break;  
	}
}

// 1.b�l�m
python_hakkinda(){
	char giris1;
	baslangic();
	printf( LIGHT_CYAN"--------------------------------------------------\n"
		 	BLACK"Python hakk�nda\n"
		 	LIGHT_CYAN"--------------------------------------------------\n"
		 	BLACK
		 	"[1] Python nedir ?\n"
		 	"[2] Neden python ?\n"
		 	"[3] Platrom deste�i\n"
		 	"[4] Python s�r�mleri\n"
		 	"[5] Hangi seriyi �grenmeliyim ?\n"
		 	"[g] Geri gelmek i�in\n"
		 	"[q] ��k��\n"
		 	LIGHT_CYAN"--------------------------------------------------\n"
		 	WHITE">");
	scanf("%s",&giris1);
		switch(giris1){
			case ('1'):
			 	python_nedir();break;
			case ('2'):
			 	neden_python();break;
			case ('3'):
			 	platform_destek();break;
			case ('4'):
			 	python_surum();break;
			case ('5'):
			 	hangi_seri();break;
			case ('g'):
			 	geri_gelme();
			 	main();break;
			case ('q'):
			 	exit(0);break;
			default:
			 	hata();
		 		python_hakkinda();break;
		}
}

python_nedir(){
	baslangic();
	printf("Python nedir ?\n"
		 	LIGHT_CYAN"------------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Tahmin edebilceginiz gibi Python {C, C++, Perl, Ruby ve benzerleri gibi} bir programlama dilidir ve t�pk� �teki programlama dilleri gibi, �n�n�zde duran kara kutuya, yani bilgisayara h�kmetmenizi saglar.\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Bu programlama dili Guido Van Rossum adl� Hollandal� bir programc� taraf�ndan 90�l� y�llar�n ba��nda geli�tirilmeye \nba�lanm��t�r.\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n");
	basa_don_geri_gel_cikis();
}

neden_python(){
	baslangic();
	printf("Neden python ?\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Python programlar�n�n en b�y�k �zelliklerinden birisi, C ve C++ gibi dillerin aksine, derlenmeye gerek olmadan \n�al��t�r�labilmeleridir.\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n");
	basa_don_geri_gel_cikis();
}

platform_destek(){
	baslangic();
	printf("Platform deste�i\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Python programlama dili pek �ok farkl� i�letim sistemi ve platform �zerinde �al��abilir. GNU/Linux, Windows, \nMac OS X, AS/400, BeOS, MorphOS, MS-DOS, OS/2, OS/390, z/OS, RiscOS, S60, Solaris, VMS, Windows CE, HP-UX, iOS ve\n"
		 	"Android gibi, belki ad�n� dahi duymad���n�z pek �ok ortamda Python uygulamalar� geli�tirebilirsiniz. Ayr�ca herhangi \nbir ortamda yazd���n�z bir Python program�, �zerinde hi�bir de�i�iklik yap�lmadan veya ufak de�i�ikliklerle ba�ka \nortamlarda "
		 	"da �al��t�r�labilir.\n"
 			LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n");
	basa_don_geri_gel_cikis();
}

python_surum(){
	baslangic();
	printf("Python s�r�mleri\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"E�er daha �nce Python programlama dili ile ilgili ara�t�rma yapt�ysan�z, �u anda piyasada iki farkl� Python \nserisinin oldu�u dikkatinizi �ekmi� olmal�. 10.03.2020 tarihi itibariyle piyasada olan en yeni Python s�r�mleri\nPython "
		 	"2.7.17 ve Python 3.8.2�dir.\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"E�er bir Python s�r�m� 2 say�s� ile ba�l�yorsa {mesela 2.7.17}, o s�r�m Python 2.x serisine aittir. Yok e�er \nbir Python s�r�m� 3 say�s� ile ba�l�yorsa {mesela 3.8.2}, o s�r�m Python 3.x serisine aittir.\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n");
	basa_don_geri_gel_cikis();
}

hangi_seri(){
	baslangic();
	printf("Hangi seriyi �grenmeliyim ?\n" 
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Dedi�imiz gibi, �u anda piyasada iki farkl� Python serisi var: Python3 ve Python2. Peki acaba hangi seriye ait \nbir s�r�m� ��renmelisiniz?\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"K�sa cevap \nPython3�� ��renmelisiniz.\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Uzun cevap \nE�er Python programlama diline yeni ba�l�yorsan�z Python3�� ��renmeniz daha do�ru olacakt�r. Ama e�er Python \nprogramlama dilini belirli bir proje �zerinde �al��mak �zere ��reniyorsan�z, hangi s�r�m� ��renmeniz "
		 	"gerekti�i, \nprojede kullanaca��n�z yard�mc� mod�llerin durumuna ba�l�d�r. Zira �u anda piyasada bulunan b�t�n Python \nmod�lleri/programlar� hen�z Python3�e aktar�lm�� de�il.\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n");
	basa_don_geri_gel_cikis();
}

// 2.b�l�m
python_kurulum(){
	char giris2;
	baslangic();
	printf( LIGHT_CYAN"--------------------------------------------------\n"
		 	BLACK"Python nas�l kurulur ?\n"
		 	LIGHT_CYAN"--------------------------------------------------\n"
		 	BLACK
		 	"[1] GNU/Linux kullan�c�lar�\n"
		 	"[2] Windows kullan�c�lar�\n"
		 	"[3] Python kurulum ve �al��ma dizini\n"
		 	"[g] Geri gelmek i�in\n"
		 	"[q] ��k��\n"
		 	LIGHT_CYAN"--------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Python ile program yazabilmemiz i�in bu programlama dilinin bilgisayar�m�zda kurulu olmas� gerekiyor. Bu \nprogramlama dilini kurman�z�n gerekip gerekmedi�i, kulland���n�z i�letim sistemine ba�l�d�r. Biz burada hem\nGNU/Linux hem "
		 	"de Windows kullan�c�lar�n�n durumunu s�ras�yla ve ayr� ayr� inceleyece�iz.\n"
		 	LIGHT_CYAN"--------------------------------------------------\n"
		 	WHITE">");
	scanf("%s",&giris2);
	switch(giris2){
		case ('1'):
		 	linux_kullanici();break;
		case ('2'):
		 	windows_kullanici();break;
		case ('3'):
		 	calisma_dizini();break; 
		case ('g'):
		 	geri_gelme();
		 	main();break;
		case ('q'):
		 	exit(0);break;
		default:
		 	hata();
		 	python_kurulum();break;
	}
}

linux_kullanici(){
	char giris3;
	baslangic();
	printf(LIGHT_CYAN"------------------------------------\n"
		 	BLACK"GNU/Linux kullan�c�lar�\n"
		 	LIGHT_CYAN"------------------------------------\n"
		 	BLACK
		 	"[1] Kurulu python s�r�m�\n"
		 	"[2] Paket deposundan kurulum\n"
		 	"[3] Kaynaktan kurulum\n"
		 	"[k] Konu ba��na d�nmek i�in\n"
		 	"[g] Geri gelmek i�in\n"
		 	"[q] ��k��\n"
		 	LIGHT_CYAN"------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"GNU/Linux da��t�mlar�na Python programlama dilini kurarken baz� noktalar� g�z �n�nde bulundurmam�z gerekiyor. \n��te bu b�l�mde bu �nemli noktalar�n neler oldu�unu inceleyece�iz.\n"
		 	LIGHT_CYAN"------------------------------------\n"
		 	WHITE">");
	scanf("%s",&giris3);
	switch(giris3){
		case ('1'):
		 	kurulu_python();break;
		case ('2'):
		 	paket_deposu();break;
		case ('3'):
		 	kaynak_kurulum();break;
		case ('k'):
			basa_don();
		 	python_kurulum();break;
		case ('g'):
		 	geri_gelme();
		 	python_kurulum();break;
		case ('q'):
		 	exit(0);break;
		default:
		 	hata();
		 	linux_kullanici();break;
	}
}

kurulu_python(){
	baslangic();
	printf("Kurulu python s�r�m�\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Hemen hemen b�t�n GNU/Linux da��t�mlar�nda Python programlama dili kurulu olarak gelir. \n�rne�in Ubuntu�da Python zaten kuruludur.\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Daha �nce de belirtti�imiz gibi, �u anda piyasada iki farkl� Python serisi bulunuyor. Bunlardan birinin \nPython��n 2.x serisi, �tekinin ise 3.x serisi oldu�unu biliyorsunuz.\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Sisteminizde kurulu olan Python s�r�m�n� denetlemek i�in komut sat�r�nda �ncelikle �u komutu vermeyi deneyin.\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"python -V {b�y�k V} ile\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"E�er bu komuttan Python 2.x.y �eklinde bir ��kt� al�yorsan�z Python2 s�r�m�, E�er bu komuttan Python 3.x.y \n�eklinde bir ��kt� al�yorsan�z Python3 s�r�m� kuruludur\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Ancak python -V komutundan Python 2.x.y �eklinde bir ��kt� alman�z sisteminizde sadece Python2�nin kurulu \noldu�unu g�stermez. Sisteminizde Python2 ile birlikte Python3 de halihaz�rda kurulu olabilir. �rne�in Ubuntu\nGNU/Linux�un "
		 	"12.10 s�r�m�nden itibaren hem Python2, hem de Python3 sistemde kurulu vaziyettedir.\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Kulland���n�z GNU/Linux da��t�m�nda durumun ne oldu�unu denetlemek i�in yukar�daki komutu bir de {python3 -V}\n�eklinde �al��t�rmay� deneyebilirsiniz. E�er bu komut size bir hata mesaj� yerine bir s�r�m numaras� veriyorsa\n"
		 	"sisteminizde Python3 de kuruludur.\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Sisteminizdeki Python s�r�mlerine ili�kin daha kesin bir rapor i�in ise �u komutu kullanabilirsiniz:\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"ls -g {,/usr{,/local}}/bin | grep python\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Ayr�ca kulland���n�z GNU/Linux da��t�m�nda a�ag�daki gibi bir komut vererek de sistemde kurulu Python s�r�mleri \nhakk�nda bilgi edinebilirsiniz.\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"where python\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n");
	basa_don_geri_gel_cikis(); 
}

paket_deposu(){
	baslangic();
	printf("Paket deposundan kurulum\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Sistemlerinde �ntan�ml� olarak herhangi bir Python3 s�r�m� kurulu olmayan veya sistemlerinde kurulu �ntan�ml� \nPython3 s�r�m�nden memnun olmayan GNU/Linux kullan�c�lar�n�n, Python3�� elde etmek i�in tercih edebilece�i iki yol var.\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Benim size �nerece�im yol, �ncelikle kulland���n�z da��t�m�n paket y�neticisini kontrol etmenizdir. Python3 \nsisteminizde kurulu olmasa bile, da��t�m�n�z�n depolar�nda bu s�r�m paketlenmi� halde duruyor olabilir. O y�zden\n"
		 	"sisteminize uygun bir �ekilde paket y�neticinizi a��p orada �python� kelimesini kullanarak bir arama yapman�z� \n�neririm. �rne�in Ubuntu GNU/Linux da��t�m�n�n paket depolar�nda Python3 var. Dolay�s�yla Ubuntu kullan�c�lar�, \ne�er sistemlerinde "
		 	"zaten kurulu de�ilse {ki muhtemelen kuruludur}, bu paketi Ubuntu Yaz�l�m Merkezi arac�l���yla \nveya do�rudan �u komutla kurabilir.\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"sudo apt-get install python3\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Bu komut, Python3�� b�t�n ba��ml�l�klar� ile beraber bilgisayar�n�za kuracakt�r.\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n");
	basa_don_geri_gel_cikis();
}

kaynak_kurulum(){
	char giris4;
	baslangic();
	printf(LIGHT_CYAN"--------------------------------------------\n"
		 	BLACK"Kaynaktan kurulum\n"
		 	LIGHT_CYAN"--------------------------------------------\n"
		 	BLACK
		 	"[1] Root haklar� ile kurulum\n"
		 	"[2] Yetkisiz kullan�c� olarak kurulum\n"
		 	"[k] Konu ba��na d�nmek i�in\n"
		 	"[g] Geri gelmek i�in\n"
		 	"[q] ��k��\n"
		 	LIGHT_CYAN"--------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"E�er da��t�m�n�z�n depolar�nda Python3 paketini bulamazsan�z veya depodaki s�r�m sizi tatmin etmiyorsa, \nPython3�� kaynaktan derlemeniz gerekecektir. Python3�� kaynaktan derlerken iki se�ene�iniz var: Python3�� root \nhaklar� ile "
		 	"kurmak veya Python3�� yetkisiz kullan�c� olarak kurmak. Normal �artlar alt�nda e�er kulland���n�z\nsistemde root haklar�na sahipseniz Python3�� yetkili kullan�c� olarak kurman�z� tavsiye ederim.\n"
			LIGHT_CYAN"-----------------------------------------------\n"
		 	WHITE">");
	scanf("%s",&giris4);
	switch(giris4){
		case ('1'):
		 	root_haklari();break;
		case ('2'):
		 	yetkisiz_kullanici();break;
		case ('k'):
		 	basa_don();
			python_kurulum();break; 	
		case ('g'):
		 	geri_gelme();
		 	linux_kullanici();break;
		case ('q'):	
		 	exit(0);break;
		default: 
		 	hata();
		 	kaynak_kurulum();break;
	}
}

root_haklari(){
	baslangic();
	printf("Root haklar� ile kurulum\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Python�� kurmadan �nce sistemimizde bulunmas� gereken baz� programlar var. Asl�nda bu programlar olmadan da \nPython kurulabilir, ancak e�er bu programlar� kurmazsan�z Python��n baz� �zelliklerinden yararlanamazs�n�z \nBu programlar "
		 	"�unlard�r:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"[1] tcl-dev	[2] tk-dev	[3] zlib1g-dev	[4] ncurses-dev	[5] libreadline-dev	[6] libdb-dev\n"
		 	"[7] libgdbm-dev	[8] libzip-dev	[9] libssl-dev	[10] libsqlite3-dev	[11] libbz2-dev	[12] liblzma-dev\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Bu programlar�, kulland���n�z GNU/Linux da��t�m�n�n paket y�neticisi arac�l���yla kurabilirsiniz. Yaln�z paket\nadlar�n�n ve gerekli paket say�s�n�n da��t�mlar aras�nda farkl�l�k g�sterebilece�ini unutmay�n. Yukar�daki liste\nUbuntu "
		 	"i�in ge�erlidir. Mesela yukar�da tcl-dev olarak verdi�imiz paket ad� ba�ka bir da��t�mda sadece tcl olarak\nge�iyor ya da yukar�daki paketlerin baz�lar� kulland���n�z da��t�mda halihaz�rda kurulu oldu�u i�in sizin daha az\nba��ml�l�k kurman�z "
		 	"gerekiyor olabilir.\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Ubuntu�da yukar�daki paketlerin hepsini �u komutla kurabilirsiniz:\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"sudo apt-get install tcl-dev tk-dev\nzlib1g-dev ncurses-dev libreadline-dev\nlibdb-dev libgdbm-dev libzip-dev libssl-dev\nlibsqlite3-dev libbz2-dev liblzma-dev\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Yukar�daki programlar� kurduktan sonra {https://www.python.org/ftp/python/3.5.1} adresine gidiyoruz. Bu adreste, \n�zerinde {Python-3.5.1.tar.xz} yazan ba�lant�ya t�klayarak s�k��t�r�lm�� kurulum dosyas�n� bilgisayar�m�za "
		 	"indiriyoruz.\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Daha sonra bu s�k��t�r�lm�� dosyay� a��yoruz. A��lan klas�r�n i�ine girip, orada ilk olarak �u komutu veriyoruz:\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"./configure\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Bu komut, Python programlama dilinin sisteminize kurulabilmesi i�in gereken haz�rl�k a�amalar�n� ger�ekle�tirir.\nBu beti�in temel olarak yapt��� i�, sisteminizin Python programlama dilinin kurulmas�na uygun olup olmad���n�,\n"
		 	"derleme i�lemi i�in gereken yaz�l�mlar�n sisteminizde kurulu olup olmad���n� denetlemektir. Bu betik ayr�ca, bir \nsonraki ad�mda ger�ekle�tirece�imiz in�a i�leminin nas�l y�r�yece�ini tarif eden {Makefile} adl� bir dosya da olu�turur.\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Bu arada bu komutun ba��ndaki {./} i�areti, o anda i�inde bulundu�unuz dizinde yer alan {configure} adl� bir \nbeti�i �al��t�rman�z� sa�l�yor. E�er yaln�zca {configure} komutu verirseniz, i�letim sistemi bu beti�i PATH \ndizinleri "
		 	"i�inde arayacak ve bulamayaca�� i�in de hata verecektir.\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"{./configure} komutu hatas�z olarak tamamland�ktan sonra ikinci olarak �u komutu veriyoruz:\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"make\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Burada asl�nda {./configure} komutu ile olu�an {Makefile} adl� dosyay� make adl� bir program arac�l���yla \n�al��t�rm�� oluyoruz. {make} bir sistem komutudur. Bu komutu yukar�daki gibi parametresiz olarak �al��t�rd���m�zda \n{make} "
	 		"komutu, o anda i�inde bulundu�umuz dizinde bir {Makefile} dosyas� arar ve e�er b�yle bir dosya varsa onu \n�al��t�r�r. E�er bir �nceki ad�mda �al��t�rd���m�z {./configure} komutu ba�ar�s�z olduysa, dizinde bir {Makefile} \ndosyas� olu�mayaca�� "
		 	"i�in yukar�daki {make} komutu da �al��mayacakt�r. O y�zden derleme i�lemi s�ras�nda verdi�imiz \nkomutlar�n ��kt�lar�n� takip edip, bir sonraki a�amaya ge�meden �nce komutun d�zg�n sonlan�p sonlanmad���ndan emin \nolmam�z gerekiyor.\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"{make} komutunun yapt��� i�, Python programlama dilinin sisteminize kurulmas� esnas�nda sistemin �e�itli yerlerine \nkopyalanacak olan dosyalar� in�a edip olu�turmakt�r. Bu komutun tamamlanmas�, kulland���n�z bilgisayar�n "
		 	"kapasitesine \nba�l� olarak biraz uzun s�rebilir.\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"{make} komutu tamamland�ktan sonra, komut ��kt�s�n�n son sat�rlar�na do�ru ��yle bir uyar� mesaj� g�rebilirsiniz:\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"Python build finished, but the necessary bits to build these modules were not found: [burada eksik olan mod�l veya \nmod�llerin adlar� s�ralan�r]\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Burada Python, sistemimizde baz� paketlerin eksik oldu�u konusunda bizi uyar�yor. Uyar� mesaj�nda bir veya daha \nfazla paketin eksik oldu�unu g�rebilirsiniz. E�er �yleyse, eksik oldu�u bildirilen b�t�n paketleri kurmam�z "
		 	"gerekiyor.\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Gerekli paketi ya da paketleri kurduktan sonra {make} komutunu tekrar �al��t�r�yoruz. Endi�e etmeyin, {make} \nkomutunu ikinci kez verdi�imizde komutun tamamlanmas� birincisi kadar uzun s�rmez. E�er bu komutu ikinci kez\n"
			"�al��t�rd���n�zda yukar�daki uyar� mesaj� kaybolduysa �u komutla yolunuza devam edebilirsiniz:\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"sudo make altinstall\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Daha �nce kaynaktan program derlemi� olan GNU/Linux kullan�c�lar�n�n eli, {make} komutundan sonra {make install} \nkomutunu vermeye gitmi� olabilir. Ama burada bizim {make install} yerine {make altinstall} komutunu kulland���m�za\n"
		 	"dikkat edin. {make altinstall} komutu, Python kurulurken klas�r ve dosyalara s�r�m numaras�n�n da eklenmesini sa�lar. \nB�ylece yeni kurdu�unuz Python, sistemdeki eski Python3 s�r�m�n� silip �zerine yazmam�� olur ve iki farkl� s�r�m \nyan yana "
		 	"varolabilir. E�er {make altinstall} yerine {make install} komutunu verirseniz sisteminizde zaten varolan \neski bir Python3 s�r�m�ne ait dosya ve dizinlerin �zerine yaz�p silerek o s�r�m� kullan�lamaz hale getirebilirsiniz. \nBu da sistemde "
		 	"beklenmedik problemlerin ortaya ��kmas�na yol a�abilir. Bu �nemli ayr�nt�y� kesinlikle g�zden \nka��rmamal�s�n�z.\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n");
	basa_don_geri_gel_cikis();
}

yetkisiz_kullanici(){
	baslangic();
	printf("Yetkisiz kullan�c� olarak kurulum\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"E�er Python�� yetkisiz kullan�c� olarak kuracaksan�z, �ncelikle root haklar� ile kurulum konusu alt�nda \nbahsetti�imiz Python ba��ml�l�klar�n�n sisteminizde kurulu olup olmad���n� kontrol etmeniz laz�m. Kulland���n�z \nsistemde "
		 	"herhangi bir Python s�r�m� halihaz�rda kuruluysa, bu ba��ml�l�klar da muhtemelen zaten kuruludur. Ama \nde�ilse, bunlar� kurmas� i�in ya sistem y�neticisine ricada bulunacaks�n�z, ya da bu ba��ml�l�klar� da tek tek \nkendi ev dizininize "
		 	"kuracaks�n�z. E�er sistem y�neticisini bu ba��ml�l�klar� kurmaya ikna edemezseniz, internet \n�zerinden bulabilece�iniz bilgiler yard�m�yla bu ba��ml�l�klar� tek tek elle kendiniz kurabilirsiniz. Ancak bu \ni�lemin epey zaman alaca��n� ve s�re� "
		 	"s�ras�nda pek �ok ba�ka ba��ml�l�kla da kar��laca��n�z� s�yleyebilirim. \nO y�zden ne yap�p edip sistem y�neticisini ba��ml�l�klar� kurmaya ikna etmenizi tavsiye ederim... Tabii sistem \ny�neticisini bu ba��ml�l�klar� kurmaya ikna edebilirseniz, "
		 	"istedi�iniz Python s�r�m�n� de kurmaya ikna \nedebilece�inizi d���nebiliriz! Ama biz burada sizin Python�� kendinizin kuraca��n� varsayarak yolumuza devam edelim.\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Python�� yetkisiz olarak kurmak, root haklar�yla kurmaya �ok benzer. Aralar�nda yaln�zca bir-iki ufak fark vard�r. \nMesela Python�� yetkisiz kullan�c� olarak kurarken, {./configure} komutunu �u �ekilde vermeniz gerekiyor:\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"./configure --prefix=$HOME/python\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Python�� root haklar�yla kurdu�unuzda Python {/usr} dizini alt�na kurulacakt�r. Ancak siz yetkisiz kullan�c� \noldu�unuz i�in {/usr} dizinine herhangi bir �ey kuramazs�n�z. ��te bu y�zden, configure beti�ine verdi�imiz \n{�prefix} "
		 	"parametresi yard�m�yla Python��, yazma yetkimiz olan bir dizine kuruyoruz. Mesela yukar�daki komut \nPython��n {/usr} dizinine de�il, ev dizininiz i�inde python adl� bir klas�re kurulmas�n� sa�layacakt�r. Elbette \nsiz python yerine farkl� bir "
		 	"dizin ad� da belirleyebilirsiniz. Burada �nemli olan nokta, {�prefix} parametresine \nverece�iniz dizin ad�n�n, sizin yazmaya yetkili oldu�unuz bir dizin olmas�d�r.\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Bu komutu �al��t�rd�ktan sonra {make} komutunu normal bir �ekilde veriyoruz. Bunun ard�ndan da \n{make install (veya duruma g�re make altinstall)} komutuyla Python�� ev dizinimize kuruyoruz. Burada {make install} \nkomutunu "
		 	"{sudo}�suz kulland���m�za dikkat edin. ��nk�, dedi�imiz gibi, siz yetkili kullan�c� olmad���n�z i�in {sudo} \nkomutunu kullanamazs�n�z.\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Python�� bu �ekilde ev dizininiz alt�nda bir klas�re kurdu�unuzda Python ile ilgili b�t�n dosyalar�n bu klas�r i�inde yer ald���n� g�receksiniz. Bu klas�r� dikkatlice inceleyip neyin nerede oldu�una a�inal�k kazanmaya �al���n. E�er "
		 	"m�mk�nse root haklar� ile kurulmu� bir Python s�r�m�n� inceleyerek, dosyalar�n iki farkl� kurulum t�r�nde nerelere kopyaland���n� kar��la�t�r�n.\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n");
	basa_don_geri_gel_cikis();	
}

windows_kullanici(){
	baslangic();
	printf("Windows kullan�c�lar�\n"
	 	 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
	 	  	WHITE">>>"
	 	  	BLACK"Bunun i�in �ncelikle {http://www.python.org/downloads} adresine gidiyoruz.\n"
	 	  	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
	 	  	WHITE">>>"
	 	  	BLACK"Bu adrese gitti�inizde, �zerinde {Download Python 3.5.1} ve {Download 2.7.11} yazan, yan yana iki d��me \ng�receksiniz. Daha �nce de s�yledi�imiz gibi, e�er bir Python s�r�m numaras� '2' ile ba�l�yorsa o s�r�m 2.x serisine, \nyok "
		 	"e�er '3' ile ba�l�yorsa 3.x serisine aittir. Dolay�s�yla ilk d��me Python3 s�r�m�n�, ikinci d��me ise Python2 \ns�r�m�n� i�erir.\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Biz bu kitapta Python��n 3.x serisini anlataca��m�z i�in (yeni Python s�r�mleri ��kt���nda o d��meler �zerinde \nyazan s�r�m numaralar� de�i�ecek de olsa), �3� ile ba�layan s�r�m numaras�n� i�eren d��meye t�klamaya �zen\n"
		 	"g�steriyoruz. Bu d��meye t�klad���n�zda bilgisayar�n�za .exe uzant�l� kurulum dosyas� inecek. Bu dosyaya �ift \nt�klayarak kurulum program�n� ba�latabilirsiniz.\n"
			LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Kurulum dosyas�na �ift t�klad���n�zda kar��n�za ilk gelen ekranda, pencerenin alt taraf�nda �u kutucuklar� \ng�receksiniz:\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"[1] Install launcher for all users (recommended) \n[2] Add Python 3.5 to PATH\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Burada ilk kutucuk zaten se�ilidir. Bunu bu �ekilde b�rakabilirsiniz. �kinci kutucuk ise Python�� yola \neklememizi, b�ylece yaln�zca {python} komutu vererek Python�� ba�latabilmemizi sa�layacak. O y�zden oradaki ikinci kutucu�u\n"
		 	"da i�aretliyoruz.\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Ayn� pencerenin �st taraf�nda ise �u se�enekleri g�receksiniz:\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"[1] Install Now \n[2] Customize Installation\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n" 	
		 	WHITE">>>"
		 	BLACK"Burada {Install Now} yazan k�sma t�klayarak kurulumu ba�lat�yoruz.\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n" 	
		 	WHITE">>>"
		 	BLACK"E�er Python��n bilgisayarda nereye kurulaca��n� ve ba�ka birtak�m kurulum �zelliklerini de�i�tirmek istiyorsan�z \n{Customize Installation} yaz�l� k�sma t�klayabilirsiniz. Ben sizin {Install Now} yazan k�sma t�klayarak kurulum\n"
		 	"yapt���n�z� varsayaca��m.\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n" 	
		 	WHITE"	NOT!		NOT!		NOT!		NOT!		NOT!		NOT!\n>>>"
		 	BLACK"Python��n resmi sitesinde dola��rken kurulum dosyalar� aras�nda, {web-based installer} (web tabanl� kurulum beti�i) \nadl� bir kurulum dosyas� g�rebilirsiniz. Bu kurulum dosyas�, Python��n �al��mas� i�in gereken dosyalar� kurulum\n"
		 	"esnas�nda internetten indirip kuran, 1MB�dan k���k bir kurulum program� i�erir. Dolay�s�yla e�er kurulumu bu dosyadan \nyapacaksan�z, kesintisiz bir internet ba�lant�s�na ihtiyac�n�z olacak.\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE"	UYARI!		UYARI!		UYARI!		UYARI!		UYARI!		UYARI!\n>>>"
		 	BLACK"E�er Windows�ta Python�� kurmaya �al���rken hata al�yorsan�z, muhtemelen i�letim sisteminiz g�ncel de�ildir. \n�rne�in Windows 7�de Python kurabilmeniz i�in, SP1 (Service Pack 1) kurulu olmal�d�r. Windows g�ncellemelerini\n"
		 	"kurduktan sonra Python�� kurmay� tekrar deneyin.\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n");
	basa_don_geri_gel_cikis();
}

calisma_dizini(){
	baslangic();
	printf("Python kurulum ve �al��ma dizini\n"
		 	LIGHT_CYAN"-----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Python programlama dilini, kulland���m�z i�letim sistemine nas�l kurabilece�imizi bilmek kadar �nemli bir konu da \nPython�� hangi dizine kurdu�umuzu bilmektir. Zira programc�l�k maceram�z boyunca kar��la�aca��m�z baz� sorunlar,\n"
		 	"Python��n kurulu oldu�u dizine gitmemizi gerektirecek, �stelik kendi yazd���m�z baz� programlarda da Python��n kurulu \noldu�u dizinde �e�itli i�lemler yapmak ihtiyac� duyaca��z. Ayr�ca baz� durumlarda, o anda �al��an Python s�r�m�n�n \nhangi "
		 	"konumdan �al��t���n� tespit etmemiz de gerekebilir.\n"
		 	LIGHT_CYAN"-----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"��te bu sebeplerden, Python��n hangi dizine kuruldu�unu mutlaka biliyor olmam�z laz�m.\n"
		 	LIGHT_CYAN"-----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Python��n, i�letim sisteminizde hangi dizine kuruldu�u, Python�� nas�l kurdu�unuza ba�l� olarak farkl�l�k g�sterir.\n"
		 	LIGHT_CYAN"-----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
 	 		BLACK"GNU/Linux da��t�mlar�nda Python genellikle {/usr/lib/python 3.5} dizininde kurulur. Ama elbette, e�er siz Python�� \nkaynaktan derlediyseniz, derleme s�ras�nda {configure} beti�ine verdi�iniz {�prefix} parametresi yard�m�yla Python��n\n"
		 	"kurulum dizinini kendiniz de belirlemi� olabilirsiniz.\n"
		 	LIGHT_CYAN"-----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
	 		BLACK"Windows�ta Python programlama dilini aynen bu kitapta g�sterdi�imiz �ekilde kurduysan�z, Python \n{%LOCALAPPDATA%\\Programs\\Python} dizini i�ine kurulacakt�r. Ancak e�er kurulum penceresinde {Customize Installation} d��mesine \nbasarak "
		 	"kurulumu �zelle�tirdiyseniz ve {Install for all users} se�ene�ini i�aretlediyseniz Python {%PROGRAMFILES%} veya \n{%PROGRAMFILES(x86)} adl� �evre de�i�kenlerinin i�aret etti�i dizin i�ine kurulacakt�r.\n"
		 	LIGHT_CYAN"-----------------------------------------------------------------------------------------------------------------\n");
	basa_don_geri_gel_cikis();
}

//3.b�l�m
python_calistirma(){
	char giris5;
	baslangic();
	printf(LIGHT_CYAN"------------------------------\n"
		 	BLACK"Python nas�l �al��t�r�l�r ?\n"
	 		LIGHT_CYAN"-----------------------------\n"
	 		BLACK
	 		"[1] GNU/Linux kullan�c�lar�\n"
	 		"[2] Windows kullan�c�lar�\n"
	 		"[g] Geri gelmek i�in\n"
	 		"[q] ��k��\n"
	 		LIGHT_CYAN"-----------------------------\n"
	 		WHITE">");
	scanf("%s",&giris5);
	switch(giris5){
		case ('1'):
	 		linux_kullanici_2();break;
	 	case ('2'):
	 		windows_kullanici_2();break;
	  	case ('g'):
	 		geri_gelme();
	 		main();break;
	 	case ('q'):
	 		exit(0);break;
	 	default:
			hata();
			python_calistirma();break;
	}
}

linux_kullanici_2(){
	char giris6;
	baslangic();
	printf(LIGHT_CYAN"-----------------------------\n"
		 	BLACK"GNU/Linux kullan�c�lar�\n"
		 	LIGHT_CYAN"----------------------------\n"
		 	BLACK
		 	"[1] Kurulu python3'� kullananlar\n"
		 	"[2] Python3'� depodan kuranlar\n"
		 	"[3] Python3'� root olarak derleyenler\n"
		 	"[4] Python3'� ev dizinine kuranlar\n"
		 	"[5] GNU/Linux'ta farkl� s�r�mleri birlikte kullanmak\n"
		 	"[k] Konu ba��na d�nmek i�in\n"
		 	"[g] Geri gelmek i�in\n"
		 	"[q] ��k��\n"
		 	LIGHT_CYAN"----------------------------\n"
		 	WHITE">");
	scanf("%s",&giris6);
	switch(giris6){
		case ('1'):
			kurulu_python_kullanan();break;
		case ('2'):
			python_depodan_kuranlar();break;
		case ('3'):
			python_root_olarak_derleyen();break;
		case ('4'):
			python_ev_dizinine_kuranlar();break;
		case ('5'):
			linux_farkli_surumler_birlikte();break;
		case ('k'):
			basa_don();
			python_calistirma();break;	
		case ('g'):
			geri_gelme();
			python_calistirma();break;
		case ('q'):
			exit(0);break;
		default:
			hata();
			linux_kullanici_2();break;	
	}
}

kurulu_python_kullanan(){
	baslangic();
	printf("Kurulu python3'� kullananlar\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"E�er sisteminizde zaten Python3 kurulu ise komut sat�r�nda yaln�zca �u komutu vererek Python3�� ba�latabilirsiniz:\n"     
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"python\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Ancak daha �nce de dedi�imiz gibi, 20.04.2016 tarihi itibariyle pek �ok GNU/Linux da��t�m�nda �ntan�ml� olarak Python2 \nkuruludur. Dolay�s�yla {python} komutunu verdi�inizde �al��an s�r�m muhtemelen Python2 olacakt�r. Bu y�zden sistemimizde\n"
		 	"�ntan�ml� olarak hangi s�r�m�n kurulu oldu�una ve {python} komutunun hangi s�r�m� ba�latt���na �ok dikkat etmelisiniz.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Yine daha �nce de s�yledi�imiz gibi, sisteminizde hem Python2 hem de Python3 zaten kurulu durumda olabilir. O y�zden \nyukar�daki komutu bir de {python3} �eklinde vermeyi deneyebilirsiniz.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n");
	basa_don_geri_gel_cikis();
			
}

python_depodan_kuranlar(){
	baslangic();
	printf("Python3'� depodan kuranlar\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Dedi�imiz gibi, 20.04.2016 tarihi itibariyle GNU/Linux da��t�mlar�nda �ntan�ml� Python s�r�m� a��rl�kl� olarak \nPython2�dir. Dolay�s�yla {python} komutu Python��n 2.x s�r�mlerini �al��t�r�r. Bu durumdan �t�r�, herhangi bir �ak��may�\n"
		 	"�nlemek i�in GNU/Linux da��t�mlar� Python3 paketini farkl� bir �ekilde adland�rma yoluna gider. �u anda piyasada bulunan \nda��t�mlar�n ezici �o�unlu�u Python3 paketini �python3� �eklinde adland�r�yor. O y�zden GNU/Linux kullan�c�lar�, e�er paket\n"
		 	"y�neticilerini kullanarak Python kurulumu ger�ekle�tirmi� iseler, komut sat�r�nda �u komutu vererek Python3�� \nba�latabilirler:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"python3\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Bu komutun ard�ndan �una benzer bir ekranla kar��la�m�� olmal�s�n�z:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"istihza@ubuntu:~$ # python3 Python 3.5.1 (default, 20.04.2016, 12:24:55) [GCC 4.4.720120313 (Red Hat 4.4.7-3)] on linux \nType �help�, �copyright�, �credits� or �license� for more information.\n>>>\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"E�er yukar�daki ekran� g�rd�yseniz Python�la programlama yapmaya haz�rs�n�z demektir. De�ilse, geriye d�n�p i�lerin \nnerede ters gitti�ini bulmaya �al��abilirsiniz.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Bu a�amada i�lerin nerede ters gitmi� olabilece�ine dair birka� ipucu verelim:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"[1] Python3 kurulurken paket y�neticinizin herhangi bir hata vermedi�inden, program�n sisteminize ba�ar�yla kuruldu�undan \nemin olun. Bunun i�in Python3��n kurulu paketler listesinde g�r�n�p g�r�nmedi�ini denetleyebilirsiniz.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"[2] {python3} komutunu do�ru verdi�inize emin olun. Python programlama diline �zellikle yeni ba�layanlar�n en s�k yapt��� \nhatalardan biri python kelimesini yanl�� yazmakt�r. Python yerine yanl��l�kla pyhton, pyton veya phyton yazm��\n"
		 	"olabilirsiniz. Ayr�ca {python3} komutunun tamamen k���k harflerden  olu�tu�una dikkat edin. Python ve python bilgisayar \na��s�ndan ayn� �eyler de�ildir.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"[3] Kulland���n�z da��t�m�n Python3 paketini adland�rma politikas� yukar�da anlatt���m�zdan farkl� olabilir. Yani sizin \nkulland���n�z da��t�m, belki de Python3 paketini farkl� bir �ekilde adland�rm��t�r. E�er durum b�yleyse, da��t�m�n�z�n\n"
		 	"yard�m kaynaklar�n� (wiki, forum, irc, yard�m belgeleri, kullan�c� listeleri, vb.) kullanarak Python3��n nas�l \n�al��t�r�laca��n� ��renmeyi deneyebilirsiniz.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n");
	basa_don_geri_gel_cikis();
}

python_root_olarak_derleyen(){
	baslangic();
	printf("Python3'� root olarak derleyenler\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"E�er Python3�� �nceki b�l�mlerde anlatt���m�z �ekilde kaynaktan root haklar� ile derlediyseniz {python3} komutu \n�al��mayacakt�r. Bunun yerine �u komutu kullanman�z gerekecek:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"python3.5\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE"	NOT!		NOT!		NOT!		NOT!		NOT!		NOT!\n>>>"
		 	BLACK"Kurdu�unuz Python3 s�r�m�n�n 3.5 oldu�unu varsay�yorum. E�er farkl� bir Python3 s�r�m� kurduysan�z, elbette ba�lat�c� \nkomut olarak o s�r�m�n ad�n� kullanman�z gerekecektir. Mesela: python3.0 veya python3.1. Bu arada python3.5 komutunda 35\n"
		 	"say�s�n�n rakamlar� aras�nda bir adet nokta i�areti oldu�unu g�zden ka��rm�yoruz...\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"T�pk� paket deposundan kurulumda oldu�u gibi, e�er yukar�daki komut Python�� �al��t�rman�z� sa�lam�yorsa, kurulum \nesnas�nda baz� �eyler ters gitmi� olabilir. �rne�in kaynaktan kurulumun herhangi bir a�amas�nda bir hata alm�� \nolabilirsiniz "
		 	"ve bu da Python��n kurulumunu engellemi� olabilir.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"G�rd���n�z gibi, Python�� kaynaktan derleyenler Python programlama dilini �al��t�rabilmek i�in Python��n tam s�r�m \nad�n� belirtiyor. Dilerseniz bu �ekilde �al��maya devam edebilirsiniz. Bunun hi�bir sak�ncas� yok. Ancak ben size kolayl�k\n"
		 	"a��s�ndan, {/usr/bin/} dizini alt�na {py3} ad�nda bir sembolik ba� yerle�tirmenizi tavsiye ederim. B�ylece sadece {py3} \nkomutunu vererek Python3�� ba�latabilirsiniz.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Peki bunu nas�l yapaca��z?\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Python kaynaktan derlendi�inde �al��t�r�labilir dosya {/usr/local/bin/} dizini i�ine Python 3.5 (veya kurdu�unuz Python3 \ns�r�m�ne ba�l� olarak Python3.0 ya da Python3.1 ) ad�yla kopyalan�r. Bu nedenle Python3�� �al��t�rabilmek i�in "
		 	"python3.5 \nkomutunu kullanmam�z gerekir. Python3�� �al��t�rabilmek i�in mesela sadece py3 gibi bir komut kullanmak istiyorsak \nyapaca��m�z tek �ey {/usr/local/bin/} dizini i�indeki python 3.5 adl� dosyaya {/usr/bin} dizini alt�ndan, py3 adl� "
		 	"bir \nsembolik ba� olu�turmak olacakt�r. Bunun i�in {ln} komutunu kullanaca��z:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"ln -s /usr/local/bin/python3.5 /usr/bin/py3\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Tabii bu komutu yetkili kullan�c� olarak vermeniz gerekti�ini s�ylememe herhalde gerek yoktur. Bu komutu verdikten \nsonra art�k sadece {py3} komutu ile Python programlama dilini ba�latabilirsiniz.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE"	UYARI!		UYARI!		UYARI!		UYARI!		UYARI!		UYARI!\n>>>"
		 	BLACK"Bir �nceki ad�mda anlatt���m�z gibi Python3�� resmi sitesinden indirip kendiniz derlediniz. Gayet g�zel. Ancak bu \nnoktada �ok �nemli bir konuya dikkatinizi �ekmek isterim. En ba�tan beri s�yledi�imiz gibi, Python programlama dili\n"
		 	"GNU/Linux i�letim sistemlerinde �ok �nemli bir yere sahiptir. �yle ki bu programlama dili, kulland���n�z da��t�m�n \nbelkemi�i ndurumunda olabilir.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"�rne�in Ubuntu GNU/Linux da��t�m�nda pek �ok sistem arac� Python ile yaz�lm��t�r. Bu y�zden, sistemdeki �ntan�ml� \nPython s�r�m�n�n ne oldu�u ve dolay�s�yla {python} komutunun hangi Python s�r�m�n� �al��t�rd��� �ok �nemlidir. ��nk�\n"
		 	"sisteminizdeki hayati baz� ara�lar, {python} komutunun �al��t�rd��� Python s�r�m�ne bel ba�lam�� durumdad�r. Dolay�s�yla \nsizin bu {python} komutunun �al��t�rd��� Python s�r�m�ne dokunmaman�z gerekir.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Mesela e�er kulland���n�z i�letim sisteminde {python} komutu Python��n 2.x s�r�mlerinden birini �al��t�r�yorsa sembolik \nba�lar veya ba�ka ara�lar vas�tas�yla {python} komutunu Python��n ba�ka bir s�r�m�ne ba�lamay�n. Bu �ekilde b�t�n "
		 	"sistemi \nkullan�lmaz hale getirirsiniz. Elbette e�er kurulum a�amas�nda tarif etti�imiz gibi, Python3�� make install yerine \n{make altinstall} komutu ile kurmaya �zen g�sterdiyseniz, sonradan olu�turdu�unuz ba� dosyas�n� silip {python} komutunu "
		 	"yine \nsistemdeki �ntan�ml� s�r�me ba�layabilirsiniz. Bu �ekilde her �ey yine eski haline d�ner. Ama e�er Python�� {make install} \nkomutuyla kurman�zdan �t�r� sistemdeki �ntan�ml� Python s�r�m�ne ait dosyalar� kaybettiyseniz sizin i�in yap�lacak "
		 	"fazla bir \n�ey yok... Sistemi tekrar eski kararl� haline getirmek i�in kan, ter ve g�zya�� d�keceksiniz...\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Ayn� �ekilde, kulland���n�z da��t�mda {python3} komutunun �ntan�ml� olarak belirli bir Python s�r�m�n� ba�lat�p \nba�latmad��� da �nemlidir. Yukar�da {python} komutu ile ilgili s�ylediklerimiz python3 ve buna benzer ba�ka komutlar i�in \nde "
		 	"aynen ge�erli.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"�rne�in, Ubuntu GNU/Linux da��t�m�nda {python} komutu sistemde kurulu olan Python 2.x s�r�m�n�; {python3} komutu ise \nsistemde kurulu olan Python 3.x s�r�m�n� �al��t�rd���ndan, biz kendi kurdu�umuz Python s�r�mleri i�in, sistemdeki\n"
		 	"s�r�mlerle �ak��mayacak isimler se�tik. Mesela kendi kurdu�umuz Python3 s�r�m�n� �al��t�rmak i�in py3 gibi bir komut tercih \nettik.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"�yi bir test olarak, Python programlama dilini kendiniz kaynaktan derlemeden �nce �u komutun ��kt�s�n� iyice \ninceleyebilirsiniz:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"ls -g {,/usr{,/local}}/bin | grep python\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Bu komut iki farkl� Python s�r�m�n�n kurulu oldu�u sistemlerde �una benzer bir ��kt� verir (��kt� k�rp�lm��t�r):\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"dh_python2 \ndh_python3 \npdb2.7 -> ../lib/python2.7/pdb.py \npdb3.2 -> ../lib/python3.2/pdb.py \npy3versions -> ../share/python3/py3versions.py \npython -> python2.7 \npython2 -> python2.7 \npython2.7 \npython3 -> python3.2 \n"
		 	"python3.2 -> python3.2mu \npython3.2mu \npython3mu -> python3.2mu \npyversions -> ../share/python/pyversions.py\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Yat�k harflerle g�sterdi�imiz k�s�mlara dikkat edin. G�rd���n�z gibi {python ve python2} komutlar� bu sistemde \nPython��n 2.7 s�r�m�n� �al��t�r�yor. {python3} komutu ise Python��n 3.2 s�r�m�n�... Dolay�s�yla yukar�daki ��kt�y� \nald���m�z "
		 	"bir sistemde kendi kurdu�umuz Python s�r�mlerine 'python', 'python2' veya 'python3' gibi isimler vermekten \nka��nmal�y�z.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"S�z�n �z�, bir GNU/Linux kullan�c�s� olarak sistemdeki �ntan�ml� hi�bir Python s�r�m�n� silmemeli, �ntan�ml� s�r�me \nula�an komutlar� de�i�tirmemelisiniz. E�er mesela sisteminizde {python3} komutu halihaz�rda bir Python s�r�m�n�\n"
		 	"�al��t�r�yorsa, siz yeni kurdu�unuz Python s�r�m�ne ula�mak i�in �ntan�ml� adla �ak��mayacak ba�ka bir komut ad� kullan�n. \nYani �rne�in sisteminizde {python3} komutu Python��n 3.2 s�r�m�n� �al��t�r�yorsa, siz yeni kurdu�unuz s�r�m� �al��t�rmak\n"
		 	"i�in py3 gibi bir sembolik ba� olu�turun. B�rak�n �ntan�ml� komut (python, python3 vb.) �ntan�ml� Python s�r�m�n� \n�al��t�rmaya devam etsin.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Asla unutmay�n. Siz bir programc� aday� olarak, program yazaca��n�z i�letim sistemini enine boyuna tan�makla \ny�k�ml�s�n�z. Dolay�s�yla i�letim sisteminizi karars�z hale getirecek davran��lar� bilmeli, bu davran��lardan ka��nmal�, \nyanl�� "
		 	"bir i�lem yapt���n�zda da nas�l geri d�nece�inizi bilmelisiniz. Hele ki bir program� kaynaktan derlemeye karar \nvermi�seniz...\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Bu ciddi uyar�y� da yapt���m�za g�re g�n�l rahatl���yla yolumuza devam edebiliriz. :)\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n");
	basa_don_geri_gel_cikis();
}

python_ev_dizinine_kuranlar(){
	baslangic();
	printf("Python3'� ev dizinine kuranlar\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"E�er Python3�� k�s�tl� kullan�c� haklar� ile derleyip ev dizininize kurduysan�z yukar�daki komutlar Python�� \n�al��t�rman�z� sa�lamayacakt�r. Python3�� ev dizinine kurmu� olan kullan�c�lar Python3�� �al��t�rabilmek i�in, �ncelikle \nkomut "
		 	"sat�r� arac�l���yla Python3�� kurduklar� dizine, oradan da o dizin alt�ndaki {bin/} klas�r�ne ula�acak ve orada �u \nkomutu verecek:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"./python3.5\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Diyelim ki Python3�� {$HOME/python} adl� dizine kurdunuz. �nce �u komutla {$HOME/python/bin} adl� dizine ula��yoruz:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"cd $HOME/python/bin\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Ard�ndan da �u komutu veriyoruz:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"./python3.5\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE"	NOT!		NOT!		NOT!		NOT!		NOT!		NOT!\n>>>"
		 	BLACK"Elbette ben burada kurdu�unuz Python s�r�m�n�n 3.5 oldu�unu varsayd�m. E�er farkl� bir s�r�m kurduysan�z yukar�daki \nkomutu ona g�re yazman�z gerekiyor.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"E�er isterseniz bu �ekilde �al��maya devam edebilirsiniz. Ancak her defas�nda Python��n kurulu oldu�u dizin alt�na \ngelip orada {./python3.5} komutunu �al��t�rmak bir s�re sonra eziyete d�n��ecektir. ��lerinizi kolayla�t�rmak i�in �u\n"
		 	"i�lemleri takip etmelisiniz:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"[1] ev dizininizin alt�nda bulunan {.profile (veya kulland���n�z da��t�ma g�re .bash_profile ya da .bashrc )} adl� dosyay� \na��n.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"[2] Bu dosyan�n en sonuna �una benzer bir sat�r yerle�tirerek Python�� �al��t�rmam�z� sa�layan dosyan�n bulundu�u dizini \nyola ekleyin:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"export PATH=$PATH:$HOME/python/bin/\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"[3] {$HOME/python/bin/} sat�r� Python3��n �al��t�r�labilir dosyas�n�n hangi dizin alt�nda oldu�unu g�steriyor. Ben burada \nPython3��n �al��t�r�labilir dosyas�n�n {$HOME/python/bin} dizini i�inde oldu�unu varsayd�m. O y�zden de "
		 	"{$HOME/python/bin/} \ngibi bir sat�r yazd�m. Ama e�er Python3��n �al��t�r�labilir dosyas� sizde farkl� bir dizindeyse bu sat�r� ona g�re \nyazmal�s�n�z.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"[4] Kendi sisteminize uygun sat�r� dosyaya ekledikten sonra dosyay� kaydedip ��k�n. Dosyada yapt���m�z de�i�ikli�in etkin \nhale gelebilmesi i�in �u komutu verin:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"source .profile\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"Elbette e�er sizin sisteminizdeki dosyan�n ad� {.bash_profile} veya {.bashrc} ise yukar�daki komutu ona g�re \nde�i�tirmelisiniz.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"[5]  Daha sonra {$HOME/python/bin/python 3.5} adl� dosyaya {$HOME/python/bin/} dizini alt�ndan mesela py3 gibi bir sembolik \nba� verin:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"ln -s $HOME/python/bin/python3.5 $HOME/python/bin/py3\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"[6] Bilgisayar�n�z� yeniden ba�lat�n.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"[7] Art�k hangi konumda bulunursan�z bulunun, �u komutu vererek Python3�� ba�latabilirsiniz:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"py3\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n");
	basa_don_geri_gel_cikis();
}

linux_farkli_surumler_birlikte(){
	baslangic();
	printf("GNU/Linux'ta farkl� s�r�mleri birlikte kullanmak\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Daha �nce de dedi�imiz gibi, �u anda piyasada iki farkl� Python serisi bulunuyor: Python2 ve Python3. �ok uzun zamandan \nberi kullan�mda oldu�u i�in, Python2 Python3�e k�yasla daha yayg�n. E�er hem Python2 ile yaz�lm�� programlar� "
		 	"�al��t�rmak, \nhem de Python3 ile geli�tirme yapmak istiyorsan�z, sisteminizde hem Python2�yi hem de Python3�� ayn� anda bulundurmay� \ntercih edebilirsiniz. Peki bunu nas�l yapacaks�n�z?\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"En ba�ta da s�yledi�imiz gibi, hemen hemen b�t�n GNU/Linux da��t�mlar�nda Python2 kurulu olarak gelir. Dolay�s�yla e�er \nsisteminize ek olarak Python3�� de kurduysan�z (kaynaktan veya paket deposundan), ba�ka herhangi bir �ey yapman�za "
			"gerek\n yok. Konularda anlatt���m�z y�nergeleri takip ettiyseniz, konsolda {python} komutu verdi�inizde Python2 �al��acak, \n{python3 (veya py3)} komutunu verdi�inizde ise Python3 �al��acakt�r.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Ama e�er sisteminizde Python2 bile kurulu de�ils e, ki bu �ok �ok d���k bir ihtimaldir, Python2�yi paket y�neticiniz \nyard�m�yla sisteminize kurabilirsiniz. �u anda piyasada olup da paket deposunda Python bulundurmayan GNU/Linux da��t�m�\n"
		 	"pek azd�r.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n");
	basa_don_geri_gel_cikis();
}

windows_kullanici_2(){
	char giris7;
	baslangic();
	printf(LIGHT_CYAN"-----------------------------\n"
		 	BLACK"Windows kullan�c�lar�\n"
		 	LIGHT_CYAN"----------------------------\n"
		 	BLACK
		 	"[1] Winodws'ta farkl� s�r�mleri birlikte kullanmak\n"
		 	"[k] Konu ba��na d�nmek i�in\n"
		 	"[g] Geri gelmek i�in\n"
		 	"[q] ��k��\n"
		 	LIGHT_CYAN"----------------------------\n"
		 	WHITE">>>"
		 	BLACK"Windows kullan�c�lar� Python3�� iki �ekilde ba�latabilir:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
			BLUE"[1] Ba�lat > T�m Programlar > Python 3.5 > Python (Command Line) yolunu takip ederek\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
			BLUE"[2] Komut sat�r�nda {python} komutunu vererek.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"E�er birinci yolu tercih ederseniz, Python��n size sundu�u komut sat�r�na do�rudan ula�m�� olursunuz. Ancak Python \nkomut sat�r�na bu �ekilde ula�t���n�zda baz� k�s�tlamalarla kar�� kar��ya kal�rs�n�z. Do�rudan Python��n komut sat�r�na\n"
			"ula�mak yerine �nce MS-DOS komut sat�r�na ula��p, oradan Python komut sat�r�na ula�mak �zellikle ileride yapaca��n�z \n�al��malar a��s�ndan �ok daha mant�kl� olacakt�r. O y�zden komut sat�r�na bu �ekilde ula�mak yerine ikinci se�ene�i tercih\n"
			"etmenizi tavsiye ederim. Bunun i�in konularda b�l�mlerde g�sterdi�imiz �ekilde komut sat�r�na ula��n ve orada �u komutu \n�al��t�r�n:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"python\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
			WHITE">>>"
		 	BLACK"Bu komutu verdi�inizde �una benzer bir ekranla kar��la�acaks�n�z:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"C:\\Users\\istihza> python3 Python 3.5.1 (v3.5.1:c0e311e010fc, 20.04.2016, 12:24:55) [MSCv.1600 32 bit (Intel)] on win32 \nType �help�, �copyright�, �credits� or �license� for more information.\n>>>\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"E�er bu komut yukar�dakine benzer bir ekran yerine bir hata mesaj� verdiyse kurulum s�ras�nda baz� ad�mlar� eksik veya \nyanl�� yapm�� olabilirsiniz. Yukar�daki komut �al��m�yorsa, muhtemelen kurulum s�ras�nda Add python 3.5 to path "
			"kutucu�unu \ni�aretlemeyi unutmu�sunuzdur. E�er �yleyse, kurulum dosyas�n� tekrar �al��t�r�p, ilgili ad�m� ger�ekle�tirmeniz veya \nPython�� kendiniz YOL�a eklemeniz gerekiyor.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">");
	scanf("%s",&giris7);
	switch(giris7){
		case ('1'):
			windows_farkli_surumler_birlikte();break;
		case ('k'):
			basa_don();
			python_calistirma();break;	
		case ('g'):
			geri_gelme();
			python_calistirma();break;
		case ('q'):
			exit(0);break;
		default:
			hata();
			windows_kullanici_2();break;
	}
}

windows_farkli_surumler_birlikte(){
	baslangic();
	printf("Windows'ta farkl� s�r�mleri birlikte kullanmak\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Daha �nce de dedi�imiz gibi, �u anda piyasada iki farkl� Python serisi bulunuyor: Python2 ve Python3. �ok uzun zamandan \nberi kullan�mda oldu�u i�in, Python2 Python3�e k�yasla daha yayg�n. E�er hem Python2 ile yaz�lm�� programlar� "
			"�al��t�rmak, \nhem de Python3 ile geli�tirme yapmak istiyorsan�z, sisteminizde hem Python2�yi hem de Python3�� ayn� anda bulundurmay� \ntercih edebilirsiniz. Peki bunu nas�l yapacaks�n�z?\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Windows�ta bu i�lemi yapmak �ok kolayd�r. {python.org/download} adresine giderek farkl� Python s�r�mlerini \nbilgisayar�n�za indirebilir ve bunlar� bilgisayar�n�za normal bir �ekilde kurabilirsiniz. Bu �ekilde sisteminize \nistedi�iniz say�da "
			"farkl� Python s�r�m� kurabilirsiniz. Peki bu farkl� s�r�mlere nas�l ula�acaks�n�z?\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Python, bilgisayar�m�zdaki farkl� Python s�r�mlerini �al��t�rabilmemiz i�in bize {py} adl� �zel bir program sunar.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE"	NOT!		NOT!		NOT!		NOT!		NOT!		NOT!\n>>>"
		 	BLACK"Py program� yaln�zca Windows�a �zg�d�r. GNU/Linux�ta b�yle bir program bulunmaz.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Py program�n� �al��t�rmak i�in, daha �nce g�sterdi�imiz �ekilde sistem komut sat�r�na ula��yoruz ve orada �u komutu \nveriyoruz:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"py\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Bu komutu verdi�inizde (teorik olarak) sisteminize en son kurdu�unuz Python s�r�m� �al��maya ba�layacakt�r. Ancak bu \nher zaman b�yle olmayabilir. Ya da ald���n�z ��kt� bekledi�iniz gibi olmayabilir. O y�zden bu komutu verdi�inizde hangi\n"
			"s�r�m�n ba�lad���na dikkat edin.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"E�er sisteminizde birden fazla Python s�r�m� kurulu ise, bu betik yard�m�yla istedi�iniz s�r�m� ba�latabilirsiniz. \nMesela sisteminizde hem Python��n 2.x s�r�mlerinden biri, hem de Python��n 3.x s�r�mlerinden biri kurulu ise, �u komut\n"
			"yard�m�yla Python 2.x�i ba�latabilirsiniz:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"py -2\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Python 3.x�i ba�latmak i�in ise �u komutu veriyoruz:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"py -3\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"�er sisteminizde birden fazla Python2 veya birden fazla Python3 s�r�m� kurulu ise, ana ve alt s�r�m numaralar�n� \nbelirterek istedi�iniz s�r�me ula�abilirsiniz:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"py -2.6 \npy -2.7 \npy -3.4 \npy -3.5\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Bu arada dikkat ettiyseniz, Python programlar�n� ba�latabilmek i�in hem {python} hem de {py} komutunu kullanma imkan�na \nsahibiz. E�er sisteminizde tek bir Python s�r�m� kurulu ise, Python�� ba�latmak i�in {python} komutunu kullanmak\n"
			"isteyebilir, farkl� s�r�mlerin bir arada bulundu�u durumlarda ise {py} ile bu farkl� s�r�mlere tek tek eri�mek \nisteyebilirsiniz.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n");
	basa_don_geri_gel_cikis();
}

//4.b�l�m
etkilesimli_python(){
	char giris8;
	baslangic();
	printf(LIGHT_CYAN"------------------------------\n"
		 	BLACK"Etkile�imli python\n"
	 		LIGHT_CYAN"-----------------------------\n"
	 		BLACK
	 		"[1] Etkile�imli kabukta ilk ad�mlar\n"
	 		"[2] Etkile�imli kabu�un haf�zas�\n"
	 		"[g] Geri gelmek i�in\n"
	 		"[q] ��k��\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"�u ana kadar ��rendiklerimiz sayesinde Python programlama dilinin farkl� sistemlere nas�l kurulaca��n� ve nas�l \n�al��t�r�laca��n� biliyoruz. Dolay�s�yla Python�� bir �nceki b�l�mde anlatt���m�z �ekilde �al��t�rd���m�z zaman �una benzer\n"
			"bir ekranla kar��la�aca��m�z�n fark�nday�z:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"istihza@ubuntu:~$ # python3 Python 3.5.1 (default, 20.04.2016, 12:24:55) [GCC 4.4.720120313 (Red Hat 4.4.7-3)] on linux \nType �help�, �copyright�, �credits� or �license� for more information.\n>>>\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Biz �imdiye kadar bu ekrana Python komut sat�r� demeyi tercih ettik. Dilerseniz bundan sonra da bu ad� kullanmaya \ndevam edebilirsiniz. Ancak teknik olarak bu ekrana etkile�imli kabuk (interactive shell ) ad� verildi�ini bilmemizde fayda\n"
			"var. Etkile�imli kabuk, bizim Python programlama dili ile ili�ki kurabilece�imiz, yani onunla etkile�ebilece�imiz bir �st \nkatmand�r. Etkile�imli kabuk, as�l program�m�z i�inde kullanaca��m�z kodlar� deneme imkan� sunar bize. Buras� bir nevi "
			"test \nalan� gibidir. �rne�in bir Python kodunun �al���p �al��mad���n� denemek veya nas�l �al��t���n�, ne sonu� verdi�ini g�rmek \nistedi�imizde bu ekran son derece faydal� bir ara� olarak kar��m�za ��kar. Bu ortam, �zellikle Python�a yeni "
			"ba�layanlar�n \nbu programlama diline a�inal�k kazanmas�n� sa�lamas� a��s�ndan da bulunmaz bir ara�t�r. Biz de bu b�l�mde etkile�imli kabuk \n�zerinde baz� �al��malar yaparak, Python�a al��ma turlar� ataca��z.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Bu arada, ge�en b�l�mde s�yledi�imiz gibi, bu ortam�n sistem komut sat�r� ad�n� verdi�imiz ortamdan farkl� oldu�unu \nakl�m�zdan ��karm�yoruz. O zaman da dedi�imiz gibi, sistem komut sat�r�nda sistem komutlar�, Python komut sat�r�nda\n"
			"(yani etkile�imli kabukta) ise Python komutlar� verilir. Mesela echo %PATH%, cd Desktop, dir ve ls birer sistem komutudur. \nE�er bu komutlar� etkile�imli kabukta vermeye kalk���rsan�z, bunlar birer Python komutu olmad��� i�in, Python size bir "
			"hata \nmesaj� g�sterecektir. Mesela Python��n etkile�imli kabu�unda {cd Desktop} komutunu verirseniz ��yle bir hata al�rs�n�z:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE">>> cd Desktop\n  File \"<stdin>\", line 1\n      cd Desktop\n	       ^ \nSyntaxError: invalid syntax\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"��nk� {cd Desktop} bir Python komutu de�ildir. O y�zden bu komutu Python��n etkile�imli kabu�unda veremeyiz. Bu komutu \nancak ve ancak kulland���m�z i�letim sisteminin komut sat�r�nda verebiliriz.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Farkl� i�letim sistemlerinde {py3, py -3, python3 veya python} komutunu vererek Python��n komut sat�r�na nas�l \neri�ebilece�imizi �nceki derslerde ayr�nt�l� olarak anlatm��t�k. Etkile�imli kabu�a ula�makta s�k�nt� ya��yorsan�z eski\n"
			"konular� tekrar g�zden ge�irmenizi tavsiye ederim.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Etkile�imli kabuk �zerinde �al��maya ba�lamadan �nce dilerseniz �nemli bir konuyu a��kl��a kavu�tural�m: Etkile�imli \nkabu�u ba�ar�yla �al��t�rd�k. Peki bu kabuktan ��kmak istersek ne yapaca��z? Elbette do�rudan pencere �zerindeki �arp�\n"
			"tu�una basarak bu ortam� terk edebilirsiniz. Ancak bu i�lemi kaba kuvvete ba�vurmadan yapman�n bir yolu olmal�, de�il mi?\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Etkile�imli kabuktan ��kman�n birka� farkl� yolu vard�r:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"[1] Pencere �zerindeki �arp� d��mesine basmak (kaba kuvvet) \n[2] �nce Ctrl+Z tu�lar�na, ard�ndan da Enter tu�una basmak (Windows) \n[3] Ctrl+Z tu�lar�na basmak (GNU/Linux)\n"
		 	"[4] �nce F6 tu�una, ard�ndan da Enter tu�una basmak (Windows) \n[5] quit() yaz�p Enter tu�una basmak (B�t�n i�letim sistemleri) \n[6] import sys; sys.exit() komutunu vermek (B�t�n i�letim sistemleri)\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
	 		WHITE">");
	scanf("%s",&giris8);
	switch(giris8){
		case ('1'):
	 		etkilesimli_kabukta_ilk_adimlar();break;
	 	case ('2'):
	 		etkilesimli_kabuk_hafizasi();break;
	  	case ('g'):
	 		geri_gelme();
	 		main();break;
	 	case ('q'):
	 		exit(0);break;
	 	default:
			hata();
			etkilesimli_python();break;
	}
}

etkilesimli_kabukta_ilk_adimlar(){
	char ornek1[50], a[5]="atla", c[50]="'Merhaba Zalim D�nya!'";
	int b, d;
	baslangic();
	printf("Etkile�imli kabukta ilk ad�mlar\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"�imdi kendi sistemimize uygun bir �ekilde etkile�imli kabu�u tekrar �al��t�ral�m. Etkile�imli kabu�u �al��t�rd���m�zda ekranda g�r�nen {>>>} i�areti Python��n bizden komut almaya haz�r oldu�unu g�steriyor. Python kodlar�m�z� bu {>>>} "
			"i�aretinden hemen sonra, hi� bo�luk b�rakmadan yazaca��z.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Buradaki �hi� bo�luk b�rakmadan� k�sm� �nemli. Python�a yeni ba�layanlar�n en s�k yapt��� hatalardan biri {>>>} i�areti ile komut aras�nda bo�luk b�rakmalar�d�r. E�er bu �ekilde bo�luk b�rak�rsan�z yazd���n�z kod hata verecektir.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE">>>'Merhaba Zalim D�nya!'\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLACK"Denemek istermisiniz\nEger denemek istemiyorsan�z l�tfen atla yaz�n�z...\n>>>");
		 	scanf("%s",&ornek1);
		 	b = strcmp(ornek1, a);
//			d = strcmp(ornek1, c);
		 	if(b == 0){ // s�f�ra e�it oldugu zaman kullan�c�n yazd�g� atlaya e�ittir
		 		printf("Devam ediyoruz o zaman :)\n");
			 }
			 else {
			 	if(ornek1 == c){
			 		printf("Tebrikler! Do�ru cevap verdiniz :)\n");
				 }
				 else{
				 	printf("Bir yerde hata yapt�n�z san�rsam\nL�tfen tekrar deneyiniz :)\n");
				 	sleep(2);
				 	etkilesimli_kabukta_ilk_adimlar();
				 }
			 }
//		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n");
	basa_don_geri_gel_cikis();		
}

etkilesimli_kabuk_hafizasi(){
	
}

//burdan sonras� yeniden olu�an fonksiyonlar
baslangic(){
	system("cls");
	sleep(1);
	system("color 80");		
}

hata(){ 
 	printf(HATA);
 	sleep(1);
 	system("cls");
}

basa_don_geri_gel_cikis(){
	printf(BLACK);
	char i;
	printf("Konu ba��na d�nmek i�in 'k'\nBir geri gelmek i�in 'g'\n��k�� yapmak i�in 'q'\n"
			WHITE">");
	scanf("%s",&i);
 			printf(BLACK);
 			if(i == 'g'){
			 		geri_gelme();
//			 		if(nedir || neden || destek || surum || hangi_seri){ 
//			 				hakkinda();
					 }
					 
//			 }
			 else if(i == 'k'){
			 	basa_don();
//			 		if(nedir || neden || destek || surum || hangi_seri){
//			 				hakkinda();
					 }
//					 else if(linux || kurulu || paket_deposu){
//					 		kurulum();
//					 }
//			 }
			 else if(i == 'q'){
			 	exit(0);
			 }
			 else{
			 	printf("Hatal� giri� yapt�n�z\nL�tfen tekrar deneyiniz");
			 }
}

geri_gelme(){
 	printf("L�tfen bekleyiniz...\nBir geri geriliyor"); 
 	sleep(2);
 	system("cls");
}

basa_don(){
 	printf("L�tfen bekleyiniz...\nKonu ba��na d�n�l�yor :)");
 	sleep(2);
 	system("cls");
}

