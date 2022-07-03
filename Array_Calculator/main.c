#include<stdio.h>

void toplam(int topdizi) {
    printf("\n");
    printf("İlk Üç Sayının Toplamı ===> %d\n", topdizi);
}

int main() {

    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);

    int i, dizi[6], topdizi, ortdizi, secim;
    char devam;
    
    islem:
        printf("Altı Adet Sayı Giriniz: \n\n");
        for(i=1; i<=6; i++) {
        printf("%d. Sayı:", i);
        scanf("%d", &dizi[i]);
    }
    printf("\n");
    printf("Seçtiğiniz Sayılar ---> ");
    for(i=1; i<=6; i++) {
        printf("%d\t", dizi[i]);
    }
    printf("\n\n");
    printf("İlk Üç Sayının Toplamı İçin: 1\nSon Üç Sayının Ortalaması İçin: 2\n");
    printf("Yapmak İstediğiniz İşlem Kodunu Giriniz: ");
    scanf("%d", &secim);
    if (secim==1) {
        topdizi=0;
        for(i=1; i<=3; i++) {
            topdizi=topdizi+dizi[i];
        }
        toplam(topdizi);
    }
    else if(secim==2) {
        goto ortalama;

        ortalama:
            ortdizi=0;
            for(i=4; i<=6; i++) {
                ortdizi=ortdizi+dizi[i];
            }
            printf("\n");
            printf("Son Üç Sayının Ortalaması ===> %.2f\n", (float)ortdizi/3);
    }
    else {
        printf("\n");
        printf("Geçersiz İşlem Kodu Girdiniz.");
    }
    gecersiz:
        printf("\n");
        printf("Başka İşlem Yapmak İster Misiniz?\n");
        printf("Evet ---> e/E\nHayır ---> h/H\n");
        scanf("%s", &devam);
        if(devam=='e' || devam=='E') {
            goto islem;
        }
        else if(devam=='h' || devam=='H') {
            return 0;
        }
        else {
            printf("Geçersiz İşlem Yaptınız.");
            goto gecersiz;
        }

    return 0;
}
