#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


struct ogrenci
{
	char ad[20];
	char soyad[20];
	char adres[60];
	int ogrencino;
	int sira;
} s[5];



int main(int argc, char *argv[]) {
	
int i;
for(i=0;i<5;i++)
	{
		s[i].sira = i+1;
        printf("\n sira numarasi:%d,\n",s[i].sira);
        printf("isimi girin: ");
        scanf("%s",s[i].ad);
       printf("soyadi girin: ");
       scanf("%s",s[i].soyad);
       printf("adresi girin: ");
       scanf("%s",s[i].adres);
        printf("\n");
    }
    printf("BÝLGÝLER:\n\n");
   
    for(i=0; i<5; ++i)
    {
        printf("\n sira numarasi : %d\n",i+1);
        printf("isim: ");
        puts(s[i].ad);
        printf("soyisim: ");
        puts(s[i].soyad);
        printf("adres: ",s[i].adres);
        puts(s[i].adres);
        printf("\n");
		
		
	}

	
	
	
	return 0;
}
