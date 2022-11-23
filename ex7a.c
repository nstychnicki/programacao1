#include <stdio.h>
#include <string.h>
int main(){
    char string[80];
    int a;

    fgets(string, 80, stdin);
    for (a=strlen(string)-1; a >= 0; a--){
        if(string[a] != '\n'){
        printf("%c", string[a]);
        }
    }
        printf("\n");

return 0;
}

