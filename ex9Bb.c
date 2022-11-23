#include <stdio.h>
    void soma(int *a, int *bi, int c, int di){
  		*a = (*a+c);
  		*bi = (*bi+di);
	}

    void multi(int *a, int *bi, int c, int di){
  	    int cu, cu2;
            cu = ((*a*c)-(*bi*di));
  	        cu2 = ((*a*di)+(*bi*c));
    *a = cu;
    *bi = cu2;
	}

int main(){
	int a, bi, c, di;
	char ch;
	scanf("%d %d %c %d %d", &a, &bi, &ch, &c, &di);

	    if(ch == '+'){
		    soma(&a,&bi,c,di);
		    printf("%d + %di\n",a, bi);
        }
	    
        else{
		    multi(&a,&bi,c,di);
		    printf("%d + %di\n", a, bi);		
        }
        
return 0;
}