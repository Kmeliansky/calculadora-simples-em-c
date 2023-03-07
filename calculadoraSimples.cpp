#include<stdio.h>

int main(){
	int tipo, resp;
	float n1, n2;
	
	printf("Digite os seguintes numero para realizar o calculo desejado: \n");
	printf("1 - soma \n");
	printf("2 - subtraçao \n");
	printf("3 - divisao \n");
	printf("4 - multiplicacao \n");
	scanf("%d", &tipo);
	
	switch (tipo){
		 case 1:
		 	printf("digite o primeiro numero:");
		 	scanf("%f",&n1);
		 	printf("digite o segundo numero: ");
		 	scanf("%f",&n2);
		 	
			resp = n1+n2;
			break;
		 case 2:
		 	printf("digite o primeiro numero:");
		 	scanf("%f",&n1);
		 	printf("digite o segundo numero: ");
		 	scanf("%f",&n2);
		 	
		 	resp = n1-n2;
		 	break;
		 
		 case 3:
		 	printf("digite o primeiro numero:");
		 	scanf("%f",&n1);
		 	printf("digite o segundo numero: ");
		 	scanf("%f",&n2);
		 	
		 	resp = n1/n2;
			break;
		 case 4:
		 	printf("digite o primeiro numero:");
		 	scanf("%f",&n1);
		 	printf("digite o segundo numero: ");
		 	scanf("%f",&n2);
		 	
		 	resp = n1*n2;
		 	break;	
	}
	printf("Resultado: %d",resp);
	return 0;
}
