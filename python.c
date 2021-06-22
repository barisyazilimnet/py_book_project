#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <process.h>
#include <locale.h>
#define HATA "          HATA!\nGeçersiz giriþ yaptýnýz :(\nLütfen bekleyiniz\nYeniden yükleniyor..."
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
		   	"[1] Python hakkýnda\n"
		   	"[2] Python nasýl kurulur ?\n"
		   	"[3] Python nasýl çalýþtýrýlýr ?\n"
		   	"[4] Etkileþimli python\n"
		   	"[q] Çýkýþ\n"
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

// 1.bölüm
python_hakkinda(){
	char giris1;
	baslangic();
	printf( LIGHT_CYAN"--------------------------------------------------\n"
		 	BLACK"Python hakkýnda\n"
		 	LIGHT_CYAN"--------------------------------------------------\n"
		 	BLACK
		 	"[1] Python nedir ?\n"
		 	"[2] Neden python ?\n"
		 	"[3] Platrom desteði\n"
		 	"[4] Python sürümleri\n"
		 	"[5] Hangi seriyi ögrenmeliyim ?\n"
		 	"[g] Geri gelmek için\n"
		 	"[q] Çýkýþ\n"
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
		 	BLACK"Tahmin edebilceginiz gibi Python {C, C++, Perl, Ruby ve benzerleri gibi} bir programlama dilidir ve týpký öteki programlama dilleri gibi, önünüzde duran kara kutuya, yani bilgisayara hükmetmenizi saglar.\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Bu programlama dili Guido Van Rossum adlý Hollandalý bir programcý tarafýndan 90’lý yýllarýn baþýnda geliþtirilmeye \nbaþlanmýþtýr.\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n");
	basa_don_geri_gel_cikis();
}

neden_python(){
	baslangic();
	printf("Neden python ?\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Python programlarýnýn en büyük özelliklerinden birisi, C ve C++ gibi dillerin aksine, derlenmeye gerek olmadan \nçalýþtýrýlabilmeleridir.\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n");
	basa_don_geri_gel_cikis();
}

platform_destek(){
	baslangic();
	printf("Platform desteði\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Python programlama dili pek çok farklý iþletim sistemi ve platform üzerinde çalýþabilir. GNU/Linux, Windows, \nMac OS X, AS/400, BeOS, MorphOS, MS-DOS, OS/2, OS/390, z/OS, RiscOS, S60, Solaris, VMS, Windows CE, HP-UX, iOS ve\n"
		 	"Android gibi, belki adýný dahi duymadýðýnýz pek çok ortamda Python uygulamalarý geliþtirebilirsiniz. Ayrýca herhangi \nbir ortamda yazdýðýnýz bir Python programý, üzerinde hiçbir deðiþiklik yapýlmadan veya ufak deðiþikliklerle baþka \nortamlarda "
		 	"da çalýþtýrýlabilir.\n"
 			LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n");
	basa_don_geri_gel_cikis();
}

python_surum(){
	baslangic();
	printf("Python sürümleri\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Eðer daha önce Python programlama dili ile ilgili araþtýrma yaptýysanýz, þu anda piyasada iki farklý Python \nserisinin olduðu dikkatinizi çekmiþ olmalý. 10.03.2020 tarihi itibariyle piyasada olan en yeni Python sürümleri\nPython "
		 	"2.7.17 ve Python 3.8.2‘dir.\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Eðer bir Python sürümü 2 sayýsý ile baþlýyorsa {mesela 2.7.17}, o sürüm Python 2.x serisine aittir. Yok eðer \nbir Python sürümü 3 sayýsý ile baþlýyorsa {mesela 3.8.2}, o sürüm Python 3.x serisine aittir.\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n");
	basa_don_geri_gel_cikis();
}

hangi_seri(){
	baslangic();
	printf("Hangi seriyi ögrenmeliyim ?\n" 
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Dediðimiz gibi, þu anda piyasada iki farklý Python serisi var: Python3 ve Python2. Peki acaba hangi seriye ait \nbir sürümü öðrenmelisiniz?\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Kýsa cevap \nPython3’ü öðrenmelisiniz.\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Uzun cevap \nEðer Python programlama diline yeni baþlýyorsanýz Python3’ü öðrenmeniz daha doðru olacaktýr. Ama eðer Python \nprogramlama dilini belirli bir proje üzerinde çalýþmak üzere öðreniyorsanýz, hangi sürümü öðrenmeniz "
		 	"gerektiði, \nprojede kullanacaðýnýz yardýmcý modüllerin durumuna baðlýdýr. Zira þu anda piyasada bulunan bütün Python \nmodülleri/programlarý henüz Python3’e aktarýlmýþ deðil.\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n");
	basa_don_geri_gel_cikis();
}

// 2.bölüm
python_kurulum(){
	char giris2;
	baslangic();
	printf( LIGHT_CYAN"--------------------------------------------------\n"
		 	BLACK"Python nasýl kurulur ?\n"
		 	LIGHT_CYAN"--------------------------------------------------\n"
		 	BLACK
		 	"[1] GNU/Linux kullanýcýlarý\n"
		 	"[2] Windows kullanýcýlarý\n"
		 	"[3] Python kurulum ve çalýþma dizini\n"
		 	"[g] Geri gelmek için\n"
		 	"[q] Çýkýþ\n"
		 	LIGHT_CYAN"--------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Python ile program yazabilmemiz için bu programlama dilinin bilgisayarýmýzda kurulu olmasý gerekiyor. Bu \nprogramlama dilini kurmanýzýn gerekip gerekmediði, kullandýðýnýz iþletim sistemine baðlýdýr. Biz burada hem\nGNU/Linux hem "
		 	"de Windows kullanýcýlarýnýn durumunu sýrasýyla ve ayrý ayrý inceleyeceðiz.\n"
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
		 	BLACK"GNU/Linux kullanýcýlarý\n"
		 	LIGHT_CYAN"------------------------------------\n"
		 	BLACK
		 	"[1] Kurulu python sürümü\n"
		 	"[2] Paket deposundan kurulum\n"
		 	"[3] Kaynaktan kurulum\n"
		 	"[k] Konu baþýna dönmek için\n"
		 	"[g] Geri gelmek için\n"
		 	"[q] Çýkýþ\n"
		 	LIGHT_CYAN"------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"GNU/Linux daðýtýmlarýna Python programlama dilini kurarken bazý noktalarý göz önünde bulundurmamýz gerekiyor. \nÝþte bu bölümde bu önemli noktalarýn neler olduðunu inceleyeceðiz.\n"
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
	printf("Kurulu python sürümü\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Hemen hemen bütün GNU/Linux daðýtýmlarýnda Python programlama dili kurulu olarak gelir. \nÖrneðin Ubuntu’da Python zaten kuruludur.\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Daha önce de belirttiðimiz gibi, þu anda piyasada iki farklý Python serisi bulunuyor. Bunlardan birinin \nPython’ýn 2.x serisi, ötekinin ise 3.x serisi olduðunu biliyorsunuz.\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Sisteminizde kurulu olan Python sürümünü denetlemek için komut satýrýnda öncelikle þu komutu vermeyi deneyin.\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"python -V {büyük V} ile\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Eðer bu komuttan Python 2.x.y þeklinde bir çýktý alýyorsanýz Python2 sürümü, Eðer bu komuttan Python 3.x.y \nþeklinde bir çýktý alýyorsanýz Python3 sürümü kuruludur\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Ancak python -V komutundan Python 2.x.y þeklinde bir çýktý almanýz sisteminizde sadece Python2’nin kurulu \nolduðunu göstermez. Sisteminizde Python2 ile birlikte Python3 de halihazýrda kurulu olabilir. Örneðin Ubuntu\nGNU/Linux’un "
		 	"12.10 sürümünden itibaren hem Python2, hem de Python3 sistemde kurulu vaziyettedir.\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Kullandýðýnýz GNU/Linux daðýtýmýnda durumun ne olduðunu denetlemek için yukarýdaki komutu bir de {python3 -V}\nþeklinde çalýþtýrmayý deneyebilirsiniz. Eðer bu komut size bir hata mesajý yerine bir sürüm numarasý veriyorsa\n"
		 	"sisteminizde Python3 de kuruludur.\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Sisteminizdeki Python sürümlerine iliþkin daha kesin bir rapor için ise þu komutu kullanabilirsiniz:\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"ls -g {,/usr{,/local}}/bin | grep python\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Ayrýca kullandýðýnýz GNU/Linux daðýtýmýnda aþagýdaki gibi bir komut vererek de sistemde kurulu Python sürümleri \nhakkýnda bilgi edinebilirsiniz.\n"
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
		 	BLACK"Sistemlerinde öntanýmlý olarak herhangi bir Python3 sürümü kurulu olmayan veya sistemlerinde kurulu öntanýmlý \nPython3 sürümünden memnun olmayan GNU/Linux kullanýcýlarýnýn, Python3’ü elde etmek için tercih edebileceði iki yol var.\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Benim size önereceðim yol, öncelikle kullandýðýnýz daðýtýmýn paket yöneticisini kontrol etmenizdir. Python3 \nsisteminizde kurulu olmasa bile, daðýtýmýnýzýn depolarýnda bu sürüm paketlenmiþ halde duruyor olabilir. O yüzden\n"
		 	"sisteminize uygun bir þekilde paket yöneticinizi açýp orada ‘python’ kelimesini kullanarak bir arama yapmanýzý \nöneririm. Örneðin Ubuntu GNU/Linux daðýtýmýnýn paket depolarýnda Python3 var. Dolayýsýyla Ubuntu kullanýcýlarý, \neðer sistemlerinde "
		 	"zaten kurulu deðilse {ki muhtemelen kuruludur}, bu paketi Ubuntu Yazýlým Merkezi aracýlýðýyla \nveya doðrudan þu komutla kurabilir.\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"sudo apt-get install python3\n"
		 	LIGHT_CYAN"-------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Bu komut, Python3’ü bütün baðýmlýlýklarý ile beraber bilgisayarýnýza kuracaktýr.\n"
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
		 	"[1] Root haklarý ile kurulum\n"
		 	"[2] Yetkisiz kullanýcý olarak kurulum\n"
		 	"[k] Konu baþýna dönmek için\n"
		 	"[g] Geri gelmek için\n"
		 	"[q] Çýkýþ\n"
		 	LIGHT_CYAN"--------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Eðer daðýtýmýnýzýn depolarýnda Python3 paketini bulamazsanýz veya depodaki sürüm sizi tatmin etmiyorsa, \nPython3’ü kaynaktan derlemeniz gerekecektir. Python3’ü kaynaktan derlerken iki seçeneðiniz var: Python3’ü root \nhaklarý ile "
		 	"kurmak veya Python3’ü yetkisiz kullanýcý olarak kurmak. Normal þartlar altýnda eðer kullandýðýnýz\nsistemde root haklarýna sahipseniz Python3’ü yetkili kullanýcý olarak kurmanýzý tavsiye ederim.\n"
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
	printf("Root haklarý ile kurulum\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Python’ý kurmadan önce sistemimizde bulunmasý gereken bazý programlar var. Aslýnda bu programlar olmadan da \nPython kurulabilir, ancak eðer bu programlarý kurmazsanýz Python’ýn bazý özelliklerinden yararlanamazsýnýz \nBu programlar "
		 	"þunlardýr:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"[1] tcl-dev	[2] tk-dev	[3] zlib1g-dev	[4] ncurses-dev	[5] libreadline-dev	[6] libdb-dev\n"
		 	"[7] libgdbm-dev	[8] libzip-dev	[9] libssl-dev	[10] libsqlite3-dev	[11] libbz2-dev	[12] liblzma-dev\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Bu programlarý, kullandýðýnýz GNU/Linux daðýtýmýnýn paket yöneticisi aracýlýðýyla kurabilirsiniz. Yalnýz paket\nadlarýnýn ve gerekli paket sayýsýnýn daðýtýmlar arasýnda farklýlýk gösterebileceðini unutmayýn. Yukarýdaki liste\nUbuntu "
		 	"için geçerlidir. Mesela yukarýda tcl-dev olarak verdiðimiz paket adý baþka bir daðýtýmda sadece tcl olarak\ngeçiyor ya da yukarýdaki paketlerin bazýlarý kullandýðýnýz daðýtýmda halihazýrda kurulu olduðu için sizin daha az\nbaðýmlýlýk kurmanýz "
		 	"gerekiyor olabilir.\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Ubuntu’da yukarýdaki paketlerin hepsini þu komutla kurabilirsiniz:\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"sudo apt-get install tcl-dev tk-dev\nzlib1g-dev ncurses-dev libreadline-dev\nlibdb-dev libgdbm-dev libzip-dev libssl-dev\nlibsqlite3-dev libbz2-dev liblzma-dev\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Yukarýdaki programlarý kurduktan sonra {https://www.python.org/ftp/python/3.5.1} adresine gidiyoruz. Bu adreste, \nüzerinde {Python-3.5.1.tar.xz} yazan baðlantýya týklayarak sýkýþtýrýlmýþ kurulum dosyasýný bilgisayarýmýza "
		 	"indiriyoruz.\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Daha sonra bu sýkýþtýrýlmýþ dosyayý açýyoruz. Açýlan klasörün içine girip, orada ilk olarak þu komutu veriyoruz:\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"./configure\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Bu komut, Python programlama dilinin sisteminize kurulabilmesi için gereken hazýrlýk aþamalarýný gerçekleþtirir.\nBu betiðin temel olarak yaptýðý iþ, sisteminizin Python programlama dilinin kurulmasýna uygun olup olmadýðýný,\n"
		 	"derleme iþlemi için gereken yazýlýmlarýn sisteminizde kurulu olup olmadýðýný denetlemektir. Bu betik ayrýca, bir \nsonraki adýmda gerçekleþtireceðimiz inþa iþleminin nasýl yürüyeceðini tarif eden {Makefile} adlý bir dosya da oluþturur.\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Bu arada bu komutun baþýndaki {./} iþareti, o anda içinde bulunduðunuz dizinde yer alan {configure} adlý bir \nbetiði çalýþtýrmanýzý saðlýyor. Eðer yalnýzca {configure} komutu verirseniz, iþletim sistemi bu betiði PATH \ndizinleri "
		 	"içinde arayacak ve bulamayacaðý için de hata verecektir.\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"{./configure} komutu hatasýz olarak tamamlandýktan sonra ikinci olarak þu komutu veriyoruz:\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"make\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Burada aslýnda {./configure} komutu ile oluþan {Makefile} adlý dosyayý make adlý bir program aracýlýðýyla \nçalýþtýrmýþ oluyoruz. {make} bir sistem komutudur. Bu komutu yukarýdaki gibi parametresiz olarak çalýþtýrdýðýmýzda \n{make} "
	 		"komutu, o anda içinde bulunduðumuz dizinde bir {Makefile} dosyasý arar ve eðer böyle bir dosya varsa onu \nçalýþtýrýr. Eðer bir önceki adýmda çalýþtýrdýðýmýz {./configure} komutu baþarýsýz olduysa, dizinde bir {Makefile} \ndosyasý oluþmayacaðý "
		 	"için yukarýdaki {make} komutu da çalýþmayacaktýr. O yüzden derleme iþlemi sýrasýnda verdiðimiz \nkomutlarýn çýktýlarýný takip edip, bir sonraki aþamaya geçmeden önce komutun düzgün sonlanýp sonlanmadýðýndan emin \nolmamýz gerekiyor.\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"{make} komutunun yaptýðý iþ, Python programlama dilinin sisteminize kurulmasý esnasýnda sistemin çeþitli yerlerine \nkopyalanacak olan dosyalarý inþa edip oluþturmaktýr. Bu komutun tamamlanmasý, kullandýðýnýz bilgisayarýn "
		 	"kapasitesine \nbaðlý olarak biraz uzun sürebilir.\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"{make} komutu tamamlandýktan sonra, komut çýktýsýnýn son satýrlarýna doðru þöyle bir uyarý mesajý görebilirsiniz:\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"Python build finished, but the necessary bits to build these modules were not found: [burada eksik olan modül veya \nmodüllerin adlarý sýralanýr]\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Burada Python, sistemimizde bazý paketlerin eksik olduðu konusunda bizi uyarýyor. Uyarý mesajýnda bir veya daha \nfazla paketin eksik olduðunu görebilirsiniz. Eðer öyleyse, eksik olduðu bildirilen bütün paketleri kurmamýz "
		 	"gerekiyor.\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Gerekli paketi ya da paketleri kurduktan sonra {make} komutunu tekrar çalýþtýrýyoruz. Endiþe etmeyin, {make} \nkomutunu ikinci kez verdiðimizde komutun tamamlanmasý birincisi kadar uzun sürmez. Eðer bu komutu ikinci kez\n"
			"çalýþtýrdýðýnýzda yukarýdaki uyarý mesajý kaybolduysa þu komutla yolunuza devam edebilirsiniz:\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"sudo make altinstall\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Daha önce kaynaktan program derlemiþ olan GNU/Linux kullanýcýlarýnýn eli, {make} komutundan sonra {make install} \nkomutunu vermeye gitmiþ olabilir. Ama burada bizim {make install} yerine {make altinstall} komutunu kullandýðýmýza\n"
		 	"dikkat edin. {make altinstall} komutu, Python kurulurken klasör ve dosyalara sürüm numarasýnýn da eklenmesini saðlar. \nBöylece yeni kurduðunuz Python, sistemdeki eski Python3 sürümünü silip üzerine yazmamýþ olur ve iki farklý sürüm \nyan yana "
		 	"varolabilir. Eðer {make altinstall} yerine {make install} komutunu verirseniz sisteminizde zaten varolan \neski bir Python3 sürümüne ait dosya ve dizinlerin üzerine yazýp silerek o sürümü kullanýlamaz hale getirebilirsiniz. \nBu da sistemde "
		 	"beklenmedik problemlerin ortaya çýkmasýna yol açabilir. Bu önemli ayrýntýyý kesinlikle gözden \nkaçýrmamalýsýnýz.\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n");
	basa_don_geri_gel_cikis();
}

yetkisiz_kullanici(){
	baslangic();
	printf("Yetkisiz kullanýcý olarak kurulum\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Eðer Python’ý yetkisiz kullanýcý olarak kuracaksanýz, öncelikle root haklarý ile kurulum konusu altýnda \nbahsettiðimiz Python baðýmlýlýklarýnýn sisteminizde kurulu olup olmadýðýný kontrol etmeniz lazým. Kullandýðýnýz \nsistemde "
		 	"herhangi bir Python sürümü halihazýrda kuruluysa, bu baðýmlýlýklar da muhtemelen zaten kuruludur. Ama \ndeðilse, bunlarý kurmasý için ya sistem yöneticisine ricada bulunacaksýnýz, ya da bu baðýmlýlýklarý da tek tek \nkendi ev dizininize "
		 	"kuracaksýnýz. Eðer sistem yöneticisini bu baðýmlýlýklarý kurmaya ikna edemezseniz, internet \nüzerinden bulabileceðiniz bilgiler yardýmýyla bu baðýmlýlýklarý tek tek elle kendiniz kurabilirsiniz. Ancak bu \niþlemin epey zaman alacaðýný ve süreç "
		 	"sýrasýnda pek çok baþka baðýmlýlýkla da karþýlacaðýnýzý söyleyebilirim. \nO yüzden ne yapýp edip sistem yöneticisini baðýmlýlýklarý kurmaya ikna etmenizi tavsiye ederim... Tabii sistem \nyöneticisini bu baðýmlýlýklarý kurmaya ikna edebilirseniz, "
		 	"istediðiniz Python sürümünü de kurmaya ikna \nedebileceðinizi düþünebiliriz! Ama biz burada sizin Python’ý kendinizin kuracaðýný varsayarak yolumuza devam edelim.\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Python’ý yetkisiz olarak kurmak, root haklarýyla kurmaya çok benzer. Aralarýnda yalnýzca bir-iki ufak fark vardýr. \nMesela Python’ý yetkisiz kullanýcý olarak kurarken, {./configure} komutunu þu þekilde vermeniz gerekiyor:\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"./configure --prefix=$HOME/python\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Python’ý root haklarýyla kurduðunuzda Python {/usr} dizini altýna kurulacaktýr. Ancak siz yetkisiz kullanýcý \nolduðunuz için {/usr} dizinine herhangi bir þey kuramazsýnýz. Ýþte bu yüzden, configure betiðine verdiðimiz \n{–prefix} "
		 	"parametresi yardýmýyla Python’ý, yazma yetkimiz olan bir dizine kuruyoruz. Mesela yukarýdaki komut \nPython’ýn {/usr} dizinine deðil, ev dizininiz içinde python adlý bir klasöre kurulmasýný saðlayacaktýr. Elbette \nsiz python yerine farklý bir "
		 	"dizin adý da belirleyebilirsiniz. Burada önemli olan nokta, {–prefix} parametresine \nvereceðiniz dizin adýnýn, sizin yazmaya yetkili olduðunuz bir dizin olmasýdýr.\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Bu komutu çalýþtýrdýktan sonra {make} komutunu normal bir þekilde veriyoruz. Bunun ardýndan da \n{make install (veya duruma göre make altinstall)} komutuyla Python’ý ev dizinimize kuruyoruz. Burada {make install} \nkomutunu "
		 	"{sudo}‘suz kullandýðýmýza dikkat edin. Çünkü, dediðimiz gibi, siz yetkili kullanýcý olmadýðýnýz için {sudo} \nkomutunu kullanamazsýnýz.\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Python’ý bu þekilde ev dizininiz altýnda bir klasöre kurduðunuzda Python ile ilgili bütün dosyalarýn bu klasör içinde yer aldýðýný göreceksiniz. Bu klasörü dikkatlice inceleyip neyin nerede olduðuna aþinalýk kazanmaya çalýþýn. Eðer "
		 	"mümkünse root haklarý ile kurulmuþ bir Python sürümünü inceleyerek, dosyalarýn iki farklý kurulum türünde nerelere kopyalandýðýný karþýlaþtýrýn.\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n");
	basa_don_geri_gel_cikis();	
}

windows_kullanici(){
	baslangic();
	printf("Windows kullanýcýlarý\n"
	 	 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
	 	  	WHITE">>>"
	 	  	BLACK"Bunun için öncelikle {http://www.python.org/downloads} adresine gidiyoruz.\n"
	 	  	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
	 	  	WHITE">>>"
	 	  	BLACK"Bu adrese gittiðinizde, üzerinde {Download Python 3.5.1} ve {Download 2.7.11} yazan, yan yana iki düðme \ngöreceksiniz. Daha önce de söylediðimiz gibi, eðer bir Python sürüm numarasý '2' ile baþlýyorsa o sürüm 2.x serisine, \nyok "
		 	"eðer '3' ile baþlýyorsa 3.x serisine aittir. Dolayýsýyla ilk düðme Python3 sürümünü, ikinci düðme ise Python2 \nsürümünü içerir.\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Biz bu kitapta Python’ýn 3.x serisini anlatacaðýmýz için (yeni Python sürümleri çýktýðýnda o düðmeler üzerinde \nyazan sürüm numaralarý deðiþecek de olsa), ‘3’ ile baþlayan sürüm numarasýný içeren düðmeye týklamaya özen\n"
		 	"gösteriyoruz. Bu düðmeye týkladýðýnýzda bilgisayarýnýza .exe uzantýlý kurulum dosyasý inecek. Bu dosyaya çift \ntýklayarak kurulum programýný baþlatabilirsiniz.\n"
			LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Kurulum dosyasýna çift týkladýðýnýzda karþýnýza ilk gelen ekranda, pencerenin alt tarafýnda þu kutucuklarý \ngöreceksiniz:\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"[1] Install launcher for all users (recommended) \n[2] Add Python 3.5 to PATH\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Burada ilk kutucuk zaten seçilidir. Bunu bu þekilde býrakabilirsiniz. Ýkinci kutucuk ise Python’ý yola \neklememizi, böylece yalnýzca {python} komutu vererek Python’ý baþlatabilmemizi saðlayacak. O yüzden oradaki ikinci kutucuðu\n"
		 	"da iþaretliyoruz.\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Ayný pencerenin üst tarafýnda ise þu seçenekleri göreceksiniz:\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"[1] Install Now \n[2] Customize Installation\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n" 	
		 	WHITE">>>"
		 	BLACK"Burada {Install Now} yazan kýsma týklayarak kurulumu baþlatýyoruz.\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n" 	
		 	WHITE">>>"
		 	BLACK"Eðer Python’ýn bilgisayarda nereye kurulacaðýný ve baþka birtakým kurulum özelliklerini deðiþtirmek istiyorsanýz \n{Customize Installation} yazýlý kýsma týklayabilirsiniz. Ben sizin {Install Now} yazan kýsma týklayarak kurulum\n"
		 	"yaptýðýnýzý varsayacaðým.\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n" 	
		 	WHITE"	NOT!		NOT!		NOT!		NOT!		NOT!		NOT!\n>>>"
		 	BLACK"Python’ýn resmi sitesinde dolaþýrken kurulum dosyalarý arasýnda, {web-based installer} (web tabanlý kurulum betiði) \nadlý bir kurulum dosyasý görebilirsiniz. Bu kurulum dosyasý, Python’ýn çalýþmasý için gereken dosyalarý kurulum\n"
		 	"esnasýnda internetten indirip kuran, 1MB’dan küçük bir kurulum programý içerir. Dolayýsýyla eðer kurulumu bu dosyadan \nyapacaksanýz, kesintisiz bir internet baðlantýsýna ihtiyacýnýz olacak.\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE"	UYARI!		UYARI!		UYARI!		UYARI!		UYARI!		UYARI!\n>>>"
		 	BLACK"Eðer Windows’ta Python’ý kurmaya çalýþýrken hata alýyorsanýz, muhtemelen iþletim sisteminiz güncel deðildir. \nÖrneðin Windows 7’de Python kurabilmeniz için, SP1 (Service Pack 1) kurulu olmalýdýr. Windows güncellemelerini\n"
		 	"kurduktan sonra Python’ý kurmayý tekrar deneyin.\n"
		 	LIGHT_CYAN"----------------------------------------------------------------------------------------------------------------\n");
	basa_don_geri_gel_cikis();
}

calisma_dizini(){
	baslangic();
	printf("Python kurulum ve çalýþma dizini\n"
		 	LIGHT_CYAN"-----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Python programlama dilini, kullandýðýmýz iþletim sistemine nasýl kurabileceðimizi bilmek kadar önemli bir konu da \nPython’ý hangi dizine kurduðumuzu bilmektir. Zira programcýlýk maceramýz boyunca karþýlaþacaðýmýz bazý sorunlar,\n"
		 	"Python’ýn kurulu olduðu dizine gitmemizi gerektirecek, üstelik kendi yazdýðýmýz bazý programlarda da Python’ýn kurulu \nolduðu dizinde çeþitli iþlemler yapmak ihtiyacý duyacaðýz. Ayrýca bazý durumlarda, o anda çalýþan Python sürümünün \nhangi "
		 	"konumdan çalýþtýðýný tespit etmemiz de gerekebilir.\n"
		 	LIGHT_CYAN"-----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Ýþte bu sebeplerden, Python’ýn hangi dizine kurulduðunu mutlaka biliyor olmamýz lazým.\n"
		 	LIGHT_CYAN"-----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Python’ýn, iþletim sisteminizde hangi dizine kurulduðu, Python’ý nasýl kurduðunuza baðlý olarak farklýlýk gösterir.\n"
		 	LIGHT_CYAN"-----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
 	 		BLACK"GNU/Linux daðýtýmlarýnda Python genellikle {/usr/lib/python 3.5} dizininde kurulur. Ama elbette, eðer siz Python’ý \nkaynaktan derlediyseniz, derleme sýrasýnda {configure} betiðine verdiðiniz {–prefix} parametresi yardýmýyla Python’ýn\n"
		 	"kurulum dizinini kendiniz de belirlemiþ olabilirsiniz.\n"
		 	LIGHT_CYAN"-----------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
	 		BLACK"Windows’ta Python programlama dilini aynen bu kitapta gösterdiðimiz þekilde kurduysanýz, Python \n{%LOCALAPPDATA%\\Programs\\Python} dizini içine kurulacaktýr. Ancak eðer kurulum penceresinde {Customize Installation} düðmesine \nbasarak "
		 	"kurulumu özelleþtirdiyseniz ve {Install for all users} seçeneðini iþaretlediyseniz Python {%PROGRAMFILES%} veya \n{%PROGRAMFILES(x86)} adlý çevre deðiþkenlerinin iþaret ettiði dizin içine kurulacaktýr.\n"
		 	LIGHT_CYAN"-----------------------------------------------------------------------------------------------------------------\n");
	basa_don_geri_gel_cikis();
}

//3.bölüm
python_calistirma(){
	char giris5;
	baslangic();
	printf(LIGHT_CYAN"------------------------------\n"
		 	BLACK"Python nasýl çalýþtýrýlýr ?\n"
	 		LIGHT_CYAN"-----------------------------\n"
	 		BLACK
	 		"[1] GNU/Linux kullanýcýlarý\n"
	 		"[2] Windows kullanýcýlarý\n"
	 		"[g] Geri gelmek için\n"
	 		"[q] Çýkýþ\n"
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
		 	BLACK"GNU/Linux kullanýcýlarý\n"
		 	LIGHT_CYAN"----------------------------\n"
		 	BLACK
		 	"[1] Kurulu python3'ü kullananlar\n"
		 	"[2] Python3'ü depodan kuranlar\n"
		 	"[3] Python3'ü root olarak derleyenler\n"
		 	"[4] Python3'ü ev dizinine kuranlar\n"
		 	"[5] GNU/Linux'ta farklý sürümleri birlikte kullanmak\n"
		 	"[k] Konu baþýna dönmek için\n"
		 	"[g] Geri gelmek için\n"
		 	"[q] Çýkýþ\n"
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
	printf("Kurulu python3'ü kullananlar\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Eðer sisteminizde zaten Python3 kurulu ise komut satýrýnda yalnýzca þu komutu vererek Python3’ü baþlatabilirsiniz:\n"     
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"python\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Ancak daha önce de dediðimiz gibi, 20.04.2016 tarihi itibariyle pek çok GNU/Linux daðýtýmýnda öntanýmlý olarak Python2 \nkuruludur. Dolayýsýyla {python} komutunu verdiðinizde çalýþan sürüm muhtemelen Python2 olacaktýr. Bu yüzden sistemimizde\n"
		 	"öntanýmlý olarak hangi sürümün kurulu olduðuna ve {python} komutunun hangi sürümü baþlattýðýna çok dikkat etmelisiniz.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Yine daha önce de söylediðimiz gibi, sisteminizde hem Python2 hem de Python3 zaten kurulu durumda olabilir. O yüzden \nyukarýdaki komutu bir de {python3} þeklinde vermeyi deneyebilirsiniz.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n");
	basa_don_geri_gel_cikis();
			
}

python_depodan_kuranlar(){
	baslangic();
	printf("Python3'ü depodan kuranlar\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Dediðimiz gibi, 20.04.2016 tarihi itibariyle GNU/Linux daðýtýmlarýnda öntanýmlý Python sürümü aðýrlýklý olarak \nPython2’dir. Dolayýsýyla {python} komutu Python’ýn 2.x sürümlerini çalýþtýrýr. Bu durumdan ötürü, herhangi bir çakýþmayý\n"
		 	"önlemek için GNU/Linux daðýtýmlarý Python3 paketini farklý bir þekilde adlandýrma yoluna gider. Þu anda piyasada bulunan \ndaðýtýmlarýn ezici çoðunluðu Python3 paketini ‘python3’ þeklinde adlandýrýyor. O yüzden GNU/Linux kullanýcýlarý, eðer paket\n"
		 	"yöneticilerini kullanarak Python kurulumu gerçekleþtirmiþ iseler, komut satýrýnda þu komutu vererek Python3’ü \nbaþlatabilirler:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"python3\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Bu komutun ardýndan þuna benzer bir ekranla karþýlaþmýþ olmalýsýnýz:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"istihza@ubuntu:~$ # python3 Python 3.5.1 (default, 20.04.2016, 12:24:55) [GCC 4.4.720120313 (Red Hat 4.4.7-3)] on linux \nType “help”, “copyright”, “credits” or “license” for more information.\n>>>\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Eðer yukarýdaki ekraný gördüyseniz Python’la programlama yapmaya hazýrsýnýz demektir. Deðilse, geriye dönüp iþlerin \nnerede ters gittiðini bulmaya çalýþabilirsiniz.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Bu aþamada iþlerin nerede ters gitmiþ olabileceðine dair birkaç ipucu verelim:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"[1] Python3 kurulurken paket yöneticinizin herhangi bir hata vermediðinden, programýn sisteminize baþarýyla kurulduðundan \nemin olun. Bunun için Python3’ün kurulu paketler listesinde görünüp görünmediðini denetleyebilirsiniz.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"[2] {python3} komutunu doðru verdiðinize emin olun. Python programlama diline özellikle yeni baþlayanlarýn en sýk yaptýðý \nhatalardan biri python kelimesini yanlýþ yazmaktýr. Python yerine yanlýþlýkla pyhton, pyton veya phyton yazmýþ\n"
		 	"olabilirsiniz. Ayrýca {python3} komutunun tamamen küçük harflerden  oluþtuðuna dikkat edin. Python ve python bilgisayar \naçýsýndan ayný þeyler deðildir.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"[3] Kullandýðýnýz daðýtýmýn Python3 paketini adlandýrma politikasý yukarýda anlattýðýmýzdan farklý olabilir. Yani sizin \nkullandýðýnýz daðýtým, belki de Python3 paketini farklý bir þekilde adlandýrmýþtýr. Eðer durum böyleyse, daðýtýmýnýzýn\n"
		 	"yardým kaynaklarýný (wiki, forum, irc, yardým belgeleri, kullanýcý listeleri, vb.) kullanarak Python3’ün nasýl \nçalýþtýrýlacaðýný öðrenmeyi deneyebilirsiniz.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n");
	basa_don_geri_gel_cikis();
}

python_root_olarak_derleyen(){
	baslangic();
	printf("Python3'ü root olarak derleyenler\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Eðer Python3’ü önceki bölümlerde anlattýðýmýz þekilde kaynaktan root haklarý ile derlediyseniz {python3} komutu \nçalýþmayacaktýr. Bunun yerine þu komutu kullanmanýz gerekecek:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"python3.5\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE"	NOT!		NOT!		NOT!		NOT!		NOT!		NOT!\n>>>"
		 	BLACK"Kurduðunuz Python3 sürümünün 3.5 olduðunu varsayýyorum. Eðer farklý bir Python3 sürümü kurduysanýz, elbette baþlatýcý \nkomut olarak o sürümün adýný kullanmanýz gerekecektir. Mesela: python3.0 veya python3.1. Bu arada python3.5 komutunda 35\n"
		 	"sayýsýnýn rakamlarý arasýnda bir adet nokta iþareti olduðunu gözden kaçýrmýyoruz...\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Týpký paket deposundan kurulumda olduðu gibi, eðer yukarýdaki komut Python’ý çalýþtýrmanýzý saðlamýyorsa, kurulum \nesnasýnda bazý þeyler ters gitmiþ olabilir. Örneðin kaynaktan kurulumun herhangi bir aþamasýnda bir hata almýþ \nolabilirsiniz "
		 	"ve bu da Python’ýn kurulumunu engellemiþ olabilir.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Gördüðünüz gibi, Python’ý kaynaktan derleyenler Python programlama dilini çalýþtýrabilmek için Python’ýn tam sürüm \nadýný belirtiyor. Dilerseniz bu þekilde çalýþmaya devam edebilirsiniz. Bunun hiçbir sakýncasý yok. Ancak ben size kolaylýk\n"
		 	"açýsýndan, {/usr/bin/} dizini altýna {py3} adýnda bir sembolik bað yerleþtirmenizi tavsiye ederim. Böylece sadece {py3} \nkomutunu vererek Python3’ü baþlatabilirsiniz.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Peki bunu nasýl yapacaðýz?\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Python kaynaktan derlendiðinde çalýþtýrýlabilir dosya {/usr/local/bin/} dizini içine Python 3.5 (veya kurduðunuz Python3 \nsürümüne baðlý olarak Python3.0 ya da Python3.1 ) adýyla kopyalanýr. Bu nedenle Python3’ü çalýþtýrabilmek için "
		 	"python3.5 \nkomutunu kullanmamýz gerekir. Python3’ü çalýþtýrabilmek için mesela sadece py3 gibi bir komut kullanmak istiyorsak \nyapacaðýmýz tek þey {/usr/local/bin/} dizini içindeki python 3.5 adlý dosyaya {/usr/bin} dizini altýndan, py3 adlý "
		 	"bir \nsembolik bað oluþturmak olacaktýr. Bunun için {ln} komutunu kullanacaðýz:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"ln -s /usr/local/bin/python3.5 /usr/bin/py3\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Tabii bu komutu yetkili kullanýcý olarak vermeniz gerektiðini söylememe herhalde gerek yoktur. Bu komutu verdikten \nsonra artýk sadece {py3} komutu ile Python programlama dilini baþlatabilirsiniz.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE"	UYARI!		UYARI!		UYARI!		UYARI!		UYARI!		UYARI!\n>>>"
		 	BLACK"Bir önceki adýmda anlattýðýmýz gibi Python3’ü resmi sitesinden indirip kendiniz derlediniz. Gayet güzel. Ancak bu \nnoktada çok önemli bir konuya dikkatinizi çekmek isterim. En baþtan beri söylediðimiz gibi, Python programlama dili\n"
		 	"GNU/Linux iþletim sistemlerinde çok önemli bir yere sahiptir. Öyle ki bu programlama dili, kullandýðýnýz daðýtýmýn \nbelkemiði ndurumunda olabilir.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Örneðin Ubuntu GNU/Linux daðýtýmýnda pek çok sistem aracý Python ile yazýlmýþtýr. Bu yüzden, sistemdeki öntanýmlý \nPython sürümünün ne olduðu ve dolayýsýyla {python} komutunun hangi Python sürümünü çalýþtýrdýðý çok önemlidir. Çünkü\n"
		 	"sisteminizdeki hayati bazý araçlar, {python} komutunun çalýþtýrdýðý Python sürümüne bel baðlamýþ durumdadýr. Dolayýsýyla \nsizin bu {python} komutunun çalýþtýrdýðý Python sürümüne dokunmamanýz gerekir.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Mesela eðer kullandýðýnýz iþletim sisteminde {python} komutu Python’ýn 2.x sürümlerinden birini çalýþtýrýyorsa sembolik \nbaðlar veya baþka araçlar vasýtasýyla {python} komutunu Python’ýn baþka bir sürümüne baðlamayýn. Bu þekilde bütün "
		 	"sistemi \nkullanýlmaz hale getirirsiniz. Elbette eðer kurulum aþamasýnda tarif ettiðimiz gibi, Python3’ü make install yerine \n{make altinstall} komutu ile kurmaya özen gösterdiyseniz, sonradan oluþturduðunuz bað dosyasýný silip {python} komutunu "
		 	"yine \nsistemdeki öntanýmlý sürüme baðlayabilirsiniz. Bu þekilde her þey yine eski haline döner. Ama eðer Python’ý {make install} \nkomutuyla kurmanýzdan ötürü sistemdeki öntanýmlý Python sürümüne ait dosyalarý kaybettiyseniz sizin için yapýlacak "
		 	"fazla bir \nþey yok... Sistemi tekrar eski kararlý haline getirmek için kan, ter ve gözyaþý dökeceksiniz...\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Ayný þekilde, kullandýðýnýz daðýtýmda {python3} komutunun öntanýmlý olarak belirli bir Python sürümünü baþlatýp \nbaþlatmadýðý da önemlidir. Yukarýda {python} komutu ile ilgili söylediklerimiz python3 ve buna benzer baþka komutlar için \nde "
		 	"aynen geçerli.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Örneðin, Ubuntu GNU/Linux daðýtýmýnda {python} komutu sistemde kurulu olan Python 2.x sürümünü; {python3} komutu ise \nsistemde kurulu olan Python 3.x sürümünü çalýþtýrdýðýndan, biz kendi kurduðumuz Python sürümleri için, sistemdeki\n"
		 	"sürümlerle çakýþmayacak isimler seçtik. Mesela kendi kurduðumuz Python3 sürümünü çalýþtýrmak için py3 gibi bir komut tercih \nettik.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Ýyi bir test olarak, Python programlama dilini kendiniz kaynaktan derlemeden önce þu komutun çýktýsýný iyice \ninceleyebilirsiniz:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"ls -g {,/usr{,/local}}/bin | grep python\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Bu komut iki farklý Python sürümünün kurulu olduðu sistemlerde þuna benzer bir çýktý verir (çýktý kýrpýlmýþtýr):\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"dh_python2 \ndh_python3 \npdb2.7 -> ../lib/python2.7/pdb.py \npdb3.2 -> ../lib/python3.2/pdb.py \npy3versions -> ../share/python3/py3versions.py \npython -> python2.7 \npython2 -> python2.7 \npython2.7 \npython3 -> python3.2 \n"
		 	"python3.2 -> python3.2mu \npython3.2mu \npython3mu -> python3.2mu \npyversions -> ../share/python/pyversions.py\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Yatýk harflerle gösterdiðimiz kýsýmlara dikkat edin. Gördüðünüz gibi {python ve python2} komutlarý bu sistemde \nPython’ýn 2.7 sürümünü çalýþtýrýyor. {python3} komutu ise Python’ýn 3.2 sürümünü... Dolayýsýyla yukarýdaki çýktýyý \naldýðýmýz "
		 	"bir sistemde kendi kurduðumuz Python sürümlerine 'python', 'python2' veya 'python3' gibi isimler vermekten \nkaçýnmalýyýz.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Sözün özü, bir GNU/Linux kullanýcýsý olarak sistemdeki öntanýmlý hiçbir Python sürümünü silmemeli, öntanýmlý sürüme \nulaþan komutlarý deðiþtirmemelisiniz. Eðer mesela sisteminizde {python3} komutu halihazýrda bir Python sürümünü\n"
		 	"çalýþtýrýyorsa, siz yeni kurduðunuz Python sürümüne ulaþmak için öntanýmlý adla çakýþmayacak baþka bir komut adý kullanýn. \nYani örneðin sisteminizde {python3} komutu Python’ýn 3.2 sürümünü çalýþtýrýyorsa, siz yeni kurduðunuz sürümü çalýþtýrmak\n"
		 	"için py3 gibi bir sembolik bað oluþturun. Býrakýn öntanýmlý komut (python, python3 vb.) öntanýmlý Python sürümünü \nçalýþtýrmaya devam etsin.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Asla unutmayýn. Siz bir programcý adayý olarak, program yazacaðýnýz iþletim sistemini enine boyuna tanýmakla \nyükümlüsünüz. Dolayýsýyla iþletim sisteminizi kararsýz hale getirecek davranýþlarý bilmeli, bu davranýþlardan kaçýnmalý, \nyanlýþ "
		 	"bir iþlem yaptýðýnýzda da nasýl geri döneceðinizi bilmelisiniz. Hele ki bir programý kaynaktan derlemeye karar \nvermiþseniz...\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Bu ciddi uyarýyý da yaptýðýmýza göre gönül rahatlýðýyla yolumuza devam edebiliriz. :)\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n");
	basa_don_geri_gel_cikis();
}

python_ev_dizinine_kuranlar(){
	baslangic();
	printf("Python3'ü ev dizinine kuranlar\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Eðer Python3’ü kýsýtlý kullanýcý haklarý ile derleyip ev dizininize kurduysanýz yukarýdaki komutlar Python’ý \nçalýþtýrmanýzý saðlamayacaktýr. Python3’ü ev dizinine kurmuþ olan kullanýcýlar Python3’ü çalýþtýrabilmek için, öncelikle \nkomut "
		 	"satýrý aracýlýðýyla Python3’ü kurduklarý dizine, oradan da o dizin altýndaki {bin/} klasörüne ulaþacak ve orada þu \nkomutu verecek:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"./python3.5\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Diyelim ki Python3’ü {$HOME/python} adlý dizine kurdunuz. Önce þu komutla {$HOME/python/bin} adlý dizine ulaþýyoruz:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"cd $HOME/python/bin\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Ardýndan da þu komutu veriyoruz:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"./python3.5\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE"	NOT!		NOT!		NOT!		NOT!		NOT!		NOT!\n>>>"
		 	BLACK"Elbette ben burada kurduðunuz Python sürümünün 3.5 olduðunu varsaydým. Eðer farklý bir sürüm kurduysanýz yukarýdaki \nkomutu ona göre yazmanýz gerekiyor.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Eðer isterseniz bu þekilde çalýþmaya devam edebilirsiniz. Ancak her defasýnda Python’ýn kurulu olduðu dizin altýna \ngelip orada {./python3.5} komutunu çalýþtýrmak bir süre sonra eziyete dönüþecektir. Ýþlerinizi kolaylaþtýrmak için þu\n"
		 	"iþlemleri takip etmelisiniz:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"[1] ev dizininizin altýnda bulunan {.profile (veya kullandýðýnýz daðýtýma göre .bash_profile ya da .bashrc )} adlý dosyayý \naçýn.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"[2] Bu dosyanýn en sonuna þuna benzer bir satýr yerleþtirerek Python’ý çalýþtýrmamýzý saðlayan dosyanýn bulunduðu dizini \nyola ekleyin:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"export PATH=$PATH:$HOME/python/bin/\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"[3] {$HOME/python/bin/} satýrý Python3’ün çalýþtýrýlabilir dosyasýnýn hangi dizin altýnda olduðunu gösteriyor. Ben burada \nPython3’ün çalýþtýrýlabilir dosyasýnýn {$HOME/python/bin} dizini içinde olduðunu varsaydým. O yüzden de "
		 	"{$HOME/python/bin/} \ngibi bir satýr yazdým. Ama eðer Python3’ün çalýþtýrýlabilir dosyasý sizde farklý bir dizindeyse bu satýrý ona göre \nyazmalýsýnýz.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"[4] Kendi sisteminize uygun satýrý dosyaya ekledikten sonra dosyayý kaydedip çýkýn. Dosyada yaptýðýmýz deðiþikliðin etkin \nhale gelebilmesi için þu komutu verin:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"source .profile\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"Elbette eðer sizin sisteminizdeki dosyanýn adý {.bash_profile} veya {.bashrc} ise yukarýdaki komutu ona göre \ndeðiþtirmelisiniz.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"[5]  Daha sonra {$HOME/python/bin/python 3.5} adlý dosyaya {$HOME/python/bin/} dizini altýndan mesela py3 gibi bir sembolik \nbað verin:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"ln -s $HOME/python/bin/python3.5 $HOME/python/bin/py3\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"[6] Bilgisayarýnýzý yeniden baþlatýn.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"[7] Artýk hangi konumda bulunursanýz bulunun, þu komutu vererek Python3’ü baþlatabilirsiniz:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"py3\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n");
	basa_don_geri_gel_cikis();
}

linux_farkli_surumler_birlikte(){
	baslangic();
	printf("GNU/Linux'ta farklý sürümleri birlikte kullanmak\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Daha önce de dediðimiz gibi, þu anda piyasada iki farklý Python serisi bulunuyor: Python2 ve Python3. Çok uzun zamandan \nberi kullanýmda olduðu için, Python2 Python3’e kýyasla daha yaygýn. Eðer hem Python2 ile yazýlmýþ programlarý "
		 	"çalýþtýrmak, \nhem de Python3 ile geliþtirme yapmak istiyorsanýz, sisteminizde hem Python2’yi hem de Python3’ü ayný anda bulundurmayý \ntercih edebilirsiniz. Peki bunu nasýl yapacaksýnýz?\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"En baþta da söylediðimiz gibi, hemen hemen bütün GNU/Linux daðýtýmlarýnda Python2 kurulu olarak gelir. Dolayýsýyla eðer \nsisteminize ek olarak Python3’ü de kurduysanýz (kaynaktan veya paket deposundan), baþka herhangi bir þey yapmanýza "
			"gerek\n yok. Konularda anlattýðýmýz yönergeleri takip ettiyseniz, konsolda {python} komutu verdiðinizde Python2 çalýþacak, \n{python3 (veya py3)} komutunu verdiðinizde ise Python3 çalýþacaktýr.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Ama eðer sisteminizde Python2 bile kurulu deðils e, ki bu çok çok düþük bir ihtimaldir, Python2’yi paket yöneticiniz \nyardýmýyla sisteminize kurabilirsiniz. Þu anda piyasada olup da paket deposunda Python bulundurmayan GNU/Linux daðýtýmý\n"
		 	"pek azdýr.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n");
	basa_don_geri_gel_cikis();
}

windows_kullanici_2(){
	char giris7;
	baslangic();
	printf(LIGHT_CYAN"-----------------------------\n"
		 	BLACK"Windows kullanýcýlarý\n"
		 	LIGHT_CYAN"----------------------------\n"
		 	BLACK
		 	"[1] Winodws'ta farklý sürümleri birlikte kullanmak\n"
		 	"[k] Konu baþýna dönmek için\n"
		 	"[g] Geri gelmek için\n"
		 	"[q] Çýkýþ\n"
		 	LIGHT_CYAN"----------------------------\n"
		 	WHITE">>>"
		 	BLACK"Windows kullanýcýlarý Python3’ü iki þekilde baþlatabilir:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
			BLUE"[1] Baþlat > Tüm Programlar > Python 3.5 > Python (Command Line) yolunu takip ederek\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
			BLUE"[2] Komut satýrýnda {python} komutunu vererek.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Eðer birinci yolu tercih ederseniz, Python’ýn size sunduðu komut satýrýna doðrudan ulaþmýþ olursunuz. Ancak Python \nkomut satýrýna bu þekilde ulaþtýðýnýzda bazý kýsýtlamalarla karþý karþýya kalýrsýnýz. Doðrudan Python’ýn komut satýrýna\n"
			"ulaþmak yerine önce MS-DOS komut satýrýna ulaþýp, oradan Python komut satýrýna ulaþmak özellikle ileride yapacaðýnýz \nçalýþmalar açýsýndan çok daha mantýklý olacaktýr. O yüzden komut satýrýna bu þekilde ulaþmak yerine ikinci seçeneði tercih\n"
			"etmenizi tavsiye ederim. Bunun için konularda bölümlerde gösterdiðimiz þekilde komut satýrýna ulaþýn ve orada þu komutu \nçalýþtýrýn:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"python\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
			WHITE">>>"
		 	BLACK"Bu komutu verdiðinizde þuna benzer bir ekranla karþýlaþacaksýnýz:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"C:\\Users\\istihza> python3 Python 3.5.1 (v3.5.1:c0e311e010fc, 20.04.2016, 12:24:55) [MSCv.1600 32 bit (Intel)] on win32 \nType “help”, “copyright”, “credits” or “license” for more information.\n>>>\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Eðer bu komut yukarýdakine benzer bir ekran yerine bir hata mesajý verdiyse kurulum sýrasýnda bazý adýmlarý eksik veya \nyanlýþ yapmýþ olabilirsiniz. Yukarýdaki komut çalýþmýyorsa, muhtemelen kurulum sýrasýnda Add python 3.5 to path "
			"kutucuðunu \niþaretlemeyi unutmuþsunuzdur. Eðer öyleyse, kurulum dosyasýný tekrar çalýþtýrýp, ilgili adýmý gerçekleþtirmeniz veya \nPython’ý kendiniz YOL’a eklemeniz gerekiyor.\n"
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
	printf("Windows'ta farklý sürümleri birlikte kullanmak\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Daha önce de dediðimiz gibi, þu anda piyasada iki farklý Python serisi bulunuyor: Python2 ve Python3. Çok uzun zamandan \nberi kullanýmda olduðu için, Python2 Python3’e kýyasla daha yaygýn. Eðer hem Python2 ile yazýlmýþ programlarý "
			"çalýþtýrmak, \nhem de Python3 ile geliþtirme yapmak istiyorsanýz, sisteminizde hem Python2’yi hem de Python3’ü ayný anda bulundurmayý \ntercih edebilirsiniz. Peki bunu nasýl yapacaksýnýz?\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Windows’ta bu iþlemi yapmak çok kolaydýr. {python.org/download} adresine giderek farklý Python sürümlerini \nbilgisayarýnýza indirebilir ve bunlarý bilgisayarýnýza normal bir þekilde kurabilirsiniz. Bu þekilde sisteminize \nistediðiniz sayýda "
			"farklý Python sürümü kurabilirsiniz. Peki bu farklý sürümlere nasýl ulaþacaksýnýz?\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Python, bilgisayarýmýzdaki farklý Python sürümlerini çalýþtýrabilmemiz için bize {py} adlý özel bir program sunar.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE"	NOT!		NOT!		NOT!		NOT!		NOT!		NOT!\n>>>"
		 	BLACK"Py programý yalnýzca Windows’a özgüdür. GNU/Linux’ta böyle bir program bulunmaz.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Py programýný çalýþtýrmak için, daha önce gösterdiðimiz þekilde sistem komut satýrýna ulaþýyoruz ve orada þu komutu \nveriyoruz:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"py\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Bu komutu verdiðinizde (teorik olarak) sisteminize en son kurduðunuz Python sürümü çalýþmaya baþlayacaktýr. Ancak bu \nher zaman böyle olmayabilir. Ya da aldýðýnýz çýktý beklediðiniz gibi olmayabilir. O yüzden bu komutu verdiðinizde hangi\n"
			"sürümün baþladýðýna dikkat edin.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Eðer sisteminizde birden fazla Python sürümü kurulu ise, bu betik yardýmýyla istediðiniz sürümü baþlatabilirsiniz. \nMesela sisteminizde hem Python’ýn 2.x sürümlerinden biri, hem de Python’ýn 3.x sürümlerinden biri kurulu ise, þu komut\n"
			"yardýmýyla Python 2.x’i baþlatabilirsiniz:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"py -2\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Python 3.x’i baþlatmak için ise þu komutu veriyoruz:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"py -3\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"ðer sisteminizde birden fazla Python2 veya birden fazla Python3 sürümü kurulu ise, ana ve alt sürüm numaralarýný \nbelirterek istediðiniz sürüme ulaþabilirsiniz:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"py -2.6 \npy -2.7 \npy -3.4 \npy -3.5\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Bu arada dikkat ettiyseniz, Python programlarýný baþlatabilmek için hem {python} hem de {py} komutunu kullanma imkanýna \nsahibiz. Eðer sisteminizde tek bir Python sürümü kurulu ise, Python’ý baþlatmak için {python} komutunu kullanmak\n"
			"isteyebilir, farklý sürümlerin bir arada bulunduðu durumlarda ise {py} ile bu farklý sürümlere tek tek eriþmek \nisteyebilirsiniz.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n");
	basa_don_geri_gel_cikis();
}

//4.bölüm
etkilesimli_python(){
	char giris8;
	baslangic();
	printf(LIGHT_CYAN"------------------------------\n"
		 	BLACK"Etkileþimli python\n"
	 		LIGHT_CYAN"-----------------------------\n"
	 		BLACK
	 		"[1] Etkileþimli kabukta ilk adýmlar\n"
	 		"[2] Etkileþimli kabuðun hafýzasý\n"
	 		"[g] Geri gelmek için\n"
	 		"[q] Çýkýþ\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Þu ana kadar öðrendiklerimiz sayesinde Python programlama dilinin farklý sistemlere nasýl kurulacaðýný ve nasýl \nçalýþtýrýlacaðýný biliyoruz. Dolayýsýyla Python’ý bir önceki bölümde anlattýðýmýz þekilde çalýþtýrdýðýmýz zaman þuna benzer\n"
			"bir ekranla karþýlaþacaðýmýzýn farkýndayýz:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"istihza@ubuntu:~$ # python3 Python 3.5.1 (default, 20.04.2016, 12:24:55) [GCC 4.4.720120313 (Red Hat 4.4.7-3)] on linux \nType “help”, “copyright”, “credits” or “license” for more information.\n>>>\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Biz þimdiye kadar bu ekrana Python komut satýrý demeyi tercih ettik. Dilerseniz bundan sonra da bu adý kullanmaya \ndevam edebilirsiniz. Ancak teknik olarak bu ekrana etkileþimli kabuk (interactive shell ) adý verildiðini bilmemizde fayda\n"
			"var. Etkileþimli kabuk, bizim Python programlama dili ile iliþki kurabileceðimiz, yani onunla etkileþebileceðimiz bir üst \nkatmandýr. Etkileþimli kabuk, asýl programýmýz içinde kullanacaðýmýz kodlarý deneme imkaný sunar bize. Burasý bir nevi "
			"test \nalaný gibidir. Örneðin bir Python kodunun çalýþýp çalýþmadýðýný denemek veya nasýl çalýþtýðýný, ne sonuç verdiðini görmek \nistediðimizde bu ekran son derece faydalý bir araç olarak karþýmýza çýkar. Bu ortam, özellikle Python’a yeni "
			"baþlayanlarýn \nbu programlama diline aþinalýk kazanmasýný saðlamasý açýsýndan da bulunmaz bir araçtýr. Biz de bu bölümde etkileþimli kabuk \nüzerinde bazý çalýþmalar yaparak, Python’a alýþma turlarý atacaðýz.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Bu arada, geçen bölümde söylediðimiz gibi, bu ortamýn sistem komut satýrý adýný verdiðimiz ortamdan farklý olduðunu \naklýmýzdan çýkarmýyoruz. O zaman da dediðimiz gibi, sistem komut satýrýnda sistem komutlarý, Python komut satýrýnda\n"
			"(yani etkileþimli kabukta) ise Python komutlarý verilir. Mesela echo %PATH%, cd Desktop, dir ve ls birer sistem komutudur. \nEðer bu komutlarý etkileþimli kabukta vermeye kalkýþýrsanýz, bunlar birer Python komutu olmadýðý için, Python size bir "
			"hata \nmesajý gösterecektir. Mesela Python’ýn etkileþimli kabuðunda {cd Desktop} komutunu verirseniz þöyle bir hata alýrsýnýz:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE">>> cd Desktop\n  File \"<stdin>\", line 1\n      cd Desktop\n	       ^ \nSyntaxError: invalid syntax\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Çünkü {cd Desktop} bir Python komutu deðildir. O yüzden bu komutu Python’ýn etkileþimli kabuðunda veremeyiz. Bu komutu \nancak ve ancak kullandýðýmýz iþletim sisteminin komut satýrýnda verebiliriz.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Farklý iþletim sistemlerinde {py3, py -3, python3 veya python} komutunu vererek Python’ýn komut satýrýna nasýl \neriþebileceðimizi önceki derslerde ayrýntýlý olarak anlatmýþtýk. Etkileþimli kabuða ulaþmakta sýkýntý yaþýyorsanýz eski\n"
			"konularý tekrar gözden geçirmenizi tavsiye ederim.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Etkileþimli kabuk üzerinde çalýþmaya baþlamadan önce dilerseniz önemli bir konuyu açýklýða kavuþturalým: Etkileþimli \nkabuðu baþarýyla çalýþtýrdýk. Peki bu kabuktan çýkmak istersek ne yapacaðýz? Elbette doðrudan pencere üzerindeki çarpý\n"
			"tuþuna basarak bu ortamý terk edebilirsiniz. Ancak bu iþlemi kaba kuvvete baþvurmadan yapmanýn bir yolu olmalý, deðil mi?\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Etkileþimli kabuktan çýkmanýn birkaç farklý yolu vardýr:\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE"[1] Pencere üzerindeki çarpý düðmesine basmak (kaba kuvvet) \n[2] Önce Ctrl+Z tuþlarýna, ardýndan da Enter tuþuna basmak (Windows) \n[3] Ctrl+Z tuþlarýna basmak (GNU/Linux)\n"
		 	"[4] Önce F6 tuþuna, ardýndan da Enter tuþuna basmak (Windows) \n[5] quit() yazýp Enter tuþuna basmak (Bütün iþletim sistemleri) \n[6] import sys; sys.exit() komutunu vermek (Bütün iþletim sistemleri)\n"
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
	char ornek1[50], a[5]="atla", c[50]="'Merhaba Zalim Dünya!'";
	int b, d;
	baslangic();
	printf("Etkileþimli kabukta ilk adýmlar\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Þimdi kendi sistemimize uygun bir þekilde etkileþimli kabuðu tekrar çalýþtýralým. Etkileþimli kabuðu çalýþtýrdýðýmýzda ekranda görünen {>>>} iþareti Python’ýn bizden komut almaya hazýr olduðunu gösteriyor. Python kodlarýmýzý bu {>>>} "
			"iþaretinden hemen sonra, hiç boþluk býrakmadan yazacaðýz.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	WHITE">>>"
		 	BLACK"Buradaki ‘hiç boþluk býrakmadan’ kýsmý önemli. Python’a yeni baþlayanlarýn en sýk yaptýðý hatalardan biri {>>>} iþareti ile komut arasýnda boþluk býrakmalarýdýr. Eðer bu þekilde boþluk býrakýrsanýz yazdýðýnýz kod hata verecektir.\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLUE">>>'Merhaba Zalim Dünya!'\n"
		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n"
		 	BLACK"Denemek istermisiniz\nEger denemek istemiyorsanýz lütfen atla yazýnýz...\n>>>");
		 	scanf("%s",&ornek1);
		 	b = strcmp(ornek1, a);
//			d = strcmp(ornek1, c);
		 	if(b == 0){ // sýfýra eþit oldugu zaman kullanýcýn yazdýgý atlaya eþittir
		 		printf("Devam ediyoruz o zaman :)\n");
			 }
			 else {
			 	if(ornek1 == c){
			 		printf("Tebrikler! Doðru cevap verdiniz :)\n");
				 }
				 else{
				 	printf("Bir yerde hata yaptýnýz sanýrsam\nLütfen tekrar deneyiniz :)\n");
				 	sleep(2);
				 	etkilesimli_kabukta_ilk_adimlar();
				 }
			 }
//		 	LIGHT_CYAN"---------------------------------------------------------------------------------------------------------------------\n");
	basa_don_geri_gel_cikis();		
}

etkilesimli_kabuk_hafizasi(){
	
}

//burdan sonrasý yeniden oluþan fonksiyonlar
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
	printf("Konu baþýna dönmek için 'k'\nBir geri gelmek için 'g'\nÇýkýþ yapmak için 'q'\n"
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
			 	printf("Hatalý giriþ yaptýnýz\nLütfen tekrar deneyiniz");
			 }
}

geri_gelme(){
 	printf("Lütfen bekleyiniz...\nBir geri geriliyor"); 
 	sleep(2);
 	system("cls");
}

basa_don(){
 	printf("Lütfen bekleyiniz...\nKonu baþýna dönülüyor :)");
 	sleep(2);
 	system("cls");
}

