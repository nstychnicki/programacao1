#include <stdio.h>
#include <string.h>
int main(){
    int letras[62] = {0},cont = 0,x,y;
    char quebra[5] = {'F','I','M','\n','\0'}, tudo[1002], final[62] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
    'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','0','1','2','3','4','5','6','7','8','9'};

    while(strcmp(tudo,quebra) != 0){
    fgets(tudo, 1002, stdin);
    if(strcmp(tudo, quebra) == 0){
        break;
    }
    for(x=0; x<strlen(tudo); x++){
        if(tudo[x] == 'A'){letras[0]++;cont++;}
        if(tudo[x] == 'B'){letras[1]++;cont++;}
        if(tudo[x] == 'C'){letras[2]++;cont++;}
        if(tudo[x] == 'D'){letras[3]++;cont++;}
        if(tudo[x] == 'E'){letras[4]++;cont++;}
        if(tudo[x] == 'F'){letras[5]++;cont++;}
        if(tudo[x] == 'G'){letras[6]++;cont++;}
        if(tudo[x] == 'H'){letras[7]++;cont++;}
        if(tudo[x] == 'I'){letras[8]++;cont++;}
        if(tudo[x] == 'J'){letras[9]++;cont++;}
        if(tudo[x] == 'K'){letras[10]++;cont++;}
        if(tudo[x] == 'L'){letras[11]++;cont++;}
        if(tudo[x] == 'M'){letras[12]++;cont++;}
        if(tudo[x] == 'N'){letras[13]++;cont++;}
        if(tudo[x] == 'O'){letras[14]++;cont++;}
        if(tudo[x] == 'P'){letras[15]++;cont++;}
        if(tudo[x] == 'Q'){letras[16]++;cont++;}
        if(tudo[x] == 'R'){letras[17]++;cont++;}
        if(tudo[x] == 'S'){letras[18]++;cont++;}
        if(tudo[x] == 'T'){letras[19]++;cont++;}
        if(tudo[x] == 'U'){letras[20]++;cont++;}
        if(tudo[x] == 'V'){letras[21]++;cont++;}
        if(tudo[x] == 'W'){letras[22]++;cont++;}
        if(tudo[x] == 'X'){letras[23]++;cont++;}
        if(tudo[x] == 'Y'){letras[24]++;cont++;}
        if(tudo[x] == 'Z'){letras[25]++;cont++;}
        if(tudo[x] == 'a'){letras[26]++;cont++;}
        if(tudo[x] == 'b'){letras[27]++;cont++;}
        if(tudo[x] == 'c'){letras[28]++;cont++;}
        if(tudo[x] == 'd'){letras[29]++;cont++;}
        if(tudo[x] == 'e'){letras[30]++;cont++;}
        if(tudo[x] == 'f'){letras[31]++;cont++;}
        if(tudo[x] == 'g'){letras[32]++;cont++;}
        if(tudo[x] == 'h'){letras[33]++;cont++;}
        if(tudo[x] == 'i'){letras[34]++;cont++;}
        if(tudo[x] == 'j'){letras[35]++;cont++;}
        if(tudo[x] == 'k'){letras[36]++;cont++;}
        if(tudo[x] == 'l'){letras[37]++;cont++;}
        if(tudo[x] == 'm'){letras[38]++;cont++;}
        if(tudo[x] == 'n'){letras[39]++;cont++;}
        if(tudo[x] == 'o'){letras[40]++;cont++;}
        if(tudo[x] == 'p'){letras[41]++;cont++;}
        if(tudo[x] == 'q'){letras[42]++;cont++;}
        if(tudo[x] == 'r'){letras[43]++;cont++;}
        if(tudo[x] == 's'){letras[44]++;cont++;}
        if(tudo[x] == 't'){letras[45]++;cont++;}
        if(tudo[x] == 'u'){letras[46]++;cont++;}
        if(tudo[x] == 'v'){letras[47]++;cont++;}
        if(tudo[x] == 'w'){letras[48]++;cont++;}
        if(tudo[x] == 'x'){letras[49]++;cont++;}
        if(tudo[x] == 'y'){letras[50]++;cont++;}
        if(tudo[x] == 'z'){letras[51]++;cont++;}
        if(tudo[x] == '0'){letras[52]++;cont++;}
        if(tudo[x] == '1'){letras[53]++;cont++;}
        if(tudo[x] == '2'){letras[54]++;cont++;}
        if(tudo[x] == '3'){letras[55]++;cont++;}
        if(tudo[x] == '4'){letras[56]++;cont++;}
        if(tudo[x] == '5'){letras[57]++;cont++;}
        if(tudo[x] == '6'){letras[58]++;cont++;}
        if(tudo[x] == '7'){letras[59]++;cont++;}
        if(tudo[x] == '8'){letras[60]++;cont++;}
        if(tudo[x] == '9'){letras[61]++;cont++;}
    }
    }
        printf("Caracteres Maiusculos:\n");
        for(x=0; x<26; x++){ 
            float conta = letras[x];
            conta = conta/cont;
            printf("%c: ",final[x]);
            for(y=0; y<letras[x]; y++){
                printf("*");
            }
            printf(" (%d - %.2f)\n", letras[x], conta);
        }
        printf("\n");
        printf("Caracteres Minusculos:\n");          
        for(x=26; x<52; x++){ 
            float conta = letras[x];
            conta = conta/cont;
            printf("%c: ",final[x]);
            for(y=0; y<letras[x]; y++){
                printf("*");
            }
            printf(" (%d - %.2f)\n", letras[x], conta);
        }
        printf("\n");
        printf("Digitos:\n");           
        for(x=52; x<62; x++){ 
            float conta = letras[x];
            conta = conta/cont;
            printf("%c: ",final[x]);
            for(y=0; y<letras[x]; y++){
                printf("*");
            }
            printf(" (%d - %.2f)\n", letras[x], conta);
        }

    return 0;
}