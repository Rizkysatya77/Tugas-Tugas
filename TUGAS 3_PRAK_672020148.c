#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void formatRupiah(long angka) {
    if (angka < 0) {
        printf("-");
        angka = -angka;
    }

    // Basis kasus jika angka 0
    if (angka == 0) {
        printf("0");
        return;
    }

    // Rekursif untuk memproses angka dari depan ke belakang
    if (angka >= 1000) {
        formatRupiah(angka / 1000);
        printf(".%03ld", angka % 1000);
    } else {
        printf("%ld", angka);
    }
}


int main()
{
    int menu;
    printf("==== Tugas 1 ==== \n\n");
    printf("menu : \n");
    printf("1,cek satuan \n");
    printf("2,cek angka terbesar \n");
    printf("3,hitung harga motor \n");
    printf("mau pilih yang mana? ");
    scanf("%d", &menu);
    if( menu < 1 || menu > 3 )
    {
        printf("pilih yang ada aja ya");
    }
    else
    {
        switch (menu)
        {
        case 1:
        {
            int angka;
            printf("\n\n=== cek satuan/puluhan/ratusan ===\n");
            printf("masukan angka :");
            scanf("%d", &angka);
            if(angka >= 1 && angka < 10)
            {
                printf("%d bilangan satuan",angka);
            }
            else if(angka >=10 && angka < 100)
            {
                printf("%d bilangan puluhan", angka);
            }
            else if(angka >=100 && angka < 1000)
            {
                printf("%d bilangan ratusan", angka);
            }
            else if(angka >=1000)
            {
                printf("angka terlalu besar");
            }
            break;
        }
        case 2:
        {
            int a,b,c;
            printf("\n=== Cek Angka Terbesar ===\n");
            printf("masukan angka ke-1 :");
            scanf("%d",&a);
            printf("masukan angka ke-2 :");
            scanf("%d",&b);
            printf("masukan angka ke-3 :");
            scanf("%d",&c);
            if(a>=b && a>=c)
            {
                printf("angka ke 1 adalah yang terbesar");
            }
            else if( b>=a && b>=c)
            {
                printf("angka ke 2 adalah yang terbesar");
            }
            else if(c>=a && c>=b)
            {
                printf("angka ke 3 adalah yang terbesar");
            }
            break;
        }
        case 3 :
        {
            int a,b,c;
            a = 25000000;
            b = 32000000;
            c = 40000000;
            float x,y,z;

            int pilihan;
            printf("=== selamat datang di nusantara motor salatiga ===\n");
            printf("Daftar Motor dan Harga:\n");
            printf("1.Honda Vario 150cc = Rp.%d\n", a);
            printf("2.Yamaha Nmax = Rp.%d\n", b);
            printf("3.Honda CBR 150RR = Rp.%d\n", c);
            printf("Pilih Motor :");
            scanf("%d",&pilihan);

            int pembayaran;
            printf("\n === pilih metode pembayaran ===\n");
            printf("\n 1.Tunai (Cash)");
            printf("\n 2.Cicil (24 kali)");
            printf("\npilih metode pembayaran :");
            scanf("%d",&pembayaran);

            switch(pembayaran)
            {
            case 1:
            {
                x=a -(a*0.1);
                y=b -(b*0.1);
                z=c -(c*0.1);
                if(pilihan==1)
                {
                    //printf("\nharga retail : Rp.%d",a);
                    //printf("\nharga bayar : Rp.%.2f",x);
                    printf("\nharga retail : Rp ");
                    formatRupiah(a);
                    printf("\n");
                    printf("\nharga bayar : Rp ");
                    formatRupiah(x);
                    printf("\n");
                }
                else if(pilihan==2)
                {
                    //printf("\nharga retail :%d",b);
                    //printf("\nharga bayar : %.2f",y);
                    printf("\nharga retail : Rp ");
                    formatRupiah(b);
                    printf("\n");
                    printf("\nharga bayar : Rp ");
                    formatRupiah(y);
                    printf("\n");
                }
                else if(pilihan==3)
                {
                    //printf("\nharga retail :%d",c);
                    //printf("\nharga bayar : %.2f",z);
                    printf("\nharga retail : Rp ");
                    formatRupiah(c);
                    printf("\n");
                    printf("\nharga bayar : Rp ");
                    formatRupiah(z);
                    printf("\n");
                }
                break;
            }
            case 2:
            {
                x=(a*0.1+a)/24;
                y=(b*0.1+b)/24;
                z=(c*0.1+c)/24;
                if(pilihan==1)
                {
                    printf("\nharga retail : %d",a);
                    printf("\nharga cicil : %.2f",x);
                }
                else if(pilihan==2)
                {
                    printf("\nharga retail :%d",b);
                    printf("\nharga cicil : %.2f",y);
                }
                else if(pilihan==3)
                {
                    printf("\nharga retail :%d",c);
                    printf("\nharga cicil : %.2f",z);
                }
            }
            }

        }
        break;
        }
    }
    return 0;
}
