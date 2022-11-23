#include <stdio.h>
int main(){
    int a, b, c=0, x, ci, cf, pos, somakm=0;
    
    scanf("%d", &x);

    int cv[x];
    for(a=0; a<x; a++){
       cv[a] = -1;
    }

    int caminho[x];
    for(a=0; a<x; a++){
       caminho[a] = -1;
    }

    int mat[x][x];
       for(a=0; a<x; a++){
           for(b=0; b<x; b++){
               scanf("%d", &mat[a][b]);
           }
       }
    scanf("%d", &ci);
    scanf("%d", &cf);

    cv[ci] = 1;
    caminho[0]= ci;
    
    int melhordist;
    while(ci != cf){
        melhordist = 0;
        if(ci == cf){
            break;
        }
        
        for(b=0; b<x; b++){
           
            if(mat[ci][b] == 0 || cv[b] == 1){
                continue;
            }
            
            if(melhordist > mat[ci][b] || melhordist == 0){
                melhordist = mat[ci][b];
                pos = b;
            }
        }
        somakm = somakm + melhordist;
        cv[pos] = 1; 
        ci = pos;
        c++;
        caminho[c] = pos;
    }

    printf("Distancia total entre %d e %d: %d\n", caminho[0], cf, somakm);

            printf("Caminho: %d", caminho[0]);
    for(a=1; a<x; a++){
        if( caminho[a] != -1){
            printf("->%d", caminho[a]);
        }
    }
            printf("\n");

return 0;
}
