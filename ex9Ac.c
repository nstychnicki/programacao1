#include <stdio.h>
#include <math.h>
float conta(float num1, char op, float num2);
int main(){
    float x, y;
    char c;
    scanf("%f%c%f", &x, &c, &y);
    printf("%.3f\n", conta(x, c, y));

    return 0;
}

float conta(float num1, char op, float num2){
    float contaa;
    if(op == '+'){
        contaa = num1 + num2;
    }

    if(op == '-'){
        contaa = num1 - num2;
    }

    if(op == '*'){
        contaa = num1 * num2;
    }

    if(op == '/'){
        contaa = num1 / num2;
    }

    if(op == '^'){
        contaa = pow(num1,num2);
    }

    return(contaa);
}