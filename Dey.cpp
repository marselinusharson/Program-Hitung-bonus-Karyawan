#include <stdio.h>

int main(){
	int menikah;
	int anak, masakerja;
	int tunjangananak, dapatgapo, bonus, bonuskotor, bonusbersih, pajak;
	int tunjanganpasangan, gajipokok;

	printf("Masukkan Gajipokok Anda : ");
	scanf("%i", &gajipokok);
	printf("Status Perkawinan\n");
	printf("1. Menikah\n");
	printf("2. Belum Menikah\n");
	printf("Apakah Anda sudah Menikah : ");
	scanf("%i", &menikah);


	if(menikah = 1)
	{
		tunjanganpasangan = gajipokok*20/100;
		printf("Jumlah Anak \n");
		printf("1. Tidak mememiliki anak \n");
		printf("2. Mememiliki 1 anak \n");
		printf("3. Mememiliki 2 atau lebih anak \n");
		printf("Pilihan Anda : ");
		scanf("%i", &anak);
		switch(anak){
			case 1:
			tunjangananak = 0;
			printf("Masa Kerja Anda berapa Tahun : ");
			scanf("%i", &masakerja);

			if (masakerja < 5)
			{
				bonus = gajipokok*5/100;
				bonuskotor = tunjangananak + tunjanganpasangan + bonus;
				pajak = bonuskotor*15/100;
				bonusbersih = bonuskotor - pajak;

				printf("Bonus Bersih Anda Adalah : Rp%i", bonusbersih);
			}
			else if(masakerja = 5<=10)
			{
				bonus = gajipokok*10/100;
				bonuskotor = tunjangananak + tunjanganpasangan + bonus;
				pajak = bonuskotor*15/100;
				bonusbersih = bonuskotor - pajak;

				printf("Bonus Bersih Anda Adalah : Rp%i", bonusbersih);
			}
			else if(masakerja >=10)
			{
				bonus = gajipokok*15/100;
				bonuskotor = tunjangananak + tunjanganpasangan + bonus;
				pajak = bonuskotor*15/100;
				bonusbersih = bonuskotor - pajak;

				printf("Bonus Bersih Anda Adalah : Rp%i", bonusbersih);
			}
			break;
			case 2:
				tunjangananak = gajipokok*15/100;
				printf("Masa Kerja Anda berapa Tahun : ");
				scanf("%i", &masakerja);

				if (masakerja < 5)
			{
				bonus = gajipokok*5/100;
				bonuskotor = tunjangananak + tunjanganpasangan + bonus;
				pajak = bonuskotor*15/100;
				bonusbersih = bonuskotor - pajak;

				printf("Bonus Bersih Anda Adalah : Rp%i", bonusbersih);
			}
				else if(masakerja = 5<=10)
			{
				bonus = gajipokok*10/100;
				bonuskotor = tunjangananak + tunjanganpasangan + bonus;
				pajak = bonuskotor*15/100;
				bonusbersih = bonuskotor - pajak;

				printf("Bonus Bersih Anda Adalah : Rp%i", bonusbersih);
			}
				else if(masakerja  >=10)
			{
				bonus = gajipokok*15/100;
				bonuskotor = tunjangananak + tunjanganpasangan + bonus;
				pajak = bonuskotor*15/100;
				bonusbersih = bonuskotor - pajak;

				printf("Bonus Bersih Anda Adalah : Rp%i", bonusbersih);
			}
			break;
			case 3:
				tunjangananak = (gajipokok*15/100)*2;
				printf("Masa Kerja Anda berapa Tahun : ");
				scanf("%i", &masakerja);

				if (masakerja < 5)
			{
				bonus = gajipokok*5/100;
				bonuskotor = tunjangananak + tunjanganpasangan + bonus;
				pajak = bonuskotor*15/100;
				bonusbersih = bonuskotor - pajak;

				printf("Bonus Bersih Anda Adalah : Rp%i", bonusbersih);
			}
				else if(masakerja = 5<=10)
			{
				bonus = gajipokok*10/100;
				bonuskotor = tunjangananak + tunjanganpasangan + bonus;
				pajak = bonuskotor*15/100;
				bonusbersih = bonuskotor - pajak;

				printf("Bonus Bersih Anda Adalah : Rp%i", bonusbersih);
			}
				else if(masakerja >=10)
			{
				bonus = gajipokok*15/100;
				bonuskotor = tunjangananak + tunjanganpasangan + bonus;
				pajak = bonuskotor*15/100;
				bonusbersih = bonuskotor - pajak;

				printf("Bonus Bersih Anda Adalah : Rp%i", bonusbersih);
			}
			break;

	}
	}else if(menikah = 2){
		printf("Masa Kerja Anda berapa Tahun : ");
			scanf("%i", &masakerja);

			if (masakerja < 5)
			{
				tunjangananak=0;
				bonus = gajipokok*5/100;
				bonuskotor = bonus;
				pajak = bonuskotor*10/100;
				bonusbersih = bonuskotor - pajak;

				printf("Bonus Bersih Anda Adalah : Rp%i", bonusbersih);
			}
			else if(masakerja = 5<=10)
			{
				tunjangananak=0;
				bonus = gajipokok*10/100;
				bonuskotor = bonus;
				pajak = bonuskotor*10/100;
				bonusbersih = bonuskotor - pajak;

				printf("Bonus Bersih Anda Adalah : Rp%i", bonusbersih);
			}
			else if(masakerja >=10)
			{
				tunjangananak=0;
				bonus = gajipokok*15/100;
				bonuskotor = bonus;
				pajak = bonuskotor/10;
				bonusbersih = bonuskotor - pajak;

				printf("Bonus Bersih Anda Adalah : Rp%i", bonusbersih);
			}
	}
	return 0;
}
