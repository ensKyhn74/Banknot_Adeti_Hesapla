#include <stdio.h>
// klavyeden para miktarı girilir
// banknot adeti hesaplanır(200,100,50,20,10,5 TL'lik)

int main() 

{

 int para_miktari; 
 
 printf("Para miktarinizi girin: ");
 scanf("%d",&para_miktari); // 1580 olsun
 
 printf("%d adet 200 TL bulunmaktadir.\n",para_miktari/200); // 7 adet 200 TL

 para_miktari = para_miktari % 200 ; // 1580 % 200 = 180(GÜNCEL)
 
 printf("%d adet 100 TL bulunmaktadir.\n",para_miktari/100); // 1 adet 100 TL
 
 para_miktari = para_miktari % 100 ; // 180 % 100 = 80(GÜNCEL)
 
 printf("%d adet 50 TL bulunmaktadir.\n",para_miktari/50); // 1 adet 50 TL
 
 para_miktari = para_miktari % 50 ; // 80 % 50 = 30(GÜNCEL)
 
 printf("%d adet 20 TL bulunmaktadir.\n",para_miktari/20); // 1 adet 20 TL
 
 para_miktari = para_miktari % 20 ; // 30 % 20 = 10(GÜNCEL)
 
 printf("%d adet 10 TL bulunmaktadir.\n",para_miktari/10); // 1 adet 10 TL
 
 para_miktari = para_miktari % 10 ; // 10 % 10 = 0(GÜNCEL)
 
 printf("%d adet 5 TL bulunmaktadir.",para_miktari/5); // 0/5 = 0 adet 5 TL
  
 return 0;

}