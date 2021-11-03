#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pilihan, jumlah,total;
    printf ("----HARGA ROKOK ECERAN----\n\n");
    printf ("1.~SURYA~       : Rp.25.000\n\n");
    printf ("2.~MARLBORO~    : Rp.30.000\n\n");
    printf ("3.~SAMPURNA~    : Rp.25.000\n\n");
    printf ("4.~LA BOLD~     : Rp.24.000\n\n");
    printf ("5.~KRETEk~      : Rp.6.000\n\n");



    printf (" Masukkan Angka Pilihan : ");
    scanf ("%d", &pilihan);
    if (pilihan ==1){

        printf("\n Masukkan Jumlah Pembelian : ");
        scanf("%d", &jumlah);
        total = jumlah * 25000;
        printf("Total yang harus dibayar sebesar Rp. %d\n",total);
    }
    else if(pilihan ==2){

        printf("\n Masukkan Jumlah Pembelian : ");
        scanf("%d", &jumlah);
        total = jumlah * 30000;
        printf("Total yang harus dibayar sebesar Rp. %d\n",total);
    }
    else if(pilihan ==3){
        printf("\n Masukkan Jumlah Pembelian : ");
        scanf("%d", &jumlah);
        total = jumlah * 25000;
        printf("Total yang harus dibayar sebesar Rp. %d\n",total);
    }
    else if(pilihan ==4){
        printf("\n Masukkan Jumlah Pembelian : ");
        scanf("%d", &jumlah);
        total = jumlah * 24000;
        printf("Total yang harus dibayar sebesar Rp. %d\n",total);
    }
    else if(pilihan ==5){
        printf("\n Masukkan Jumlah Pembelian : ");
        scanf("%d", &jumlah);
        total = jumlah * 6000;
        printf("Total yang harus dibayar sebesar Rp. %d\n",total);
    }



}
