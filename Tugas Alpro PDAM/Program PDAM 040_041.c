#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define tempo 20
#define DENDA 10000

void kpa(), kpb(), kpc(), kpd(), kpe(), kpf(), kpg(), kph();
void annb1(), annb2(), anntb1(), anntb2();
void bnnb1(), bnnb2(), bnntb1(), bnntb2();
void cnnb1(), cnnb2(), cnntb1(), cnntb2();
void dnnb1(), dnnb2(), dnntb1(), dnntb2();
void ennb1(), ennb2(), enntb1(), enntb2();
void fnnb1(), fnnb2(), fnntb1(), fnntb2();
void gnnb1(), gnnb2(), gnntb1(), gnntb2();
void hnnb1(), hnnb2(), hnntb1(), hnntb2();
void jenis_fasilitas(), mengulang();


void cover(){
    system("cls");
    printf("\t\t\t======================================================\n");
    printf("\t\t\t||                                                  ||\n");
    printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
    printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
    printf("\t\t\t||                                                  ||\n");
    printf("\t\t\t||__________________________________________________||\n");
    printf("\t\t\t||                                                  ||\n");
    printf("\t\t\t|| I Gede Satya Ariya Putra Sangjaya   2205551040   ||\n");
    printf("\t\t\t|| I Dewa Gd Dharma Pawitra            2205551041   ||\n");
    printf("\t\t\t||                                                  ||\n");
    printf("\t\t\t======================================================\n");
}

void notaTagihan(char *nama, char *alamat, char *golongan, char *jenis_pelanggan, float adm, float bpm,  float pemakaian, float biaya, float total){

        time_t t;
        t = time(NULL);
        struct tm tm = *localtime(&t);
        float denda;
        float denda1;
        float finaltotal;
        denda = tm.tm_mday - tempo;
        if ((denda)<= 0){ 
            denda1 = denda + 0;
        }
        else if((denda) <=10){ 
            denda1 = DENDA;
        }
        finaltotal = biaya + denda1;
        
        system("cls");
        printf("\t\t\t===========================================================\n");
        printf("\t\t\t||              Program Tagihan Rekening Air             ||\n");
        printf("\t\t\t||           Algoritma dan Pemrograman kelas B           ||\n");
        printf("\t\t\t||_______________________________________________________||\n");
        printf("\t\t\t||                      NOTA TAGIHAN                     ||\n");
        printf("\t\t\t===========================================================\n");
        printf("\t\t\t|| Nama            : %s\n", nama);
        printf("\t\t\t|| Alamat          : %s\n", alamat);
        printf("\t\t\t|| Kelompok        : %s\n", jenis_pelanggan);
        printf("\t\t\t|| Golongan        : %s\n", golongan);
        printf("\t\t\t|| Tanggal         : %d-%d-%d\n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
        printf("\t\t\t|| Jatuh Tempo     : %d-%d-%d\n", tempo, tm.tm_mon+1, tm.tm_year+1900);
        printf("\t\t\t|| Pemakaian       : %.2f m3\n", pemakaian);
        printf("\t\t\t===========================================================\n");
        printf("\t\t\t|| Biaya Pemakaian : Rp. %.2f\n", total);
        printf("\t\t\t|| Administrasi    : RP. %.2f\n", adm);
        printf("\t\t\t|| Pemeliharaan    : Rp. %.2f\n", bpm);
        printf("\t\t\t|| Denda           : Rp. %.2f\n", denda1);
        printf("\t\t\t===========================================================\n");
        printf("\t\t\t|| Total           : Rp. %.2f\n", finaltotal);
        printf("\t\t\t===========================================================\n");
        system("pause");
        mengulang();
}

void mengulang(){
    int kondisi;
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Ingin Mengulang Program??                        ||\n");
        printf("\t\t\t|| 1. Mengulang program                             ||\n");
        printf("\t\t\t|| 2. Keluar dari program                           ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t>> "); scanf("%d", &kondisi);

            if(kondisi == 1){          
                jenis_fasilitas();        
            }
            else if(kondisi == 2){
                system("cls");
                printf("t\t\t                 Terimakasih...                    \n");
                exit (0);
            }
}
void jenis_rumahtangga(){
    int kondisi;
        system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                    RUMAH TANGGA                  ||\n");
        printf("\t\t\t||         Silahkan Masukan Lebar jalan anda        ||\n");
        printf("\t\t\t||              (Termasuk got dan berm)             ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| 1. 0 meter - 3,99 meter                          ||\n");
        printf("\t\t\t|| 2. 4 meter - 6,99 meter                          ||\n");
        printf("\t\t\t|| 3. 7 meter - 10 meter                            ||\n");
        printf("\t\t\t|| 4. > 10 meter                                    ||\n");
        printf("\t\t\t|| 5. Toko beserta kios                             ||\n");
        printf("\t\t\t||                                         0. keluar||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t>> "); scanf("%d", &kondisi);

			if(kondisi == 1){
				kpa();
			}
			else if(kondisi == 2){
				kpb();
			}
			else if(kondisi == 3){
				kpc();
			}
			else if(kondisi == 4){
				kpd();
			}
			else if(kondisi == 5){
				kpe();
			}
			else if(kondisi == 0){
				exit(0);
            }
            else{
					printf("\n\t\t\t==============================");
					printf("\n\t\t\t|     Silahkan menginput     |");
					printf("\n\t\t\t|      data yang benar       |");
					printf("\n\t\t\t==============================");
			}
    
}
void jenis_usaha(){
    int kondisi;
        system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                        USAHA                     ||\n");
        printf("\t\t\t||         Silahkan Masukan Lebar jalan anda        ||\n");
        printf("\t\t\t||              (Termasuk got dan berm)             ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| 1. 0 meter - 6,99 meter                          ||\n");
        printf("\t\t\t|| 2. 4 meter - 6,99 meter                          ||\n");
        printf("\t\t\t|| 3. > 10 meter                                    ||\n");
        printf("\t\t\t||                                         0. keluar||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t>> "); scanf("%d", &kondisi);

			if(kondisi == 1){
				kpf();
			}
			else if(kondisi == 2){
				kpg();
			}
			else if(kondisi == 3){
				kph();
			}
			else if(kondisi == 0){
				exit(0);
            }
            else{
					printf("\n\t\t\t==============================");
					printf("\n\t\t\t|     Silahkan menginput     |");
					printf("\n\t\t\t|      data yang benar       |");
					printf("\n\t\t\t==============================");
			}
}
void jenis_fasilitas(){
    int kondisi;
        system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                                                  ||\n");
        printf("\t\t\t|| 1. Rumah Tangga                                  ||\n");
        printf("\t\t\t|| 2. Usaha                                         ||\n");
        printf("\t\t\t||                                         0. keluar||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t>> "); scanf("%d", &kondisi);


            if(kondisi == 1){
                jenis_rumahtangga();
            }
            else if(kondisi == 2){
                jenis_usaha();
            }
            else if(kondisi == 0){
                exit(0);
            }
            else{
					printf("\n\t\t\t==============================");
					printf("\n\t\t\t|     Silahkan menginput     |");
					printf("\n\t\t\t|      data yang benar       |");
					printf("\n\t\t\t==============================");
			}
        
}

void kpa(){
    int kondisi;
        system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||          Besar penggunaan listrik anda           ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| 1.  450 VA                                       ||\n");
        printf("\t\t\t|| 2.  900 VA                                       ||\n");
        printf("\t\t\t|| 3. 1300 VA                                       ||\n");
        printf("\t\t\t|| 4. 1300 VA                                       ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| >> "); scanf("%d", &kondisi);

			if(kondisi == 1){
				annb1();
			}
			else if(kondisi == 2){
				annb2();
			}
			else if(kondisi == 3){
				anntb1();
			}
			else if(kondisi == 4){
				anntb2();
			}
			else if(kondisi == 0){
				exit(0);
            }
            else{
					printf("\n\t\t\t==============================");
					printf("\n\t\t\t|     Silahkan menginput     |");
					printf("\n\t\t\t|      data yang benar       |");
					printf("\n\t\t\t==============================");
			}
}
void kpb(){
    int kondisi;
        system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||          Besar penggunaan listrik anda           ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| 1.  450 VA                                       ||\n");
        printf("\t\t\t|| 2.  900 VA                                       ||\n");
        printf("\t\t\t|| 3. 1300 VA                                       ||\n");
        printf("\t\t\t|| 4. 1300 VA                                       ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| >> ");scanf("%d", &kondisi);

        
			if(kondisi == 1){
				bnnb1();
			}
			else if(kondisi == 2){
				bnnb2();
			}
			else if(kondisi == 3){
				bnntb1();
			}
			else if(kondisi == 4){
				bnntb2();
			}
			else if(kondisi == 0){
				exit(0);
            }
            else{
					printf("\n\t\t\t==============================");
					printf("\n\t\t\t|     Silahkan menginput     |");
					printf("\n\t\t\t|      data yang benar       |");
					printf("\n\t\t\t==============================");
			}
}
void kpc(){
    int kondisi;
        system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||          Besar penggunaan listrik anda           ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| 1.  450 VA                                       ||\n");
        printf("\t\t\t|| 2.  900 VA                                       ||\n");
        printf("\t\t\t|| 3. 1300 VA                                       ||\n");
        printf("\t\t\t|| 4. 1300 VA                                       ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| >> ");scanf("%d", &kondisi);
        
			if(kondisi == 1){
				cnnb1();
			}
			else if(kondisi == 2){
				cnnb2();
			}
			else if(kondisi == 3){
				cnntb1();
			}
			else if(kondisi == 4){
				cnntb2();
			}
			else if(kondisi == 0){
				exit(0);
            }
            else{
					printf("\n\t\t\t==============================");
					printf("\n\t\t\t|     Silahkan menginput     |");
					printf("\n\t\t\t|      data yang benar       |");
					printf("\n\t\t\t==============================");
			}
}
void kpd(){
    int kondisi;
        system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||          Besar penggunaan listrik anda           ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| 1.  450 VA                                       ||\n");
        printf("\t\t\t|| 2.  900 VA                                       ||\n");
        printf("\t\t\t|| 3. 1300 VA                                       ||\n");
        printf("\t\t\t|| 4. 1300 VA                                       ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| >> ");scanf("%d", &kondisi);

        
			if(kondisi == 1){
				dnnb1();
			}
			else if(kondisi == 2){
				dnnb2();
			}
			else if(kondisi == 3){
				dnntb1();
			}
			else if(kondisi == 4){
				dnntb2();
			}
			else if(kondisi == 0){
				exit(0);
            }
            else{
					printf("\n\t\t\t==============================");
					printf("\n\t\t\t|     Silahkan menginput     |");
					printf("\n\t\t\t|      data yang benar       |");
					printf("\n\t\t\t==============================");
			}
}
void kpe(){
    int kondisi;
        system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||          Besar penggunaan listrik anda           ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| 1.  450 VA                                       ||\n");
        printf("\t\t\t|| 2.  900 VA                                       ||\n");
        printf("\t\t\t|| 3. 1300 VA                                       ||\n");
        printf("\t\t\t|| 4. 1300 VA                                       ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| >> ");scanf("%d", &kondisi);

        
			if(kondisi == 1){
				ennb1();
			}
			else if(kondisi == 2){
				ennb2();
			}
			else if(kondisi == 3){
				enntb1();
			}
			else if(kondisi == 4){
				enntb2();
			}
			else if(kondisi == 0){
				exit(0);
            }
            else{
					printf("\n\t\t\t==============================");
					printf("\n\t\t\t|     Silahkan menginput     |");
					printf("\n\t\t\t|      data yang benar       |");
					printf("\n\t\t\t==============================");
			}
}
void kpf(){
    int kondisi;
        system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||          Besar penggunaan listrik anda           ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| 1.  450 VA                                       ||\n");
        printf("\t\t\t|| 2.  900 VA                                       ||\n");
        printf("\t\t\t|| 3. 1300 VA                                       ||\n");
        printf("\t\t\t|| 4. 1300 VA                                       ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| >> ");scanf("%d", &kondisi);

        
			if(kondisi == 1){
				fnnb1();
			}
			else if(kondisi == 2){
				fnnb2();
			}
			else if(kondisi == 3){
				fnntb1();
			}
			else if(kondisi == 4){
				fnntb2();
			}
			else if(kondisi == 0){
				exit(0);
            }
            else{
					printf("\n\t\t\t==============================");
					printf("\n\t\t\t|     Silahkan menginput     |");
					printf("\n\t\t\t|      data yang benar       |");
					printf("\n\t\t\t==============================");
			}
}
void kpg(){
    int kondisi;
        system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||          Besar penggunaan listrik anda           ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| 1.  450 VA                                       ||\n");
        printf("\t\t\t|| 2.  900 VA                                       ||\n");
        printf("\t\t\t|| 3. 1300 VA                                       ||\n");
        printf("\t\t\t|| 4. 1300 VA                                       ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| >> ");scanf("%d", &kondisi);

        
			if(kondisi == 1){
				gnnb1();
			}
			else if(kondisi == 2){
				gnnb2();
			}
			else if(kondisi == 3){
				gnntb1();
			}
			else if(kondisi == 4){
				gnntb2();
			}
			else if(kondisi == 0){
				exit(0);
            }
            else{
					printf("\n\t\t\t==============================");
					printf("\n\t\t\t|     Silahkan menginput     |");
					printf("\n\t\t\t|      data yang benar       |");
					printf("\n\t\t\t==============================");
			}
}
void kph(){
    int kondisi;
        system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||          Besar penggunaan listrik anda           ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| 1.  450 VA                                       ||\n");
        printf("\t\t\t|| 2.  900 VA                                       ||\n");
        printf("\t\t\t|| 3. 1300 VA                                       ||\n");
        printf("\t\t\t|| 4. 1300 VA                                       ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| >> ");scanf("%d", &kondisi);

        
			if(kondisi == 1){
				hnnb1();
			}
			else if(kondisi == 2){
				hnnb2();
			}
			else if(kondisi == 3){
				hnntb1();
			}
			else if(kondisi == 4){
				hnntb2();
			}
			else if(kondisi == 0){
				exit(0);
            }
            else{
					printf("\n\t\t\t==============================");
					printf("\n\t\t\t|     Silahkan menginput     |");
					printf("\n\t\t\t|      data yang benar       |");
					printf("\n\t\t\t==============================");
			}
}


void annb1(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Rumah Tangga";
    char jenis_pelanggan[] = "D1 - 1 / Non Niaga Bersubsidi";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||                Non Niaga Bersubsidi              ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); fflush(stdin); scanf("%[^\n]", nama); getchar(); 
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); //getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if((pemakaian) > 0 && (pemakaian)<=10){
            total = 17800;
        }
        else if((pemakaian) >10 && (pemakaian)<=20){
            total = pemakaian * 2060;
        }
        else if(pemakaian >20){
            total = pemakaian * 5880;
        }
        biaya = total + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, pemakaian, biaya, total);
}
void annb2(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Rumah Tangga";
    char jenis_pelanggan[] = "D1 - 2 / Non Niaga Bersubsidi";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||                Non Niaga Bersubsidi              ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); fflush(stdin); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if((pemakaian) > 0 && (pemakaian)<=10){
           total = 20600;
        }
        else if((pemakaian) >10 && (pemakaian)<=20){
            total = pemakaian * 2340;
        }
        else if(pemakaian >20){
            total = pemakaian * 5940;
        }
        biaya = total + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, pemakaian, biaya, total);
}
void anntb1(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Rumah Tangga";
    char jenis_pelanggan[] = "D1 - 3 / Non Niaga Tanpa Bersubsidi";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||             Non Niaga Tanpa Bersubsidi           ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); fflush(stdin); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if((pemakaian) > 0 && (pemakaian)<=10){
           total = 63400;
        }
        else if((pemakaian) >10 && (pemakaian)<=20){
            total = pemakaian * 9200;
        }
        else if(pemakaian >20){
            total = pemakaian * 9600;
        }
        biaya = total + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, pemakaian, biaya, total);    
}
void anntb2(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Rumah Tangga";
    char jenis_pelanggan[] = "D1 - 4 / Non Niaga Tanpa Bersubsidi";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||             Non Niaga Tanpa Bersubsidi           ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); fflush(stdin); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if((pemakaian) > 0 && (pemakaian)<=10){
           total = 64200;
        }
        else if((pemakaian) >10 && (pemakaian)<=20){
            total = pemakaian * 9350;
        }
        else if(pemakaian >20){
            total = pemakaian * 5650;
        }
        biaya = total + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, pemakaian, biaya, total);
}

void bnnb1(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Rumah Tangga";
    char jenis_pelanggan[] = "D2 - 1 / Non Niaga Bersubsidi";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||                Non Niaga Bersubsidi              ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); fflush(stdin); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if((pemakaian) > 0 && (pemakaian)<=10){
           total = 23400;
        }
        else if((pemakaian) >10 && (pemakaian)<=20){
            total = pemakaian * 2620;
        }
        else if(pemakaian >20){
            total = pemakaian * 6000;
        }
        biaya = total + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, pemakaian, biaya, total);
}
void bnnb2(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Rumah Tangga";
    char jenis_pelanggan[] = "D2 - 2 / Non Niaga Bersubsidi";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||                Non Niaga Bersubsidi              ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); fflush(stdin); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if((pemakaian) > 0 && (pemakaian)<=10){
           total = 26200;
        }
        else if((pemakaian) >10 && (pemakaian)<=20){
            total = pemakaian * 2900;
        }
        else if(pemakaian >20){
            total = pemakaian * 6060;
        }
        biaya = total + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, pemakaian, biaya, total);
}
void bnntb1(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Rumah Tangga";
    char jenis_pelanggan[] = "D2 - 3 / Non Niaga Tanpa Bersubsidi";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||             Non Niaga Tanpa Bersubsidi           ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); fflush(stdin); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if((pemakaian) > 0 && (pemakaian)<=10){
           total = 64900;
        }
        else if((pemakaian) >10 && (pemakaian)<=20){
            total = pemakaian * 9500;
        }
        else if(pemakaian >20){
            total = pemakaian * 9800;
        }
        biaya = total + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, pemakaian, biaya, total); 
}
void bnntb2(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Rumah Tangga";
    char jenis_pelanggan[] = "D2 - 4 / Non Niaga Tanpa Bersubsidi";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||             Non Niaga Tanpa Bersubsidi           ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); fflush(stdin); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if((pemakaian) > 0 && (pemakaian)<=10){
           total = 65700;
        }
        else if((pemakaian) >10 && (pemakaian)<=20){
            total = pemakaian * 9650;
        }
        else if(pemakaian >20){
            total = pemakaian * 9950;
        }
        biaya = total + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, pemakaian, biaya, total); 
}

void cnnb1(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Rumah Tangga";
    char jenis_pelanggan[] = "D3 - 1 / Non Niaga Bersubsidi";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||                Non Niaga Bersubsidi              ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 :"); fflush(stdin); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if((pemakaian) > 0 && (pemakaian)<=10){
           total = 29000;
        }
        else if((pemakaian) >10 && (pemakaian)<=20){
            total = pemakaian * 3180;
        }
        else if(pemakaian >20){
            total = pemakaian * 6120;
        }
        biaya = total + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, pemakaian, biaya, total);
}
void cnnb2(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Rumah Tangga";
    char jenis_pelanggan[] = "D3 - 2 / Non Niaga Bersubsidi";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||                Non Niaga Bersubsidi              ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 :"); fflush(stdin); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if((pemakaian) > 0 && (pemakaian)<=10){
           total = 31800;
        }
        else if((pemakaian) >10 && (pemakaian)<=20){
            total = pemakaian * 3460;
        }
        else if(pemakaian >20){
            total = pemakaian * 6180;
        }
        biaya = total + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, pemakaian, biaya, total);
}
void cnntb1(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Rumah Tangga";
    char jenis_pelanggan[] = "D3 - 3 / Non Niaga Tanpa Bersubsidi";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||             Non Niaga Tanpa Bersubsidi           ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); fflush(stdin); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if((pemakaian) > 0 && (pemakaian)<=10){
           total = 66400;
        }
        else if((pemakaian) >10 && (pemakaian)<=20){
            total = pemakaian * 9800;
        }
        else if(pemakaian >20){
            total = pemakaian * 10100;
        }
        biaya = total + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, pemakaian, biaya, total); 
}
void cnntb2(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Rumah Tangga";
    char jenis_pelanggan[] = "D3 - 4 / Non Niaga Tanpa Bersubsidi";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||             Non Niaga Tanpa Bersubsidi           ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); fflush(stdin); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if((pemakaian) > 0 && (pemakaian)<=10){
           total = 67200;
        }
        else if((pemakaian) >10 && (pemakaian)<=20){
            total = pemakaian * 9950;
        }
        else if(pemakaian >20){
            total = pemakaian * 10250;
        }
        biaya = total + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, pemakaian, biaya, total); 
}

void dnnb1(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Rumah Tangga";
    char jenis_pelanggan[] = "D4 - 1 / Non Niaga Bersubsidi";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||                Non Niaga Bersubsidi              ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); fflush(stdin); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if((pemakaian) > 0 && (pemakaian)<=10){
           total = 34600;
        }
        else if((pemakaian) >10 && (pemakaian)<=20){
            total = pemakaian * 3740;
        }
        else if(pemakaian >20){
            total = pemakaian * 6240;
        }
        biaya = total + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, pemakaian, biaya, total);
}
void dnnb2(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Rumah Tangga";
    char jenis_pelanggan[] = "D4 - 2 / Non Niaga Bersubsidi";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||                Non Niaga Bersubsidi              ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); fflush(stdin); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if((pemakaian) > 0 && (pemakaian)<=10){
           total = 37400;
        }
        else if((pemakaian) >10 && (pemakaian)<=20){
            total = pemakaian * 4020;
        }
        else if(pemakaian >20){
            total = pemakaian * 6300;
        }
        biaya = total + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, pemakaian, biaya, total);
}
void dnntb1(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Rumah Tangga";
    char jenis_pelanggan[] = "D4 - 3 / Non Niaga Tanpa Bersubsidi";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||             Non Niaga Tanpa Bersubsidi           ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); fflush(stdin); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if((pemakaian) > 0 && (pemakaian)<=10){
           total = 67900;
        }
        else if((pemakaian) >10 && (pemakaian)<=20){
            total = pemakaian * 10100;
        }
        else if(pemakaian >20){
            total = pemakaian * 10400;
        }
        biaya = total + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, pemakaian, biaya, total); 
}
void dnntb2(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Rumah Tangga";
    char jenis_pelanggan[] = "D4 - 4 / Non Niaga Tanpa Bersubsidi";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||             Non Niaga Tanpa Bersubsidi           ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); fflush(stdin); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if((pemakaian) > 0 && (pemakaian)<=10){
           total = 68700;
        }
        else if((pemakaian) >10 && (pemakaian)<=20){
            total = pemakaian * 10250;
        }
        else if(pemakaian >20){
            total = pemakaian * 10555;
        }
        biaya = total + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, pemakaian, biaya, total); 
}

void ennb1(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Rumah Tangga";
    char jenis_pelanggan[] = "D5 - 1 / Non Niaga Bersubsidi";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||                Non Niaga Bersubsidi              ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); fflush(stdin); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if((pemakaian) > 0 && (pemakaian)<=10){
           total = 69400;
        }
        else if((pemakaian) >10 && (pemakaian)<=20){
            total = pemakaian * 10400;
        }
        else if(pemakaian >20){
            total = pemakaian * 10700;
        }
        biaya = total + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, pemakaian, biaya, total);
}
void ennb2(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Rumah Tangga";
    char jenis_pelanggan[] = "D5 - 2 / Non Niaga Bersubsidi";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||                Non Niaga Bersubsidi              ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); fflush(stdin); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if((pemakaian) > 0 && (pemakaian)<=10){
           total = 70200;
        }
        else if((pemakaian) >10 && (pemakaian)<=20){
            total = pemakaian * 10550;
        }
        else if(pemakaian >20){
            total = pemakaian * 10850;
        }
        biaya = total + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, pemakaian, biaya, total);
}
void enntb1(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Rumah Tangga";
    char jenis_pelanggan[] = "D5 - 3 / Non Niaga Tanpa Bersubsidi";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||             Non Niaga Tanpa Bersubsidi           ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); fflush(stdin); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if((pemakaian) > 0 && (pemakaian)<=10){
           total = 70900;
        }
        else if((pemakaian) >10 && (pemakaian)<=20){
            total = pemakaian * 10700;
        }
        else if(pemakaian >20){
            total = pemakaian * 11000;
        }
        biaya = total + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, pemakaian, biaya, total); 
}
void enntb2(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Rumah Tangga";
    char jenis_pelanggan[] = "D5 - 4 / Non Niaga Tanpa Bersubsidi";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||             Non Niaga Tanpa Bersubsidi           ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); fflush(stdin); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if((pemakaian) > 0 && (pemakaian)<=10){
           total = 71700;
        }
        else if((pemakaian) >10 && (pemakaian)<=20){
            total = pemakaian * 10850;
        }
        else if(pemakaian >20){
            total = pemakaian * 11150;
        }
        biaya = total + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, pemakaian, biaya, total); 
}

void fnnb1(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Usaha / Niaga";
    char jenis_pelanggan[] = "E1 - 1 / Niaga Kecil";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||                  Niaga atau Usaha                ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); fflush(stdin); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if((pemakaian) > 0 && (pemakaian)<=10){
           total = 92000;
        }
        else if((pemakaian) >10 && (pemakaian)<=20){
            total = pemakaian * 9850;
        }
        else if(pemakaian >20){
            total = pemakaian * 10950;
        }
        biaya = total + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, pemakaian, biaya, total);
}
void fnnb2(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Usaha / Niaga";
    char jenis_pelanggan[] = "E1 - 2 / Niaga Kecil";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||                  Niaga atau Usaha                ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); fflush(stdin); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if((pemakaian) > 0 && (pemakaian)<=10){
           total = 95000;
        }
        else if((pemakaian) >10 && (pemakaian)<=20){
            total = pemakaian * 10150;
        }
        else if(pemakaian >20){
            total = pemakaian * 11250;
        }
        biaya = total + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, pemakaian, biaya, total);
}
void fnntb1(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Usaha / Niaga";
    char jenis_pelanggan[] = "E1 - 3 / Niaga Kecil";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||                  Niaga atau Usaha                ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); fflush(stdin); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if((pemakaian) > 0 && (pemakaian)<=10){
           total = 98000;
        }
        else if((pemakaian) >10 && (pemakaian)<=20){
            total = pemakaian * 10450;
        }
        else if(pemakaian >20){
            total = pemakaian * 11550;
        }
        biaya = total + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, pemakaian, biaya, total);
}
void fnntb2(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Usaha / Niaga";
    char jenis_pelanggan[] = "E1 - 4 / Niaga Kecil";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||                  Niaga atau Usaha                ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); fflush(stdin); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if((pemakaian) > 0 && (pemakaian)<=10){
           total = 101000;
        }
        else if((pemakaian) >10 && (pemakaian)<=20){
            total = pemakaian * 10750;
        }
        else if(pemakaian >20){
            total = pemakaian * 11850;
        }
        biaya = total + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, pemakaian, biaya, total);
}

void gnnb1(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Usaha / Niaga";
    char jenis_pelanggan[] = "E2 - 1 / Niaga Sedang";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||                  Niaga atau Usaha                ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); fflush(stdin); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if((pemakaian) > 0 && (pemakaian)<=10){
           total = 104000;
        }
        else if((pemakaian) >10 && (pemakaian)<=20){
            total = pemakaian * 11050;
        }
        else if(pemakaian >20){
            total = pemakaian * 12150;
        }
        biaya = total + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, pemakaian, biaya, total);
}
void gnnb2(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Usaha / Niaga";
    char jenis_pelanggan[] = "E2 - 2 / Niaga Sedang";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||                  Niaga atau Usaha                ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); fflush(stdin); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if((pemakaian) > 0 && (pemakaian)<=10){
           total = 107000;
        }
        else if((pemakaian) >10 && (pemakaian)<=20){
            total = pemakaian * 11350;
        }
        else if(pemakaian >20){
            total = pemakaian * 12550;
        }
        biaya = total + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, pemakaian, biaya, total);
}
void gnntb1(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Usaha / Niaga";
    char jenis_pelanggan[] = "E2 - 3 / Niaga Sedang";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||                  Niaga atau Usaha                ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); fflush(stdin); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if((pemakaian) > 0 && (pemakaian)<=10){
           total = 110000;
        }
        else if((pemakaian) >10 && (pemakaian)<=20){
            total = pemakaian * 11650;
        }
        else if(pemakaian >20){
            total = pemakaian * 13150;
        }
        biaya = total + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, pemakaian, biaya, total);
}
void gnntb2(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Usaha / Niaga";
    char jenis_pelanggan[] = "E2 - 4 / Niaga Sedang";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||                  Niaga atau Usaha                ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); fflush(stdin); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if((pemakaian) > 0 && (pemakaian)<=10){
           total = 113000;
        }
        else if((pemakaian) >10 && (pemakaian)<=20){
            total = pemakaian * 11950;
        }
        else if(pemakaian >20){
            total = pemakaian * 13950;
        }
        biaya = total + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, pemakaian, biaya, total);
}

void hnnb1(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Usaha / Niaga";
    char jenis_pelanggan[] = "E3 - 1 / Niaga Besar";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||                  Niaga atau Usaha                ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); fflush(stdin); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if((pemakaian) > 0 && (pemakaian)<=10){
           total = 116000;
        }
        else if((pemakaian) >10 && (pemakaian)<=20){
            total = pemakaian * 12250;
        }
        else if(pemakaian >20){
            total = pemakaian * 14750;
        }
        biaya = total + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, pemakaian, biaya, total);
}
void hnnb2(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Usaha / Niaga";
    char jenis_pelanggan[] = "E3 - 2 / Niaga Besar";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||                  Niaga atau Usaha                ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); fflush(stdin); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if((pemakaian) > 0 && (pemakaian)<=10){
           total = 119000;
        }
        else if((pemakaian) >10 && (pemakaian)<=20){
            total = pemakaian * 12550;
        }
        else if(pemakaian >20){
            total = pemakaian * 15050;
        }
        biaya = total + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, pemakaian, biaya, total);
}
void hnntb1(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Usaha / Niaga";
    char jenis_pelanggan[] = "E3 - 3 / Niaga Besar";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||                  Niaga atau Usaha                ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); fflush(stdin); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if((pemakaian) > 0 && (pemakaian)<=10){
           total = 122000;
        }
        else if((pemakaian) >10 && (pemakaian)<=20){
            total = pemakaian * 12850;
        }
        else if(pemakaian >20){
            total = pemakaian * 15850;
        }
        biaya = total + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, pemakaian, biaya, total);
}
void hnntb2(){
    system("cls");
    float total, biaya, pemakaianbulanini, pemakaianbulanlalu, pemakaian, denda, bpm, adm;
    char nama[100], alamat[100];
    char golongan[] = "Usaha / Niaga";
    char jenis_pelanggan[] = "E3 - 4 / Niaga Besar";
    system("cls");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t||           Program Tagihan Rekening Air           ||\n");
        printf("\t\t\t||        Algoritma dan Pemrograman kelas B         ||\n");
        printf("\t\t\t||__________________________________________________||\n");
        printf("\t\t\t||                      FORMULIR                    ||\n");
        printf("\t\t\t||                  Niaga atau Usaha                ||\n");
        printf("\t\t\t======================================================\n");
        printf("\t\t\t|| Nama                 : "); fflush(stdin); scanf("%[^\n]", nama); getchar();
        printf("\t\t\t|| Alamat               : "); scanf("%[^\n]", alamat); getchar();
        printf("\t\t\t|| Pemakaian bulan lalu : "); scanf("%f", &pemakaianbulanlalu);
        printf("\t\t\t|| Pemakaian bulan ini  : "); scanf("%f", &pemakaianbulanini);
        printf("\t\t\t======================================================\n");
        bpm = 5000;
        adm = 2000;
        pemakaian = pemakaianbulanini-pemakaianbulanlalu;
        if((pemakaian) > 0 && (pemakaian)<=10){
           total = 125000;
        }
        else if((pemakaian) >10 && (pemakaian)<=20){
            total = pemakaian * 13150;
        }
        else if(pemakaian >20){
            total = pemakaian * 16650;
        }
        biaya = total + adm + bpm;
        notaTagihan(nama, alamat, golongan, jenis_pelanggan, adm, bpm, pemakaian, biaya, total);
}

int main(){
    
    cover();
    system("pause");
    system("cls");

    jenis_fasilitas();
    system("pause");
    system("cls");

}
