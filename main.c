#include <stdio.h>

#include <stdio.h>

//Klavyeden bir nöbetçi (sentinel) değer girene kadar pozitif tam sayı giriniz. En küçük ve en
//büyük sayıları bulup ekrana bastırınız.
int main(){
    int sayi,min_sayi,max_sayi;

    printf("bir sayi giriniz:");
    scanf("%d",&sayi);

    min_sayi=sayi;
    max_sayi=sayi;

    while (sayi>0){
        printf("bir sayı giriniz:");
        scanf("%d",&sayi);

        if (sayi>0){
            if (sayi < min_sayi){
                min_sayi = sayi;
            }
            if (sayi > max_sayi){
                max_sayi = sayi;
            }
        }

    }
    printf("En kucuk sayi: %d\n",min_sayi);
    printf("En buyuk sayi %d\n",max_sayi);

    return 0;








}
