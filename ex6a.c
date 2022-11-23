#include <stdio.h>
int main(){
    int a, b, c, d;

    scanf("%d %d",&b,&c);
    int m1[b][c];
        for(a=0; a<b; a++){
            for(d=0; d<c; d++){
                scanf("%d", &m1[a][d]);
            }
        }
    
    for(a=0; a<c; a++){
            for(d=0; d<b; d++){
                printf("%d ", m1[d][a]);
            }
                printf("\n");
        }
    
return 0;

}