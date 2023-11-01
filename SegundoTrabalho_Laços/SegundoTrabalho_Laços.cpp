#include <iostream>
#include <ctime>


using namespace std;

int main() {

	int escolha;
	int dificuldade = 3;
	int tentativas = 8;
	string dificuldade_por_escrito = "Facil.    ";
	const int numLines = 18;
	int* senha = nullptr; // Declarar a variável fora do switch

	while (true) {
		cout << "\n";
		cout << "                                                    |----------------------------------------------------|\n";
		cout << "                                                    |        Bem-vindo ao jogo adivinhe a senha!         |\n";
		cout << "                                                    |                                                    |\n";
		cout << "                                                    |                    1. Fim                          |\n";
		cout << "                                                    |                    2. Sobre                        |\n";
		cout << "                                                    |              3. Dificuldade: " << dificuldade_por_escrito << "            |\n";
		cout << "                                                    |                    4. Jogar                        |\n";
		cout << "                                                    |----------------------------------------------------|\n";
		cout << "\n";
		cout << "                                                    | Escolha: ";	
		cin >> escolha;
		cout << "\n";

		system("pause");//pausa o systema ate o usuario digitar uma tecla
		system("cls");

		switch (escolha) {

		case 1://FIM
			for (int r = 0; r < numLines; r++) {
				cout << "\n";
			}
			cout << "                                                                  |----------------|\n";
			cout << "                                                                  |                |\n";
			cout << "                                                                  |    END GAME    |\n";
			cout << "                                                                  |                |\n";
			cout << "                                                                  |----------------|\n";
			for (int r = 0; r < numLines; r++) {
				cout << "\n";
			}
			return 0;

			break;
		case 2://SOBRE
			cout << "\n";
			cout << "                                                |----------------------------------------------------|\n";
			cout << "                                                |    Disciplina     : Algoritimos e Programacao.     |\n";
			cout << "                                                |    Professor      : Eduardo Alves da Silva.        |\n";
			cout << "                                                |    Desenvolvimento: Leonardo Jibran Machiavelli;   |\n";
			cout << "                                                |                     Leonardo Freitas Geraldo.      |\n";
			cout << "                                                |    Data           : 30/10/2023                     |\n";
			cout << "                                                |----------------------------------------------------|\n";
			cout << "\n";

			system("pause");//pausa o systema ate o usuario digitar uma tecla
			system("cls");

			break;
		case 3://DIFICULDADE
			cout << "\n";
			cout << "                                                             |--------------------------|\n";
			cout << "                                                             |  Escolha uma dificuldade:|\n";
			cout << "                                                             |                          |\n";
			cout << "                                                             |         1-Facil.         |\n";
			cout << "                                                             |         2-Medio.         |\n";
			cout << "                                                             |         3-Dificil.       |\n";
			cout << "                                                             |--------------------------|\n";
			cout << "\n";
			cout << "                                                             | Escolha: ";
			cin >> escolha;
			cout << "\n";

			system("pause");//pausa o systema ate o usuario digitar uma tecla
			system("cls");

			switch (escolha) {
			case 1://FACIL
				dificuldade_por_escrito = "Facil.    ";
				dificuldade = 3;
				tentativas = 8;
				cout << "\n";
				cout << "                                             |--------------------------------------------------|\n";
				cout << "                                             |     Dificuldade do jogo mudou para Facil.        |\n";
				cout << "                                             |                                                  |\n";
				cout << "                                             |               Senha: " << dificuldade << " digitos.                  |\n";
				cout << "                                             |           Voce possui: " << tentativas << " tentativas.             |\n";
				cout << "                                             |--------------------------------------------------|\n";
				cout << "\n";

				system("pause");//pausa o systema ate o usuario digitar uma tecla
				system("cls");

				break;
			case 2://MEDIO
				dificuldade_por_escrito = "Medio.    ";
				dificuldade = 4;
				tentativas = 10;
				cout << "\n";
				cout << "                                             |--------------------------------------------------|\n";
				cout << "                                             |     Dificuldade do jogo mudou para Medio.        |\n";
				cout << "                                             |                                                  |\n";
				cout << "                                             |               Senha: " << dificuldade << " digitos.                  |\n";
				cout << "                                             |           Voce possui: " << tentativas << " tentativas.            |\n";
				cout << "                                             |--------------------------------------------------|\n";
				cout << "\n";


				system("pause");//pausa o systema ate o usuario digitar uma tecla
				system("cls");

				break;
			case 3://DIFICIL
				dificuldade_por_escrito = "Dificil.  ";
				dificuldade = 5;
				tentativas = 12;
				cout << "\n";
				cout << "                                             |--------------------------------------------------|\n";
				cout << "                                             |     Dificuldade do jogo mudou para Dificil.      |\n";
				cout << "                                             |                                                  |\n";
				cout << "                                             |               Senha: " << dificuldade << " digitos.                  |\n";
				cout << "                                             |           Voce possui: " << tentativas << " tentativas.            |\n";
				cout << "                                             |--------------------------------------------------|\n";
				cout << "\n";


				system("pause");//pausa o systema ate o usuario digitar uma tecla
				system("cls");

				break;
			default://NENHUMA_RESPOSTA
				cout << "\n";
				cout << "                                                  |----------------------------------------|\n";
				cout << "                                                  |   Escolha alguma opcao entre: [1 - 3]  |\n";
				cout << "                                                  |----------------------------------------|\n";
				cout << "\n";

				system("pause");//pausa o systema ate o usuario digitar uma tecla
				system("cls");

				break;
			}
			break;
		case 4://JOGAR
			srand(static_cast<unsigned int>(time(NULL)));
			senha = new int[dificuldade];

			for (int i = 0; i < dificuldade; i++) { // qtd_senha pode ser dificuldade variavel
				senha[i] = (rand() % 6) + 1;
				bool flag_repetiu = false;
				for (int y = i - 1; y >= 0; y--) {
					if (senha[i] == senha[y]) {
						flag_repetiu = true;
					}
				}
				if (flag_repetiu == true) {
					i--;
				}
			}
				cout << "                                                     |--------------------------------------------------|\n";
			for (int i = 0; i < dificuldade; i++) {
				cout << "                                                     |Senha[" << i << "]: " << senha[i] << "                                       |\n";//Mostra senha
			}
				cout << "                                                     |--------------------------------------------------|\n";

			//tentativa vai diminuindo se os numeros nao forem corretos 
			for (int i = tentativas; i > 0; i--) {
				cout << "                                                     |--------------------------------------------------|\n";
				cout << "                                                     |Tentativas restantes: " << i << "                           |\n";
				cout << "                                                     |Digite sua tentativa de " << dificuldade << " numeros (1-6):          |\n";
				cout << "                                                     |--------------------------------------------------|\n";
				//diiculdade numero de numeros digitados
				for (int num = 0; num < dificuldade; num++) {
					cout << "                                                     | Escolha: ";
					cin >> escolha;
				}
			}  

	//Codigo deve verificar cada vetor criado em senha[0] e em diante conforme dificuldade e informar posição correta e errada e se o jogador nao acertar e acabar as tentativas ele volta para o menu se ele ganhar tambem volta ao menu
    //se meu num_dig for == ao meu vetor senha fazer posição correta
	//		int posição_correta = 0;
	//		int posição_errada = 0;
    //
	//		for (int i = 0; i < dificuldade; i++){
	//		if (escolha == senha[0]) {
	//			posição_correta++;
	//			cout << posição_correta;
	//		} else {
	//			posição_errada++;
	//		}
	//	}

			system("pause");//pausa o systema ate o usuario digitar uma tecla
			system("cls");

			break;
		default://NENHUMA_RESPOSTA
			cout << "\n";
			cout << "                                                      |----------------------------------------|\n";
			cout << "                                                      |   Escolha alguma opcao entre: [1 - 4]  |\n";
			cout << "                                                      |----------------------------------------|\n";
			cout << "\n";
			
			system("pause");//pausa o systema ate o usuario digitar uma tecla
			system("cls");

			break;
			
		}
	}
	delete[]senha;
	return 0;
}
