#include <stdio.h>

int main() {
    int i = 20;
    float f = 2.5;
    double d = 1.25;
    char c = 'c';
    printf("Moje zmienne wynosza i = %i f = %.2f d = %.2lf c = %c\n", i, f, d, c);
    scanf("%i %f %lf %c",&i,&f,&d,&c );
    printf("Moje zmienne wynosza i = %i f = %.2f d = %.2lf c = %c\n", i, f, d, c);
    return 0;
}
