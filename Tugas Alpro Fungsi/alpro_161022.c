//Nama      : I Gede Satya Ariya Putra Sangjaya
//NIM       : 2205551040
//Matkul    : Algoritma dan Pemrograman
//Progrm    : Keliling dan Luas Persegi

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int header(){
    printf("\t\t\t_________________________________________\n");
	printf("\t\t\t|     Program kalkulator Bahasa C       |\n");
	printf("\t\t\t=========================================\n");
}
int cover(){
    	printf("\t\t\t___________________________________________________________\n");
	printf("\t\t\t|                     KELOMPOK 7 ALPROG                   |\n");
	printf("\t\t\t|_________________________________________________________|\n");
	printf("\t\t\t|Nama :                                 NIM :             |\n");
	printf("\t\t\t|=> I Gede Satya Ariya Putra Sangjaya   => 2205551040     |\n");
	printf("\t\t\t===========================================================\n");
}
//Rumus dan menghitung keliling dan luas
int persegi(){
    float a;
    float keliling, luas;

    printf("\t\t\tKalkulator Luas Permukaan Persegi\n\n");
	printf("\t\t\tMasukan sisi : "); scanf("%f", &a);

    keliling = 4 * a;
    luas = a * a;
    printf("\t\t\tHasil Perhitungan : \n");
    printf("\t\t\tKeliling  : %f\n", keliling);
    printf("\t\t\tLuas      : %f\n", luas);
    fflush(stdin);
    printf("\n\n");
    return 0;
}

int aritmatika(void){
    int a, b, n, i, un, sum = 0; 
    int aritmatika;

    printf("\t\t\tKalkulator Deret Aritmatika\n\n");
	printf("\t\t\tMasukan pertama   : "); scanf("%d", &a);
    printf("\t\t\tMasukan beda      : "); scanf("%d", &b);
    printf("\t\t\tMasukan suku      : "); scanf("%d", &n);
    
    sum = (n * (a * a + (n - 1) * b))/2;
    un = a + (n - 1) * b;

    printf("Hasil perhitungan Jumlah suku dari deret aritmatikanya adalah : \n");
    for (i = a; i  <= un; i = i + b ){
        if (i != un){
            printf("%d + ", i);
        }
        else{
            printf("%d = %d", i, sum);
        }
    }
    fflush(stdin);
    printf("\n\n");
    return 0;
} 

int inputan(){
	char cek;
	int pilih;

	if(cek=scanf("%d%c", &pilih, &cek)!=2 || pilih<0 || pilih>2 || cek != '\n'){
		fflush(stdin);
		printf("\n\t\t\t____________________________________________");
		printf("\n\t\t\t|        Masukan Input Yang Benar!         |");
		printf("\n\t\t\t============================================");
		printf("\n\t\t\t == ");
		return inputan();
		system("cls");
	}else{
		return pilih;
	}
}

int main(){
    int menu, kondisi;
    char huruf;
	header();
	system("pause");
	system("cls");

	cover();
	system("pause");
	system("cls");

do{
	printf("\t\t\t__________________________________________________________\n");
	printf("\t\t\t|                KALKULATOR BANGUN RUANG                 |\n");
	printf("\t\t\t|========================================================|\n");
	printf("\t\t\t|1. KELILING DAN LUAS PERSEGI                            |\n");
	printf("\t\t\t|2. DERET ARITMATIKA                                     |\n");
	printf("\t\t\t|                                               0.(EXIT) |\n");
	printf("\t\t\t|========================================================|\n");
	printf("\t\t\t>> ");

    kondisi = inputan();

    if (kondisi == 1 || kondisi == 2){

    if(kondisi == 1){
        persegi();
    }
    else if(kondisi == 2){
        aritmatika();
    }
}
    printf("\n\t\t\tApakah ingin mengulang program? (y/t)\n ");
    printf("\t\t\t>>");
    scanf("%s", &huruf);
    system("cls");
        
    }while(huruf == 'y');

    if(huruf == 't')
    printf("\n\t\t\tTerimakasih...");
    return 0;
}
