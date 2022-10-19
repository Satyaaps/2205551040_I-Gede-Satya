#include <stdio.h>

//fungsi rumus
            int prisma_segitiga(){
                int alas, tinggi, volume, luas_permukaan, tinggi_bangun, panjang;

                printf("masukkan nilai panjang alas segitiga: ");
                scanf("%d", &alas);
                printf("masukkan nilai tinggi alas segitiga: ");
                scanf("%d", &tinggi);
                printf("masukkan nilai  tinggi prisma segitiga: ");
                scanf("%d", &tinggi_bangun);

                volume = ((alas*tinggi)*0.5)*tinggi_bangun;

                luas_permukaan = (2*(0.5*alas*tinggi)) + (3*(alas*tinggi));

                printf("\nvolumenya adalah %d", volume);
                printf("\nluas permukaannya adalah %d\n", luas_permukaan);

                return 0;
            }

            int limas_segiempat(){
                int nilai_jari_jari, nilai_tinggi_bangun, nilai_panjang, nilai_lebar, tingggi, alas;
                float volume, luas_permukaan;

                    printf("\nmasukkan panjang alas segiempat : ");
                    scanf("%d", &nilai_panjang);
                    printf("masukkan lebar alas segiempat : ");
                    scanf("%d", &nilai_lebar);
                    printf("masukkan tinggi dari limas segiempat : ");
                    scanf("%d", &nilai_tinggi_bangun);
                    printf("masukkan tinggi dari segitiga tegak : ");
                    scanf("%d", &tingggi);
                    

                    volume = (((0.3333333333333333)*nilai_panjang*nilai_lebar)*nilai_tinggi_bangun);
                    luas_permukaan = ((nilai_panjang*nilai_lebar) + 4*(0.5*(nilai_panjang*tingggi)));

                    printf("\nluas permukaan limas segitiga adalah %.2f", luas_permukaan);
                    printf ("\nvolume pada limas segiempat adalah %.2f ",volume);
                return 0;
            }

// fungsi utama
int main(){
    int input ;
    char input_Y ;

    printf("\n=======selamat datang pada kalkulator perhitungan=======\n");
    printf("pilih bangun yang akan dihitung volumenya :\n");
    printf("1. Tabung\n");
    printf("2. Bola\n"); 
    printf("3. Limas Segiempat\n"); 
    printf("4. Prisma Segitiga\n"); 
    printf("5. Kerucut\n"); 
    printf("masukkan angka: ");
    scanf("%d", &input);
    if(input > 5 || input < 1){
        printf ("masukkan nilai degan benar !!\n");
        printf ("apakah ingin mengulangi kembali ?(Y / N)\n");
        scanf("%s", &input_Y);
        if (input_Y == 'Y'){
            return main();
        }

    }

    switch(input){
        case 1 :
        break;
        case 2 :
        break;
        case 3 :
        limas_segiempat();
        break;
        case 4 :
        prisma_segitiga();
        break;
        case 5 :
        break;
    }
    
    return 0;
}
