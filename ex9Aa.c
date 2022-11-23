#include <stdio.h>

float volume_esfera(float a){
    return ( (4*a*a*a*3.14159)/3);     
}

int main(){
    float x;
    scanf("%f", &x);
    printf("%.2f\n", volume_esfera(x));

    return 0;
}