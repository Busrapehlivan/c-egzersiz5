#include <stdio.h>

int main() {
    char cinsiyet;
    int fazla_mesai_suresi;
    double saat_ucret;

    printf("Cinsiyet (E/K) giriniz: ");
    scanf("%c", &cinsiyet);

    // Cinsiyet kontrolü
    while (cinsiyet != 'E' && cinsiyet != 'K') {
        printf("Hatali giris! Cinsiyet (E/K) giriniz: ");
        scanf(" %c", &cinsiyet);
    }

    printf("Toplam fazla mesai suresi (saat cinsinden) giriniz: ");
    scanf("%d", &fazla_mesai_suresi);

    // Fazla mesai ücreti hesaplama
    if (cinsiyet == 'E') {
        if (fazla_mesai_suresi <= 20) {
            saat_ucret = 100.0;
        } else if (fazla_mesai_suresi <= 30) {
            saat_ucret = 150.0;
        } else {
            saat_ucret = 200.0;
        }
    } else {
        if (fazla_mesai_suresi <= 15) {
            saat_ucret = 100.0;
        } else if (fazla_mesai_suresi <= 20) {
            saat_ucret = 150.0;
        } else {
            saat_ucret = 200.0;
        }
    }

    // Toplam fazla mesai ücreti hesaplama ve ekrana yazdırma
    double toplam_ucret = fazla_mesai_suresi * saat_ucret;
    printf("Ekstra odeme: %.2f TL\n", toplam_ucret);

    return 0;
}
