#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
	int user, comp, escolha, placarc = 0, placaru = 0;
	printf("--Bem-vindo ao jogo Pedra, Papel e Tesoura em C--\n");
	while (1) {
		printf("Entre sua jogada (0 = Pedra, 1 = Papel, 2 = Tesoura):");
		scanf("%d", &user);
		srand(time(NULL));
		comp = rand() % 3;
		if (user == 0) {
			if (comp == 0) {
				printf("Computador: Pedra\nEmpate!\n");
				printf("Placar - voce: %d vs computador: %d\n", placaru, placarc);
			}
			if (comp == 1) {
				printf("Computador: Papel\nComputador venceu!\n");
				placarc ++;
				printf("Placar - voce: %d vs computador: %d\n", placaru, placarc);
			}
			if (comp == 2) {
				printf("Computador: Tesoura\nVoce venceu!\n"); 
				placaru ++;
				printf("Placar - voce: %d vs computador: %d\n", placaru, placarc);
			}
		} else if (user == 1) {
			if (comp == 0) {
	                        printf("Computador: Pedra\nVoce venceu!\n");
				placaru ++;
				printf("Placar - voce: %d vs computador: %d\n", placaru, placarc);
	                }
	                if (comp == 1) {
	                        printf("Computador: Papel\nEmpate!\n");
	                }
	                if (comp == 2) {
	                        printf("Computador: Tesoura\nComputador venceu!\n"); 
				placarc ++;
				printf("Placar - voce: %d vs computador: %d\n", placaru, placarc);
	                }
		} else if (user == 2) {
	                if (comp == 0) {
	                        printf("Computador: Pedra\nComputador venceu!\n");
				placarc ++;
				printf("Placar - voce: %d vs computador: %d\n", placaru, placarc);
	                }
	                if (comp == 1) {
	                        printf("Computador: Papel\nVoce venceu!\n");
				placaru ++;
				printf("Placar - voce: %d vs computador: %d\n", placaru, placarc);
	                }
	                if (comp == 2) {
	                        printf("Computador: Tesoura\nEmpate!\n");
				printf("Placar - voce: %d vs computador: %d\n", placaru, placarc);
	                }

		} else {
			printf("Jogada invalida!\n");
		}
		printf("Deseja continuar? (1:sim/0:nao)\n");
		scanf("%d", &escolha);
		if (escolha == 0) {
			break;
		} else if (escolha != 1) {
			printf("Entrada invalida...\n");
		}
	}
	return 0;
}
