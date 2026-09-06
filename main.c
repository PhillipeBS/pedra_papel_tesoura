#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

void mostrar_escolha(int escolha);
void verificar_vencedor(int n_maquina, int n_usuario);

int main(){
	int n_usuario, n_maquina;

	setlocale(LC_ALL,"Portuguese");

	srand(time(NULL));

	printf("Pedra, Papel e Tesoura\n");
	printf("\nMenu:\n1 - Pedra\n2 - Papel\n3 - Tesoura\n0 - Encerrar\n");
	

	while(1) {
		n_maquina = rand() % 3 + 1;
		
		printf("\n> ");
		scanf("%d",&n_usuario);

		if(n_usuario == 0) {
			break;
		}
		
		else if((n_usuario > 3) || (n_usuario < 0)) {
			printf("\nEscolha uma opção válida!\n");
			continue;
		}
		
		printf("\nSua jogada: \n");
		mostrar_escolha(n_usuario);
		
		printf("\nJogada do computador: \n");
		mostrar_escolha(n_maquina);
	
		verificar_vencedor(n_maquina, n_usuario);
	}
	return 0;
}


void verificar_vencedor(int n_maquina, int n_usuario) {
	if(n_maquina == n_usuario) {
		printf("\nEmpate!\n");
	}
		
	else if ((n_usuario == 1 && n_maquina == 3) || (n_usuario == 2 && n_maquina == 1) || (n_usuario == 3 && n_maquina == 2)){
		printf("\nVocê Venceu!\n");
	}
	else {
		printf("\nVocê Perdeu!\n");
	}	
}


void mostrar_escolha(int escolha) {
	//Pedra(Mão fechada)
	if(escolha == 1) { 
		printf("    _______\n");
    	printf("---'   ____)\n");
    	printf("      (_____)\n");
    	printf("      (_____)\n");
    	printf("      (____)\n");
    	printf("---.__(___)\n");
	}
	
	//Folha(Mão aberta)
	else if(escolha == 2) {
		printf("     _______\n");
    	printf("---'    ____)____\n");
    	printf("           ______)\n");
    	printf("          _______)\n");
    	printf("         _______)\n");
    	printf("---.__________)\n");
	}
	
	//Tesoura(Dois dedos)
	else {
		printf("    _______\n");
    	printf("---'   ____)____\n");
    	printf("          ______)\n");
    	printf("       __________)\n");
    	printf("      (____)\n");
    	printf("---.__(___)\n");
	}
}


