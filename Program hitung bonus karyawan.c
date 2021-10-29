/*Nama: Marselinus Harson Rewo NIM:2115091030
Kelas: A*/
#include <stdio.h>//file header input output

int main(){
    printf("==========Bonus Yang Akan Diterima Seorang Karyawan==========\n\n");
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

    char tanyaMasaKerja [20] = "Masa kerja (tahun):",//untuk teks pertanyaan masa kerja 
         tampilBonus [70] =  "Bonus bersih yang akan kamu terima adalah sebesar  Rp",//untuk teks menampilkan bonus
         tanyaStatus [50] = "Status:\n1.Menikah\n2.Belum menikah.\nPilihan: ",//teks untuk menanyakan status
         tanyaJmlAnak [90] = "Pilih jumlah anak: \n1. Tidak punya anak\n2. Punya 1 anak\n3. Punya >=2 anak:\nPilihan: ";//text untuk menanyakan jml anak

    printf("Masukkan gaji pokok: Rp.");
    scanf("%i", &gajiPokok);
    printf("%s", tanyaStatus);
    scanf("%i", &status);
    
    switch (status)
    {
        case 1: //kondisi 1 user memilih No.1 alias Sudah Menikah 
        tunjanganPasangan = gajiPokok*20/100;//memberi nilai besar tunjangan pasangan ke dalam variabel tunjanganPasangan
        printf("%s", tanyaJmlAnak);//minta user input jumlah anak dengan memilih sesuai angka
        scanf("%i", &jmlhAnak);//terima input

        switch (jmlhAnak)//pemilihan jumlah anak
        {
            case  1://case pertama user memilih no. 1 alias anak =  0
            printf("\n%s", tanyaMasaKerja);
            scanf("%i", &masaKerja);

            //simple conditional with negation. Karena ada 3 kemungkinan kandisi masa kerja 
            if (masaKerja < 5)
            {
                bonusMasaKerja = gajiPokok*5/100;
                bonusKotor = tunjanganPasangan + bonusMasaKerja;
                pajak = bonusKotor*15/100;
                bonusBersih = bonusKotor - pajak;
                printf("%s.%i", tampilBonus,bonusBersih);
            }
            else if( masaKerja >= 5 && masaKerja < 10)
            {    
                bonusMasaKerja = gajiPokok*10/100;
                bonusKotor = tunjanganPasangan + bonusMasaKerja;
                pajak = bonusKotor*15/100;
                bonusBersih = bonusKotor - pajak;
                printf("%s.%i", tampilBonus, bonusBersih);  
            }
            else if (masaKerja >= 10)
            {
                bonusMasaKerja = gajiPokok*15/100;
                bonusKotor = tunjanganPasangan + bonusMasaKerja;
                pajak = bonusKotor*15/100;
                bonusBersih = bonusKotor - pajak;
                printf("%s.%i", tampilBonus, bonusBersih);   
            }
            break;//memberhentikan eksekusi case pertama

            case 2:
            printf("%s", tanyaMasaKerja);
            scanf("%i", &masaKerja);
            tunjAnak = gajiPokok*15/100;
            
            if (masaKerja < 5)
            {
                bonusMasaKerja = gajiPokok*5/100;
                bonusKotor = tunjanganPasangan + tunjAnak + bonusMasaKerja ;
                pajak = bonusKotor*15/100;
                bonusBersih = bonusKotor - pajak;
                printf("%s.%i", tampilBonus, bonusBersih);
            }
            else if( masaKerja >= 5 && masaKerja < 10)
            {
                bonusMasaKerja = gajiPokok*10/100;
                bonusKotor = tunjanganPasangan + tunjAnak + bonusMasaKerja;
                pajak = bonusKotor*15/100;
                bonusBersih = bonusKotor - pajak;
                printf("%s.%i", tampilBonus, bonusBersih);  
            }
            else if(masaKerja >= 10)
            {
                bonusMasaKerja = gajiPokok*15/100 ;
                bonusKotor = tunjanganPasangan + tunjAnak + bonusMasaKerja;
                pajak = bonusKotor*15/100;
                bonusBersih = bonusKotor - pajak;
                printf("%s.%i", tampilBonus, bonusBersih);
            }
            break;

            case 3://user mempunyai 2 anak atau lebih  karena yang mendapat tunjangan maksimal hanya 2 orang maka perlu nested conditional with negation disini
            printf ("banyak anak : ");
            scanf("%i", &banyakAnak);//menerima input jumlah anak

			if (banyakAnak <= 2)//kondisi saat anaknya 2 orang atau kurang
            {
				tunjAnak = gajiPokok*15/100 * banyakAnak;
                printf("%s", tanyaMasaKerja);
                scanf("%i", &masaKerja);

				if (masaKerja < 5)//if dalam if kondisi untuk masa kerja < 5 tahun
                {    
                    bonusMasaKerja = gajiPokok*5/100;
                    bonusKotor = tunjanganPasangan + tunjAnak + bonusMasaKerja ;
                    pajak = bonusKotor*15/100;
                    bonusBersih = bonusKotor - pajak;
                    printf("%s.%i", tampilBonus, bonusBersih);
                }

                else if( masaKerja >= 5 && masaKerja < 10)//else if di dalam if untuk kondosi   5=<masa kerja <10
                {
                    bonusMasaKerja = gajiPokok*10/100;
                    bonusKotor = tunjanganPasangan + tunjAnak + bonusMasaKerja;
                    pajak = bonusKotor*15/100;
                    bonusBersih = bonusKotor - pajak;
                    printf("%s.%i", tampilBonus, bonusBersih);  
                }
                
                else if(masaKerja >= 10)
                {
                    bonusMasaKerja = gajiPokok*15/100 ;
                    bonusKotor = tunjanganPasangan + tunjAnak + bonusMasaKerja;
                    pajak = bonusKotor*15/100;
                    bonusBersih = bonusKotor - pajak;
                    printf("%s.%i", tampilBonus, bonusBersih);
                }
				//Akhir dari Nested conditional with negation

		    }//Penutup if untuk kondisi banyak anak yang pertama

            else if (banyakAnak > 2)//kondisi disaat anaknya lebih dari dua 
            {
			    tunjAnak = (gajiPokok * 15/100)*2;//hanya dua anak yang dapat junjangan sehingga dikali 2
			    printf("%s", tanyaMasaKerja);
                scanf("%i", &masaKerja);

			    if (masaKerja < 5)//kondisi masa kerja kurang dari 5 tahun
                {//kondisi masa kerja kurang dari 5 tahun
                    bonusMasaKerja = gajiPokok*5/100;
                    bonusKotor = tunjanganPasangan + tunjAnak + bonusMasaKerja ;
                    pajak = bonusKotor*15/100;
                    bonusBersih = bonusKotor - pajak;
                    printf("%s.%i", tampilBonus, bonusBersih);
                }

                else if( masaKerja >= 5 && masaKerja < 10)//Kondisi 5 tahun =<masakerja<10 tahun 
                {
                    bonusMasaKerja = gajiPokok*10/100;
                    bonusKotor = tunjanganPasangan + tunjAnak + bonusMasaKerja;
                    pajak = bonusKotor*15/100;
                    bonusBersih = bonusKotor - pajak;
                    printf("%s.%i", tampilBonus, bonusBersih);  
                }

                else if(masaKerja >= 10)//kondisi masa kerja sudah 10 tahun ke atas
                {
                    bonusMasaKerja = gajiPokok*15/100 ;
                    bonusKotor = tunjanganPasangan + tunjAnak + bonusMasaKerja;
                    pajak = bonusKotor*15/100;
                    bonusBersih = bonusKotor - pajak;
                    printf("%s.%i", tampilBonus, bonusBersih);
                }
			 
		    }//Penutup else if kondisi jumlah anak lebih dari 2
            else
            {
			    printf("Pilihan anda tidak sesuai");//ditampilkan jika memasukan input yang tidak masuk akal misalnya bilangan negatif
		    }
            break;//break untuk case 2 Swith case jumlah anak
		
		    default:
		    printf("piihan anda tidak sesuai");//ditampilkan saat pilihan tidak sesuai permintaan misalnya memilih 4 yang tidak ada di pilihan
	    }//Penurup switch case jumlah anak

		break;//break untuk case 1 status

		case 2://Case 2 saat user memilih No.2  alias Belum menikah
        printf("%s", tanyaMasaKerja);
        scanf("%i", &masaKerja);

        //simple conditionalwith negation untuk kondisi masa kerja
        if (masaKerja < 5)
        {
            bonusMasaKerja = gajiPokok*5/100;
            bonusKotor = bonusMasaKerja;
            pajak = bonusKotor*10/100;
            bonusBersih = bonusKotor - pajak;
            printf("%s.%i", tampilBonus, bonusBersih);
        }

        else if( masaKerja >= 5 && masaKerja < 10)
        {
            bonusMasaKerja = gajiPokok*10/100;
            bonusKotor = bonusMasaKerja;
            pajak = bonusKotor*10/100;
            bonusBersih = bonusKotor - pajak;
            printf("%s.%i", tampilBonus, bonusBersih);  
        }
        else if (masaKerja >= 10)
        {
            bonusMasaKerja = gajiPokok*15/100;
            bonusKotor = bonusMasaKerja;
            pajak = bonusKotor*10/100;
            bonusBersih = bonusKotor - pajak;
            printf ("%s.%i",tampilBonus, bonusBersih);
        }
    break;//menghentikan case 2 status
    
    default:
        printf("Pilihan anda tidak sesuai");//ditampilkan jika pilihan di luar 1 atau 2
        
	}//Penutup untuk switch case pemilihan status


return 0;

}

