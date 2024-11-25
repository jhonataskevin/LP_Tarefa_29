#include <stdio.h>

void calculadoraPesoIdeal(char genero, float altura, float *pesoIdeal){
	
	if(genero == 'M'){
		
		*pesoIdeal = 72.7 * altura - 58;
	}else{
		*pesoIdeal = 62.1 * altura - 44.7;
	}
}

int main(){
	
	float altura, pesoIdeal;
	char genero;
	
	printf("Informe o gernero com M para masculino ou F para feminino: \n");
	scanf("%c",  &genero);
	printf("Informe a altura: \n");
	scanf("%f", &altura);
	
	calculadoraPesoIdeal(genero,altura, &pesoIdeal);
	
	printf("Peso ideal e: %.1f\n", pesoIdeal);
	
	return 0;
}
