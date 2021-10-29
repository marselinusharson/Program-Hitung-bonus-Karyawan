#include <stdio.h>

int main(){
    //variable declare
    int gajiPokok, status, jmlhAnak, masaKerja,tunjAnak, bonusMasaKerja, bonusKotor, bonusBersih, pajak, tunjanganPasangan ;

    printf("Masukkan gaji pokok: ");//minta input
    scanf("%i", &gajiPokok);//terima input
    printf("status:\n1.Menikah\n2.Belum menikah\nPilihan: ");//minta input
    scanf("%i", &status);//minta input
    
    //Nested Conditional with negation
    if (status == 1){//kondisi 1
    
        //Aksi 1
        tunjanganPasangan = gajiPokok*20/100;
        printf("jumlah anak: ");
        scanf("%i", &jmlhAnak);
        if (jmlhAnak == 0){//kondisi 2
            //aksi 2
            printf("Masa kerja (tahun): ");
            scanf("%i", &masaKerja);
            if (masaKerja < 5){
                bonusMasaKerja = gajiPokok*5/100;
                bonusKotor = tunjanganPasangan + bonusMasaKerja;
                pajak = bonusKotor*15/100;
                bonusBersih = bonusKotor - pajak;
                printf("Bonus = %i", bonusBersih);
            }
            else if( masaKerja >= 5 && masaKerja < 10){//kondisi 3
                //aksi3
                bonusMasaKerja = gajiPokok*10/100;
                bonusKotor = tunjanganPasangan + bonusMasaKerja;
                pajak = bonusKotor*15/100;
                bonusBersih = bonusKotor - pajak;
                printf("Bonus = %i", bonusBersih);  
            }
            else{//kondisi 4
            //aksi 4
                bonusMasaKerja = gajiPokok*15/100;
                bonusKotor = tunjanganPasangan + bonusMasaKerja;
                pajak = bonusKotor*15/100;
                bonusBersih = bonusKotor - pajak;
                printf("Bonus = %i", bonusBersih);
               
            }
        }else if (jmlhAnak = 1){//Kondisi 5
            //aksi 5
            tunjAnak = gajiPokok * 15/100;
            printf("Masa kerja : ");
            scanf("%i", &masaKerja);
            if (masaKerja < 5){
                bonusMasaKerja = gajiPokok*5/100;
                bonusKotor = tunjanganPasangan + tunjAnak + bonusMasaKerja ;
                pajak = bonusKotor*15/100;
                bonusBersih = bonusKotor - pajak;
                printf("Bonus = Rp.%i", bonusBersih);
            }
            else if( masaKerja >= 5 && masaKerja < 10){
                bonusMasaKerja = gajiPokok*10/100;
                bonusKotor = tunjanganPasangan + tunjAnak + bonusMasaKerja;
                pajak = bonusKotor*15/100;
                bonusBersih = bonusKotor - pajak;
                printf("Bonus = Rp.%i", bonusBersih);  
            }
            else if(masaKerja >= 10){
                bonusMasaKerja = gajiPokok*15/100 ;
                bonusKotor = tunjanganPasangan + tunjAnak + bonusMasaKerja;
                pajak = bonusKotor*15/100;
                bonusBersih = bonusKotor - pajak;
                printf("Bonus = Rp.%i", bonusBersih);
            }
        }else if (jmlhAnak = 2){
            tunjAnak = 2 * (gajiPokok * 15/100);
            printf("Masa kerja (tahun): ");
            scanf("%i", &masaKerja);
            
            if (masaKerja < 5){
                bonusMasaKerja = gajiPokok*5/100;
                bonusKotor = tunjanganPasangan + tunjAnak + bonusMasaKerja;
                pajak = bonusKotor*15/100;
                bonusBersih = bonusKotor - pajak;
                printf("Bonus = Rp.%i", bonusBersih);
            }
            else if( masaKerja >= 5 && masaKerja < 10){
                bonusMasaKerja = gajiPokok*10/100;
                bonusKotor = tunjanganPasangan + tunjAnak + bonusMasaKerja;
                pajak = bonusKotor*15/100;
                bonusBersih = bonusKotor - pajak;
                printf("Bonus = Rp.%i", bonusBersih);  
            }
            else{
                bonusMasaKerja = gajiPokok*15/100*jmlhAnak;
                bonusKotor = tunjanganPasangan + tunjAnak + bonusMasaKerja;
                pajak = bonusKotor*15/100;
                bonusBersih = bonusKotor - pajak;
                printf("Bonus = Rp.%i", bonusBersih);

            }
        }
    }else if (status = 2){
        printf("Masa kerja (tahun): ");
        scanf("%i", &masaKerja);
        if (masaKerja < 5){
                bonusMasaKerja = gajiPokok*5/100;
                bonusKotor = bonusMasaKerja;
                pajak = bonusKotor*10/100;
                bonusBersih = bonusKotor - pajak;
                printf("Bonus = Rp.%i", bonusBersih);
            }
            else if( masaKerja >= 5 && masaKerja < 10){
                bonusMasaKerja = gajiPokok*10/100;
                bonusKotor = bonusMasaKerja;
                pajak = bonusKotor*10/100;
                bonusBersih = bonusKotor - pajak;
                printf("Bonus = Rp.%i", bonusBersih);  
            }
            else{
                bonusMasaKerja = gajiPokok*15/100;
                bonusKotor = bonusMasaKerja;
                pajak = bonusKotor*10/100;
                bonusBersih = bonusKotor - pajak;
                printf ("bonus = Rp.%i", bonusBersih);
            }

    }


return 0;
}

    
