#include <stdio.h>

int main(void) {
    int  urgenza;
    float km, peso, spedizione;
    printf("inserisci i kilometri da percorrere: ");
    scanf("%f", &km);
    printf("inserisco il peso del pacco: ");
    scanf("%f", &peso);
    printf("inserisci (1) se e' urgente, (0) se non lo e': ");
    scanf("%d", &urgenza);
    if (km < 100) {
        if (urgenza == 1) {
            spedizione = peso * 2.5;
        }else {
            spedizione = peso * 1;
        }}else if (km >= 100 && km <= 300){
            if (urgenza == 1) {
                spedizione = peso * 3.5;
            }else {
                spedizione = peso * 2;
            }}else if (km > 300) {
                if (urgenza == 1) {
                    spedizione = peso * 4;
                }else{
                    spedizione = peso * 3;}}
    printf("La spesa e': %.2f ", spedizione);
}