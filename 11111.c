/*Nama: Marselinus Harson Rewo NIM:2115091030
		Mochammad Syahrul Kurniawan NIM:2115091031
  Kelas: A*/
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
            }else if( masaKerja >= 5 && masaKerja < 10){//kondisi 2 = 5 tahun =<masa kerja < 10 tahun 
                
                bonusMasaKerja = gajiPokok*10/100;
                bonusKotor = tunjanganPasangan + bonusMasaKerja;
                pajak = bonusKotor*15/100;
                bonusBersih = bonusKotor - pajak;
                printf("Bonus = %i", bonusBersih);  

            }else if (masaKerja >= 10){//kondisi masa kerja >= 10
            
                bonusMasaKerja = gajiPokok*15/100;
                bonusKotor = tunjanganPasangan + bonusMasaKerja;
                pajak = bonusKotor*15/100;
                bonusBersih = bonusKotor - pajak;
                printf("Bonus = %i", bonusBersih);
               
            }
            break;//memberhentikan eksekusi case pertama dimana user memilih pilihan 1 alias tidak punya anak

            case 2:// case kedua dimana user memilih No.2 alias anak = 1
            printf("Masa kerja (tahun): ");//minta masa kerja dari karyawan
            scanf("%i", &masaKerja);//terima input masakerja
            tunjAnak = gajiPokok*15/100;//karena memiliki anak maka dapat tunjangan anak
            //Simple konditional with negation karena ada 3 kondisi perbandingan masa kerja
            if (masaKerja < 5){//kondisi masa kerja kurang dari 5 tahun
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
            break;//mengakhiri eksekusi case 2 agar jika kondisinya terpenuhi program dapat berhenti

            case 3:// saat user memilih  No. 3 alias anaknya >= 2 orang
            printf ("banyak anak : ");//jika user pilih No.3 maka program meminta jumlah anaknya
            scanf("%i", &banyakAnak);//menerima input jumlah anak
			if (banyakAnak <= 2){//kondisi saat anaknya 2 orang atau kurang
				tunjAnak = gajiPokok*15/100 * banyakAnak;//saat anaknya dua orang atau kurang maka dua anak tersebut mendapat tunjangan masing2 15%
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
				
		}else if (banyakAnak > 2){//kondisi disaat anaknya lebih dari dua 
			tunjAnak = (gajiPokok * 15/100)*2;//hanya dua anak yang dapat junjangan sehingga dikali 2
			printf("Masa kerja (tahun): ");
            scanf("%i", &masaKerja);
			if (masaKerja < 5){//kondisi masa kerja kurang dari 5 tahun
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
			 
		}else{
			printf("Jumlah anak tidak diketahui");//ditampilkan jika memasukan input yang tidak masuk akal misalnya bilangan negatif
		}break;
		
		default:
		printf("tidak memenuhi");//ditampilkan saat pilihan tidak sesuai permintaan misalnya memilih 4 yang tidak ada di pilihan
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
            else if (masaKerja >= 10){
                bonusMasaKerja = gajiPokok*15/100;
                bonusKotor = bonusMasaKerja;
                pajak = bonusKotor*10/100;
                bonusBersih = bonusKotor - pajak;
                printf ("bonus = Rp.%i", bonusBersih);
            }
    break;//menghentikan case 2
    
    default:
        printf("mohon pilih sesuai nomor di atas");//ditampilkan jika pilihan di luar 1 atau 2
	}


return 0;
}

