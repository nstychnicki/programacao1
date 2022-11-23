#include <stdio.h>
#include <string.h>
int main(){
    char pal1[250], pal2[250], pal3[250];
    int resultado, a, b;

    fgets(pal1, 250 , stdin);

    for(a=0; a < strlen(pal1); a++){
        if(pal1[a]>=65 && pal1[a]<=90){
        pal1[a]= pal1[a]+ 32;
        }
    }

    for(b=0; b<strlen(pal1)-1; b++){
        if(pal1[b] != '\n'){
        pal2[b] = pal1[b];
        }
    }
    pal2[249] = '\0';
    
    for(a=strlen(pal2), b=0; a>=0; a--, b++){
        pal3[b] = pal2[a];
    }
    
    //resultado = strcmp(pal1, pal2);
    printf("%s, %s", pal2, pal3);


return 0; 
}

pal2[b] = pal1[a];