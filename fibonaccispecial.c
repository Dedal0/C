#include <stdio.h>


int sumadigitos();
void fibonacci();

void main(){
	fibonacci();

}

void fibonacci(){

	int tmp=0,fb=0;
	int a=1;
	int i,d,c;
	c = 0;
	while(c<100){
		fb = a + tmp;
		tmp = a;
		a = fb;
		d = sumadigitos(a);
		if (d == 1){
			printf("Digito mayor 7: %d\n",a);
			c = c + 1;
		}
		
	}
	
}


int sumadigitos(int a){
	int acum,c;
	acum = 0;
	c = 10;
	while(1==1){
		acum = acum + (a % c);
		if(a > 0){
			a = a / c;
		}else{
			break;
		}
	}
	
	if (acum>7){

		return 1;

	}

}
