#include <stdio.h>
#include <math.h>

int main(){
    float conta;
    typedef struct corpo{
        float altura, peso;
        char nome[256];
    }corpo;
    corpo c1;
    scanf("%f", &c1.altura);
    scanf("%f", &c1.peso);
    scanf("%c", c1.nome);
    conta = c1.peso/(pow(c1.altura,2));

    printf("%.3f\n", conta);


return 0;
}