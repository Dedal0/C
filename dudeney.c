#include <stdio.h>

//Want to know if is a Dudeney Number?
// https://en.wikipedia.org/wiki/Dudeney_number

int sumardigitos(int a);
int esnumerodudeney(int sd, int d);

void main(){
	int a,sd,d;
	printf("Ingrese un numerof: ");
	scanf("%d",&a);
	sd = sumardigitos(a);
	printf("La suma de sus digitos es: %d \n",sd);
	d = esnumerodudeney(sd,a);
	if (d == 1){
		printf("Es dudeney.");
	}else{
		printf("no es dudeney");
	}

}

int sumardigitos(int a){
	int acum,c;
	acum = 0;
	c = 10;
	while(1==1){
		acum = acum + (a % c);
		if(a < 1){
			break;
		}else{
			a = a / c;
		}
	}
	
	return acum;

}

int esnumerodudeney(int sd, int b){
	int sum;

	sum = sd * sd * sd;
	if (sum == b){
		return 1;
	}else{
		return 0;
	}

}
