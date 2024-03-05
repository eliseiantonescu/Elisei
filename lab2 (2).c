#include <stdlib.h>
#include <stdio.h>

int function(int x){
	x=x-2;
    if(x==0)
        return x;
        else
        x=function(x);
}
// nu imi place cum programezi, adauga si tu comentarii sa stiu si eu ce fac chestiile astea
int main(){
	int a=30, i=0;

	while (a>0){
		a=function(a);
		i++;
	}
	printf("%d", i);
	return 0;
}

