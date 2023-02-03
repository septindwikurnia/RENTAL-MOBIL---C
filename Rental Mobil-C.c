#include <stdio.h>
#include <string.h>
//library

void selamat(char selamat[]){
	printf("\n%s!\n", selamat); //implementasi parameter
}

int terimakasih(){
	printf("TERIMAKASIH TELAH MERENTAL MOBIL!\n"); //implementasi fungsi
} 
void gagal(){
	printf("\nGAGAL UNTUK MERENTAL MOBIL!\nSILAHKAN COBA LAGI!\n"); //implementasi fungsi
}
int main()
{
	
   //variabel
	char nama[50], mobill[][10]={"AVANZA","BRIO","XENIA"};
    int mobil,harga,durasi,x,i;
	int mbl1=400000,mbl2=450000,mbl3=500000;
	const float pajak = 0.1;
	float ppn,kembalian,totalsewa,hasil,uang;
	
    //input output 
    printf("|	-------------------------------------------	|\n");
	printf("|	<< SELAMAT DATANG DI RENTAL MOBIL SEPTIN >>	|\n");
	printf("|	-------------------------------------------	|\n");
	printf("NO		MERK MOBIL		HARGA PERHARI	\n");
    printf("1.		AVANZA			Rp.400.000 \n");
    printf("2.		BRIO			Rp.450.000 \n");
    printf("3. 		XENIA			Rp.500.000 \n");
    printf("|	-------------------------------------------	|\n\n");
    printf("|	<<	 FORM PENGISIAN DATA RENTAL MOBIL >>	|\n\n");
    printf("NAMA PENYEWA = ");
	scanf("%[^\n]%*c", nama);
	printf("MASUKKAN JUMLAH MOBIL = ");
    scanf("%d", &x);
    
    //perulangan for
	for(i = 1; i <= x; i++)
	{
    printf("\nNO MOBIL %d	= ", i);
    scanf("%d", &mobil);
    printf("LAMA SEWA(hari) = ");
    scanf("%d", &durasi);
	
	//switch case
	switch(mobil){
		case 1:
		{
			printf("Mobil yang dipilih = %s\n",mobill[0]);
			harga = durasi*mbl1;
			printf("Harga sewa mobil = Rp.%d\n",harga);
			ppn = harga*pajak;
			printf("TERDAPAT PPN SEBESAR 10 PERSEN\n");
			totalsewa = harga+ppn;
			printf("Total Sewa = Rp.%2.f\n", totalsewa);
			break;		
			
	}
		case 2:
		{
			printf("Mobil yang dipilih = %s\n",mobill[1]);
			harga = durasi*mbl2;
			printf("Harga sewa mobil = Rp.%d\n",harga);
			ppn = harga*pajak;
			printf("TERDAPAT PPN SEBESAR 10 PERSEN\n");
			totalsewa = harga+ppn;
			printf("Total Sewa = Rp.%2.f\n", totalsewa);
			break;
	}
	
		case 3:
		{
			printf("Mobil yang dipilih = %s\n",mobill[2]);
			harga = durasi*mbl3;
			printf("Harga sewa mobil = Rp.%d\n",harga);
			ppn = harga*pajak;
			printf("TERDAPAT PPN SEBESAR 10 PERSEN\n");
			totalsewa = harga+ppn;
			printf("Total Sewa = Rp.%2.f\n", totalsewa);
			break;
		}
	default:
	{
		printf("Mobil yang kamu pilih tidak tersedia");
		break;
	}
	}
		hasil = hasil+totalsewa;
	}
	
	printf("\nTOTAL YANG HARUS DIBAYAR = Rp.%2.f \n", hasil);
    printf("MASUKKAN NOMINAL UANG = Rp.");
    scanf("%f", &uang);
    kembalian = uang - hasil;
    
    //kondisi
    if(uang>=hasil){ 
		printf("KEMBALIAN UANG = Rp.%.0f \n", kembalian);
		selamat("SELAMAT ANDA TELAH BERHASIL MERENTAL MOBIL!!"); //implementasi parameter
		terimakasih(); //implementasi fungsi
	}
	else
	{
		printf("MAAF UANG ANDA TIDAK CUKUP!\n");
		gagal(); //implementasi fungsi
	}
	
	return 0;
	
}