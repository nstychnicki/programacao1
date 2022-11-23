#include <stdio.h>

void ordem(int valores[], int tamanho);
int main(){
    int x, tam;

    scanf("%d", &tam);
    int valores[tam];
    for(x=0; x<tam; x++){
        scanf("%d", &valores[x]);
    }

    ordem (valores, tam);
    printf("maior valor: %d\n", valores[tam-1]);
    printf("menor valor: %d\n", valores[0]);
    
    return 0;

}

void ordem(int valores[], int tamanho){
    int x,y,z;
    for(x=0; x<tamanho; x++){
        for(y=x+1; y<tamanho; y++){
            if(valores[x]> valores[y]){
                z = valores[x];
                valores[x] = valores[y];
                valores[y] = z;
            }
        }
    }
}