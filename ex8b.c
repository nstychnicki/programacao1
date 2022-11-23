#include <stdio.h>
int main(){
    typedef struct Ponto{
        float x, y;
    }Ponto;
    typedef struct Ret{
        Ponto p1, p2;
    }Ret;

    Ret r1;
    Ret r2;

    scanf("%f %f", &r1.p1.x, &r1.p1.y);
    scanf("%f %f", &r1.p2.x, &r1.p2.y);
    scanf("%f %f", &r2.p1.x, &r2.p1.y);
    scanf("%f %f", &r2.p2.x, &r2.p2.y);

    if(r2.p1.x < r1.p1.x || r2.p1.y < r1.p1.y || r2.p2.x > r1.p2.x || r2.p2.y > r1.p2.y){
        printf("o segundo retangulo nao esta contido no primeiro\n");
    }    
    else{
        printf("o segundo retangulo esta contido no primeiro\n");
    }

return 0;

}