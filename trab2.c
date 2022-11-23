/******************************************************************************
                   NATALY STYCHNICKI (173722)
*******************************************************************************/

#include <stdio.h>
int main(){
    int casos=0, f, dna;
    int A=0,B=0,C=0,D=0,E=0,F=0,A1=0,B1=0,C1=0,D1=0,E1=0,F1=0;
    char filamento1[12], filamento2[12];
    
    scanf("%d", &casos);
    for(f=0; f<casos; f++){
        scanf("%s", &filamento1[f]);
        scanf("%s", &filamento2[f]);
           
            for(dna=0; dna<12; dna++){
                switch (filamento1[dna])
                {
                case 'A':
                    A++;
                    break;
                case 'B':
                    B++;
                    break;
                case 'C':
                    C++;
                    break;
                case 'D':
                    D++;
                    break;
                case 'E':
                    E++;
                    break;
                case 'F':
                    F++;
                    break;
                default:
                    break;
                }

                switch (filamento2[dna])
                {
                case 'A':
                    A1++;
                    break;
                case 'B':
                    B1++;
                    break;
                case 'C':
                    C1++;
                    break;
                case 'D':
                    D1++;
                    break;
                case 'E':
                    E1++;
                    break;
                case 'F':
                    F1++;
                    break;
                default:
                    break;
                }
            }
    if (A==A1 && B==B1 && C==C1 && D==D1 && E==E1 && F==F1){
        printf("Caracteristicas Iguais\n");
    }
    else{
        printf("Caracteristicas Diferentes\n");
    }

    }

return 0;

}