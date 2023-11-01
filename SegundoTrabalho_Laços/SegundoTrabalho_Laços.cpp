#include <iostream>
#include <ctime>

using namespace std;

int main() {

	int escolha;
	int dificuldade = 3;
	int tentativas = 8;
	string dificuldade_por_escrito = "Facil.    ";
	const int numLines = 18;
	const int QTD_SENHA = 5;

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
			int senha[QTD_SENHA];

			for (int i = 0; i < QTD_SENHA; i++) { // qtd_senha pode ser dificuldade variavel
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
			for (int i = 0; i < QTD_SENHA; i++) {
				cout << "Senha[" << i << "]: " << senha[i] << endl;
			}

			//tentativa vai diminuindo se os numeros nao forem corretos 
			for (int i = tentativas; i > 0; i--) {
				cout << "\n";
				cout << "Tentativas restantes: " << i << endl;
				cout << "Digite sua tentativa de " << dificuldade << " numeros (1-6): " << endl;

				//diiculdade numero de numeros digitados
				for (int qtd_num_dig = 0; qtd_num_dig < dificuldade; qtd_num_dig++) {
					cin >> escolha;
				}
			}


			//...


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
	return 0;
}
