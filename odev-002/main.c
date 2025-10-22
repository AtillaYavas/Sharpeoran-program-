#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//sharpe oraný = yatýrým getirisi - risksiz faiz oraný / standart sapma
	
	double yatirimgetiri , faizorani , standartsapma ;
	double sharpeorani ;
	
	printf("Sharpe Oranlama Programi \n") ; 
	printf("------------------------------ \n") ;
	
	printf("Yatirim getirinizi giriniz : ") ;  //öncelikle yatýrýmýmýzýn getirini ve diðer oranlarý ekrana yüzde olucak þekilde giriyoruz
	scanf("%lf", &yatirimgetiri) ;             
		
	printf("Risksiz faiz oraninizi giriniz: ");
	scanf("%lf", &faizorani) ;
	
	printf("Standart sapma oranini giriniz: ");
	scanf("%lf", &standartsapma) ;
	
	yatirimgetiri /=100.0 ;              //yüzde olarak girdiðimiz deðeri orana çeviriyoruz %15 --> 0.15
	faizorani /=100.0 ; 
	standartsapma /=100.0 ;
  
    if(sharpeorani == 0) {
	printf("Standart sapma sifir olamaz \n") ;	
	return 1;
	} 
    
    sharpeorani = (yatirimgetiri - faizorani) / standartsapma ;
    
    printf("Sharpe Orani: %.2f\n" , sharpeorani) ; 

if (sharpeorani <= 1) 
       printf("-> Sharpe orani %.2f: Ortalama altinda bir performans.\n", sharpeorani);
    else if (sharpeorani <= 2)  
       printf("-> Sharpe orani %2.f: Iyi bir performans.\n", sharpeorani) ;
    else if (sharpeorani <= 3) 
       printf("-> Sharpe orani %2.f: Cok iyi bir performans.\n", sharpeorani) ;
    else 
	   printf("-> Sharpe orani %2.f: Mükemmel performans.\n", sharpeorani)  ;
	   	   
	return 0;
}
