/*Nama Anggota: Marselinus Harson Rewo. NIM:2115091030
				Muhammad NIM:
  Kelas		  : A
  Menghitung Bonus bersih yang akan diterima seorang karyawan */
#include <stdio.h>//file header input output

int main(){
    printf("==========Bonus Yang Akan Diterima Seorang Karyawan==========\n\n\n");
    //variable declare
    int gajiPokok,//untuk menampung gaji pokok karyawan
		status,//menampung pilihan status perkawinan karyawan 
		tunjanganPasangan,//menampung nilai tunjangan khusus karyawan yang telah menikah
		jmlhAnak,//menampung pilihan jumlah anak karyawan jika telah menikah 
		banyakAnak,//menampung banyak anak karyawan saat user memilih pilihan ketiga nantinya 
		masaKerja,//menampung masa kerja dari karyawan yang diinput user
		tunjAnak,//menampung tunjangan anak bagi karyawan yang sudah menikah dan memiliki anak 
		bonusMasaKerja,//menampung bonu masa kerja sesuai dengan lama masa kerjanya 
		bonusKotor,//menampung bonus kotor sebelum dipotong pajak 
		pajak,//menampung nilai ketentuan pajak sesuai status perkawinan  karyawan
		bonusBersih;//menampung nilai bonus yg diperoleh setelah dipotong pajak

    printf("Masukkan gaji pokok: Rp.");//minta input gaji pokok 
    scanf("%i", &gajiPokok);//terima input gaji pokok
    printf("\nPilih status:\n1.Menikah\n2.Belum menikah.\nPilihan: ");//minta input status perkawinan
    scanf("%i", &status);//terima input status perkawinan
    
    //Simple Conditional with negation
    switch (status){
        case 1: //kondisi 1 user memilih No.1 alias Sudah Menikah 
    
        //Aksi 1:
        tunjanganPasangan = gajiPokok*20/100;//memberi nilai besar tunjangan pasangan ke dalam variabel tunjanganPasangan
        printf("\nPilih jumlah anak: \n1. Tidak punya anak\n2. Punya 1 anak\n3. Punya >=2 anak:\nPilihan: ");//minta user input jumlah anak dengan memilih sesuai angka
        scanf("%i", &jmlhAnak);//terima input

        //Karena user telah menikah disediakan beberapa pilihan mengenai jumlah anak
        //gunakan switch case. karena ada 3 pilihan yaitu 0 anak, 1 anak dan punya 2 anak atau lebih
        switch (jmlhAnak){
            case  1://case pertama user memilih no. 1 alias anak =  0
            printf("\nMasa kerja (tahun): ");
            scanf("%i", &masaKerja);

            //simple conditional with negation. Karena ada 3 kemungkinan perbandingan masa kerja 
            if (masaKerja < 5){//kondisi 1 = masa kerja kurang dari 5 tahun

                bonusMasaKerja = gajiPokok*5/100;
                bonusKotor = tunjanganPasangan + bonusMasaKerja;
                pajak = bonusKotor*15/100;
                bonusBersih = bonusKotor - pajak;
                printf("Bonus = %i", bonusBersih);
            }
            else if( masaKerja >= 5 && masaKerja < 10){//kondisi 2 = 5 tahun =<masa kerja < 10 tahun 
                
                bonusMasaKerja = gajiPokok*10/100;
                bonusKotor = tunjanganPasangan + bonusMasaKerja;
                pajak = bonusKotor*15/100;
                bonusBersih = bonusKotor - pajak;
                printf("Bonus = %i", bonusBersih);  

            }
            else if (masaKerja >= 10){//kondisi masa kerja >= 10
            
                bonusMasaKerja = gajiPokok*15/100;
                bonusKotor = tunjanganPasangan + bonusMasaKerja;
                pajak = bonusKotor*15/100;
                bonusBersih = bonusKotor - pajak;
                printf("Bonus = %i", bonusBersih);
               
            }
            break;//memberhentikan eksekusi case pertama

            case 2:// case kedua dimana user memilih No.2 alias anak = 1
            tunjAnak = gajiPokok*15/100;//karena memiliki anak maka dapat tunjangan anak

            //Simple konditional with negation karena ada 3 kondisi perbandingan masa kerja
            if (masaKerja < 5){//kondisi masa kerja kurang dari 5 tahun
                printf("Masa kerja (tahun): ");
                scanf("%i", &masaKerja);
                bonusMasaKerja = gajiPokok*5/100;
                bonusKotor = tunjanganPasangan + tunjAnak + bonusMasaKerja ;
                pajak = bonusKotor*15/100;
                bonusBersih = bonusKotor - pajak;
                printf("Bonus = Rp.%i", bonusBersih);
            }
            else if( masaKerja >= 5 && masaKerja < 10){//Kondisi 5 tahun =<masakerja<10 tahun 
                bonusMasaKerja = gajiPokok*10/100;
                bonusKotor = tunjanganPasangan + tunjAnak + bonusMasaKerja;
                pajak = bonusKotor*15/100;
                bonusBersih = bonusKotor - pajak;
                printf("Bonus = Rp.%i", bonusBersih);  
            }
            else if(masaKerja >= 10){//kondisi masa kerja sudah 10 tahun ke atas
                bonusMasaKerja = gajiPokok*15/100 ;
                bonusKotor = tunjanganPasangan + tunjAnak + bonusMasaKerja;
                pajak = bonusKotor*15/100;
                bonusBersih = bonusKotor - pajak;
                printf("Bonus = Rp.%i", bonusBersih);
            }
            break;//mengakhiri eksekusi case 2 agar jika kondisinya tdk terpenuhi komputer bisa menjalankan baris program berikutnya

            case 3:// saat user memilih  No. 3 alias anaknya >= 2 orang
            printf ("banyak anak : ");//jika user pilih No.3 maka program meminta jumlah anaknya
            scanf("%i", &banyakAnak);//menerima input jumlah anak
            if (banyakAnak <= 2){
            	tunjAnak = gajiPokok * 15/100 * banyakAnak;//tunjangan anak akan dikali dengan banyaknya anak
            	printf("Masa kerja (tahun): ");//meminta input masa kerja karyawan dalam ... tahun
            	scanf("%i", &masaKerja);//terima inputan
            	
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
                bonusMasaKerja = gajiPokok*15/100;
                bonusKotor = tunjanganPasangan + tunjAnak + bonusMasaKerja;
                pajak = bonusKotor*15/100;
                bonusBersih = bonusKotor - pajak;
                printf("Bonus = Rp.%i", bonusBersih);

            }
        }else if (banyakAnak > 2){
            	tunjAnak = gajiPokok * 15/100 * banyakAnak;//tunjangan anak akan dikali dengan banyaknya anak
            	printf("Masa kerja (tahun): ");//meminta input masa kerja karyawan dalam ... tahun
            	scanf("%i", &masaKerja);//terima inputan
            	
            if (masaKerja < 5){
                bonusMasaKerja = gajiPokok*5/100;
                bonusKotor = (tunjanganPasangan + bonusMasaKerja) * (15/100 )*2;
                pajak = bonusKotor*15/100;
                bonusBersih = bonusKotor - pajak;
                printf("Bonus = Rp.%i", bonusBersih);
            }
            else if( masaKerja >= 5 && masaKerja < 10){
                bonusMasaKerja = gajiPokok*10/100;
                bonusKotor = (tunjanganPasangan + bonusMasaKerja ) * (15/100)*2;
                pajak = bonusKotor*15/100;
                bonusBersih = bonusKotor - pajak;
                printf("Bonus = Rp.%i", bonusBersih);  
            }
            else{
                bonusMasaKerja = gajiPokok*15/100;
                bonusKotor = (tunjanganPasangan + bonusMasaKerja) * (15/100)*2;
                pajak = bonusKotor*15/100;
                bonusBersih = bonusKotor - pajak;
                printf("Bonus = Rp.%i", bonusBersih);

            }
            break;

            default://program yang akan dijalankan jika input user tidak sesuai pilihan
            printf("Pilihan anda tidak sesuai");

        }
        break;
        
      case 2://Kondisi 2 dari simple konditional saat user memilih No.2  alias Belum menikah
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

    
    break;
    default:
        printf("mohon pilih sesuai nomor di atas");
    }

return 0;
}
}

    
