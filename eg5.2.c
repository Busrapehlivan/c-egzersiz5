//
// Created by Büşra Pehlivan on 6.04.2023.
//
#include <stdio.h>

int main(){
    char yiyecek;
    int adet,fiyat;


    do {
        printf("sipariş vermek için bir yiyecek giriniz (H/h, P/p veya S/s):");
        scanf("%c", &yiyecek);

        switch (yiyecek) {
            case 'H':
            case 'h':
                fiyat = 5;
                break;
            case 'P':
            case 'p':
                fiyat = 10;
                break;
            case 'S':
            case 's':
                fiyat = 15;
                break;
            default:
                printf("hatalı giriş\n");
        }

        printf("kaç adet istersiniz");
        scanf("%d", &adet);

        int toplam_fiyat = adet * fiyat;
        printf("toplam fiyat: %d TL\n", toplam_fiyat);

        printf("yeni bir sipariş vermek istiyor musunuz (E/e veya H/h):");
        scanf("%c", &yiyecek);
    } while (yiyecek == 'E' || yiyecek=='e');

    printf("program sonlandırıldı");
    return 0;


}