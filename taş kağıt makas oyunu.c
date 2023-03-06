#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stddef.h>

int main () {
printf("TAS KAGIT MAKAS OYUNU \n\n");
system("color 0a");


/*
tas ->> makas
kagit ->> tas
makas ->> kagit
*/

srand(time(NULL));

int i=0;

while(i<10)
{
printf("lütfen tahmininizi giriniz:");
printf("tas icin 1: \n");
printf("kagit icin 2: \n");
printf("makas icin 3: \n");

int tahmin;
scanf("%d", &tahmin);

int bilgisayartahmini = (rand()%3)+1; 
if(tahmin==1) 
{
if(bilgisayartahmini==3)
{
printf("kazandiniz tebrikler \n");
}
else if(bilgisayartahmini=3)
{
printf("kaybettiniz bilgisayar kazandi \n");
}
else if(bilgisayartahmini=1)
{
printf("berabere \n");

}
else if(tahmin==2)
{
}
if(bilgisayartahmini==3)
{
printf("kaybettiniz bilgisayar kazandi \n");
}
else if(bilgisayartahmini=1)
{
printf("kazandiniz tebrikler \n");
}
else if(bilgisayartahmini=2)
{
printf("berabere \n");
}
else if(tahmin==3)
{
}
if(bilgisayartahmini==1)
{
printf("kaybettiniz bilgisayar kazandi \n");
}
else if(bilgisayartahmini=2)
{
printf("kazandiniz tebrikler \n");
}
else if(bilgisayartahmini=3)
{
printf("berabere \n");
}
else
{
printf("yanlis deger girdiniz \n");
}
i++;
}
return 0;
}
}























