#include<conio.h>  
#include<iostream> 
#include<stdio.h>  
#include<stdlib.h> 
#include<time.h>   //time
#include <cstdlib> //bilgisayar yapmak i�in hamle bulmad���nda  rastgele se�im rand fonksiyonunu �al��t�r�r.   
#include <locale.h>
//1 player 2 computer olarak atan�r
void clear()
{
	system("CLS");
}
void core()
{
	int q,w,e,a,s,d,z,x,c,gecici,sira=1,hamle=0,devam=1;
	z=x=c=a=s=d=q=w=e=0;

	
	char ilkhamle;
	
	printf("�lk Hamleyi Bilgisayar Yapacak Onayl�yor Musun\ny/n (�lk hamleyi Pc'ye verip kazanana �ikolata var :) )");
	scanf("%s",&ilkhamle);
	if(ilkhamle=='y') sira=2;									//  y harfi girilirse ilk hamleyi pc yapar
	else if(ilkhamle=='n') printf("Ilk hamle sizde!");			// n harfi girilirse ilk hamleyi oyuncu yapar
	else {
		printf("Hatali giris!");
		devam=0;
	}
	printf("Oyun Basladi!%d\n",q);
	while(devam)
	{
		srand (time(NULL));						// her seferinde ayn� say�y� �retmesini engeler.   
		if((q==1 && w==1 && e==1) || (a==1 && s==1 && d==1) || (z==1 && x==1 && c==1) || (q==1 && a==1 && z==1) || (w==1 && s==1 && x==1) || (e==1 && d==1 && c==1) || (q==1 && s==1 && c==1) || (e==1 && s==1 && z==1) ){
			printf("%d %d %d\n%d %d %d\n%d %d %d\nOynanan Hamle=%d  \n# >",q,w,e,a,s,d,z,x,c,hamle);
			printf("Tebrikler, Kazandiniz!");
			
			char skor[20]="\nSKOR=PC-OYUNCU:\n"; 				//
			int pc_puan=0,oyuncu_puan=0;
			oyuncu_puan++;
			FILE *isim_alma;
			isim_alma=fopen("isim.txt","a+");
			fprintf(isim_alma,"\n%s",skor);
			fprintf(isim_alma,"%d-%d",pc_puan,oyuncu_puan);
			fclose(isim_alma);
			
			system("timeout 4");// sleep yazsayd�k ge�emzdk
			
			break;	
		}	
		else if((q==2 && w==2 && e==2) || (a==2 && s==2 && d==2) || (z==2 && x==2 && c==2) || (q==2 && a==2 && z==2) || (w==2 && s==2 && x==2) || (e==2 && d==2 && c==2) || (q==2 && s==2 && c==2) || (e==2 && s==2 && z==2) ){
		printf("%d %d %d\n%d %d %d\n%d %d %d\nOynanan Hamle=%d \n#> ",q,w,e,a,s,d,z,x,c,hamle);
			printf("Kaybettiniz!");
			
			char skor[20]="SKOR=PC-OYUNCU:";
			int pc_puan=0,oyuncu_puan=0;
			pc_puan++;
			FILE *isim_alma;
			isim_alma=fopen("isim.txt","a+");
			fprintf(isim_alma,"%s",skor);
			fprintf(isim_alma,"%d-%d",pc_puan,oyuncu_puan);
			fclose(isim_alma);
		
			system("timeout 4");
			break;	
		}
			
		if(sira==1)
		{	
		if(q!=0 && w!= 0 && e!= 0 && a!= 0 && s!= 0 && d!= 0 && z!= 0 && x!= 0 && c!= 0)  //berabereyse
		{
				printf("%d %d %d\n%d %d %d\n%d %d %d\n \n#> ",q,w,e,a,s,d,z,x,c,hamle);
			printf("Berabere bitti!");
			system("timeout 2");// sleep yazsayd�k ge�emzdk
			break;
		}
		
		printf("%d %d %d\n%d %d %d\n%d %d %d\nOynanan Hamle=%d - Hamle Giriniz \n#>",q,w,e,a,s,d,z,x,c,hamle);
		scanf("%d",&gecici);									// KULLANICIDAN HAMLE YAPMASI ���N B�R KORD�NAT �STER
		switch(gecici){									
			case 1:												// KULLANICI E�ER 1 KORD�NATINI SE�M��SE CASE1 'e girer
				if(q==1 || q==2){								// E�ER q de�i�kenimizde 1 veya 2 de�eri varsa yani bu kordinat doluysa hata verir d�ng�y� sonland�r�r.
					printf("Hatali Giris!");
					system("timeout 2");					
				}
				else
				{
					q=1;										// q de��kenine 1 de�erini atar ve s�ray� 2 yapar yani hamle s�ras� pc'ye ge�mi�tir
					sira=2;
					break;
				}
				break;
			case 2:
				if(w==1 || w==2){
					printf("Hatali Giris!");
					system("timeout 2");
				}
				else
				{
					w=1;
					sira=2;
					break;
				}
				break;
			case 3:
				if(e==1 || e==2){
					printf("Hatali Giris!");
					system("timeout 2");
				}
				else
				{
					e=1;
					sira=2;
					break;
				}
				break;
			case 4:
				if(a==1 || a==2){
					printf("Hatali Giris!");
					system("timeout 2");
				}
				else
				{
					a=1;
					sira=2;
					break;
				}
				break;
			case 5:
				if(s==1 || s==2){
					printf("Hatali Giris!");
					system("timeout 2");
				}
				else
				{
					s=1;
					sira=2;
					break;
				}
				break;
			case 6:
				if(d==1 || d==2){
					printf("Hatali Giris!");
					system("timeout 2");
				}
				else
				{
					d=1;
					sira=2;
					break;
				}
				break;
			case 7:
				if(z==1 || z==2){
					printf("Hatali Giris!");
					system("timeout 2");
				}
				else
				{
					z=1;
					sira=2;
					break;
				}
				break;
			case 8:
				if(x==1 || x==2){
					printf("Hatali Giris!");
					system("timeout 2");
				}
				else
				{
					x=1;
					sira=2;
					break;
				}
				break;
			case 9:
				if(c==1 || c==2){
					printf("Hatali Giris!");
					system("timeout 2");
				}
				else
				{
					c=1;
					sira=2;
					break;
				}
				break;
			default:
				printf("Giris yanlis!");
				system("timeout 2");
				break;
		}//switch				
	}//if sira 1
	else //sira 2 pc s�ra�
	{
		if(q!=0 && w!= 0 && e!= 0 && a!= 0 && s!= 0 && d!= 0 && z!= 0 && x!= 0 && c!= 0)  //berabereyse
		{
			printf("%d %d %d\n%d %d %d\n%d %d %d\n \n#> ",q,w,e,a,s,d,z,x,c,hamle);
			printf("Berabere bitti!");
			system("timeout 2");
			break;
		}
		else if(z==2 && s==2 && e==0) e=2; //esz biti?
		else if(q==2 && s==2 && (c!=2 && c!=1)) c=2;  //ilk ba?a a.i kazanirsa diye atak koyuyoruz defans 2. �ncelik attack=2
		else if(q==2 && c==2 && (s!=2 && s!=1)) s=2;
		else if(s==2 && c==2 && (q!=2 && q!=1)) q=2; //qsc biti? 2
		else if(q==2 && w==2 && (e!=2 && e!=1)) e=2; //qwe
		else if(q==2 && e==2 && (w!=2 && w!=1)) w=2;
		else if(e==2 && w==2 && (q!=2 && q!=1)) q=2; //qwe biti? 2
		else if(a==2 && s==2 && (d!=2 && d!=1)) d=2; 
		else if(a==2 && d==2 && (s!=2 && s!=1)) s=2;
		else if(d==2 && s==2 && (a!=2 && a!=1)) a=2; //asd biti?
		else if(z==2 && x==2 && (c!=2 && c!=1)) c=2; 
		else if(z==2 && c==2 && (x!=2 && x!=1)) x=2;
		else if(x==2 && c==2 && (z!=2 && z!=1)) z=2; //zxc biti?
		else if(e==2 && s==2 && (z!=2 && z!=1)) z=2; 
		else if(e==2 && z==2 && (s!=2 && s!=1)) s=2;		
		else if(q==2 && a==2 && (z!=2 && z!=1)) z=2;
		else if(q==2 && z==2 && (a!=2 && a!=1)) a=2;
		else if(z==2 && a==2 && (q!=2 && q!=1)) q=2; //qaz biti?
		else if(w==2 && x==2 && (s!=2 && s!=1)) s=2;
		else if(w==2 && s==2 && (x!=2 && x!=1)) x=2;
		else if(x==2 && s==2 && (w!=2 && w!=1)) w=2; //wsx biti?
		else if(e==2 && d==2 && (c!=2 && c!=1)) c=2;
		else if(e==2 && c==2 && (d!=2 && d!=1)) d=2;
		else if(d==2 && c==2 && (e!=2 && e!=1)) e=2; //ecd biti?
		else if(e==1 && d==1 && (c!=2 && c!=1)) c=2;
		else if(e==1 && c==1 && (d!=2 && d!=1)) d=2;
		else if(d==1 && c==1 && (e!=2 && e!=1)) e=2; //ecd biti?
		else if(q==1 && s==1 && (c!=2 && c!=1)) c=2; //qsc hamle 1 defans
		else if(q==1 && c==1 && (s!=2 && s!=1)) s=2;
		else if(s==1 && c==1 && (q!=2 && q!=1)) q=2; //qsc biti? 1
		else if(q==1 && w==1 && (e!=2 && e!=1)) e=2; //qwe
		else if(q==1 && e==1 && (w!=2 && w!=1)) w=2;
		else if(e==1 && w==1 && (q!=2 && q!=1)) q=2; //qwe biti? 1 defans
		else if(a==1 && s==1 && (d!=2 && d!=1)) d=2; 
		else if(a==1 && d==1 && (s!=2 && s!=1)) s=2;
		else if(d==1 && s==1 && (a!=2 && a!=1)) a=2; //asd biti?
		else if(z==1 && x==1 && (c!=2 && c!=1)) c=2; 
		else if(z==1 && c==1 && (x!=2 && x!=1)) x=2;
		else if(x==1 && c==1 && (z!=2 && z!=1)) z=2; //zxc biti?
		else if(e==1 && s==1 && (z!=2 && z!=1)) z=2; 
		else if(e==1 && z==1 && (s!=2 && s!=1)) s=2;
		else if(z==1 && s==1 && (e!=2 && e!=1)) e=2; //esz biti?
		else if(q==1 && a==1 && (z!=2 && z!=1)) z=2;
		else if(q==1 && z==1 && (a!=2 && a!=1)) a=2;
		else if(z==1 && a==1 && (q!=2 && q!=1)) q=2; //qaz biti?
		else if(w==1 && x==1 && (s!=2 && s!=1)) s=2;
		else if(w==1 && s==1 && (x!=2 && x!=1)) x=2;
		else if(x==1 && s==1 && (w!=2 && w!=1)) w=2; //wsx biti?
		else {
		gecici=1 + rand()%9; //1-2-3-4-5-6-7-8-9						//  PC yapacak hamle bulamazsa 1-9 aras� bir random say� �retir ve geciciye atar
		switch(gecici){
			case 1:														// gecici 1 olursa case1e girer
				if (q==1 || q==2)										// q de�i�keninin i�inin bo� olup olmad���n� kontrol eder e�er 1 veya 2 var iste yani doluysa yeni bi random say� �retir 
				{
					gecici=1 + rand()%9; //1-2-3-4-5-6-7-8-9
					continue;											// e�er buras� �al���rsa kod continueyi g�rd��� anda ba�a d�ner
				}
				else{
					q=2;
				}
				break;
			case 2:
				if (w==1 || w==2)
				{
					gecici=1 + rand()%9; //1-2-3-4-5-6-7-8-9
					continue;
				}
				else{
					w=2;
				}
				break;
			case 3:
				if (e==1 || e==2)
				{
					gecici=1 + rand()%9; //1-2-3-4-5-6-7-8-9
					continue;
				}
				else{
					e=2;
				}
				break;
			case 4:
				if (a==1 || a==2)
				{
					gecici=1 + rand()%9; //1-2-3-4-5-6-7-8-9
					continue;
				}
				else{
					a=2;
				}
				break;
			case 5:
				if (s==1 || s==2)
				{
					gecici=1 + rand()%9; //1-2-3-4-5-6-7-8-9
					continue;
				}
				else{
					s=2;
				}
				break;
			case 6:
				if (d==1 || d==2)
				{
					gecici=1 + rand()%9; //1-2-3-4-5-6-7-8-9
					continue;
				}
				else{
					d=2;
				}
				break;
			case 7:
				if (z==1 || z==2)
				{
					gecici=1 + rand()%9; //1-2-3-4-5-6-7-8-9
					continue;
				}
				else{
					z=2;
				}
				break;
			case 8:
				if (x==1 || x==2)
				{
					gecici=1 + rand()%9; //1-2-3-4-5-6-7-8-9
					continue;
				}
				else{
					x=2;
				}
				break;
			case 9:
				if (c==1 || c==2)
				{
					gecici=1 + rand()%9; //1-2-3-4-5-6-7-8-9
					continue;
				}
				else{
					c=2;
				}
				break;			
			} //switch
			clear();
		} // random else   		
		sira=1;
		clear();
	} // else
	hamle++;
	}//while
}



int main(){
		system("color 1e");
		setlocale(LC_ALL,"Turkish");					// t�rk�e karakter kullanmam�z sa�lar
		char depo[25];
		FILE *isim_alma;
		isim_alma=fopen("isim.txt","a+");
	
	if(isim_alma==NULL)									// dosyan�n ba�ar�yla olu�turulup olu�turulmad���n� kontrol eder
		printf("Dosya olusmadi");
	else
	printf("\n�sminizi ve Soyisminizi Girin:");

	fgets(depo,25,stdin);
	system("timeout 2");
	fputs(depo,isim_alma);

	printf("\nTebirkler Kaydiniz Al�nd� Oyun Y�kleniyor\n");
	fclose(isim_alma);
	system("timeout 3");

	int help;
	printf("\n\t      ******************************************************\n");
	printf("\t*               B�R-�K�-B�R Oyununa Ho�geldiniz                      **\n");
	printf("\t*      Oyun Hakk�nda Bilgi Almak ��in 1'i Tu�lay�n                    ***\n");
	printf("\t*      Oyuna Ba�lamak ��in Herhangi Bir Say�y� Tu�lay�n (1 Hari�)      ****\n");

		
	scanf("%d",&help);
	if(help==1)
	{
		printf("\n%d %d %d\n%d %d %d\n%d %d %d\nOyunumuz �ekilde g�r�ld��� gibi X-O-X oyununa benzemektedir.Oyun tablas� �zerinde 3 sat�r ve 3 st�n\nbulunup her noktan�n bir kordinat� vard�r.Oyun a��ld���nda default olarak oyuncuya 1\nBilgisayara ise 2 say�lar� verilir.Amac�m�z kordinatlar� kullanarak sa�dan sola,\nsoldan sa�a veya �apraz �ekilde art arda 1-1-1 getirmektir.Bilgisayar da ayn� �ekilde\n2-2-2 yapmaya �al��maktad�r.K�saca bilgisayrdan �nce 1-1-1 serisini tamamlamal�s�n.\n",1,2,3,4,5,6,7,8,9);
		printf("\nOyun 40 Saniye ��inde Ba�layacak");
		system("timeout 40");
	
	}
	
	clear();
	while(true){
		core();
		
		clear();
	}
	return 0;
}
