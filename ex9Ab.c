#include <stdio.h>
#include <math.h>

float media(float nota1, float nota2, char letra);

int main(){
    float x,y;
    char c;
    scanf("%c", &c);
    scanf("%f %f", &x, &y);
    printf("%.3f\n", media(x, y, c));
    return 0;
}

float media(float nota1, float nota2, char letra){
    float mediaa;
    if(letra == 'A'){
        mediaa = (nota1 + nota2)/2;
    }
    if(letra == 'B'){
        mediaa = sqrt(nota1 * nota2);
    }
    return (mediaa);
}