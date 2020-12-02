#include <stdio.h>

int main() {
    char dane[20];
    char dane_nowe[20];
    int indeks_spacji;

    printf("Podaj swoje imie i nazwisko: ");
    fgets(dane, sizeof(dane), stdin);

    printf("Twoje nazwisko i imie to: ");

    for(int i=0; i<sizeof(dane);i++){
        if(dane[i]==' ')
            indeks_spacji=i;
    }

    int j=0;
    for(int i=indeks_spacji+1; i<sizeof(dane)-indeks_spacji; i++){
        if(dane[i]=='\n'){
            break;
        }
        dane_nowe[j]=dane[i];
        j++;
    }

    dane_nowe[j]=' ';

    for(int i=0; i<indeks_spacji;i++){
        j++;
        dane_nowe[j]=dane[i];
    }

    printf("%s", dane_nowe);

    return 0;
}
