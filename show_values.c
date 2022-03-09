#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int value[3];
	int counter;

	 //Pede ao usuário que escolha os 3 valores a serem inseridos no sistema
	for(counter = 0; counter <3; counter++){
		printf("Digite 3 valores: ");
		scanf("%d", &value[counter]);
	}

	//Mostra ao usuário os valores escolhidos
	printf("Os valores escolhidos são: ");
	for(counter = 0; counter <3; ++counter){
		printf("%d ", value[counter]);
	}

	return EXIT_SUCCESS;
}