#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int escolha;
	int dificuldade = 3;
	int tentativas = 8;
	string dificuldade_por_escrito = "Facil.    ";
	const int numLines = 18;
	const int QTD_SENHA = 5;
	vector<int> codigo;
	vector<int> tentativa;

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



			/*
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
				cout << "Senha[" << i << "]: " << senha[i] << endl;            MOSTRA A SENHA REGERADA
			}
			---------------------------------------
			ORIGINAL
			#include <iostream>
#include <ctime>

				using namespace std;

				int main() {

				  const int QTD_SENHA = 5;
				  srand(time(NULL));
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
				  return 0;
				}





			*/
			// Inicia o código com os numeros aleatórios

			codigo.clear();
			for (int i = 0; i < dificuldade; i++) {
				codigo.push_back(1 + rand() % 6);
			}

			for (int i = tentativas; i > 0; i--) {
				tentativa.clear();
				cout << endl;
				cout << "Tentativas restantes: " << i << endl;
				cout << "Digite sua tentativa de " << dificuldade << " números (1-6): " << endl;

				for (int j = 0; j < dificuldade; j++) {
					int numero;
					cin >> numero;
					tentativa.push_back(numero);
				}

				cout << endl;

				int corretos_posicao_correta = 0;
				int corretos_posicao_errada = 0;

				for (int j = 0; j < dificuldade; j++) {
					if (tentativa[j] == codigo[j]) {
						corretos_posicao_correta++;
					}
					else if (find(codigo.begin(), codigo.end(), tentativa[j]) != codigo.end()) {
						corretos_posicao_errada++;
					}
				}

				if (corretos_posicao_correta == dificuldade) {
					cout << "Parabéns! Você venceu!" << endl;
					cout << endl;
					break;
				}
				else {
					cout << "Números corretos na posição correta: " << corretos_posicao_correta << endl;
					cout << "Números corretos na posição errada: " << corretos_posicao_errada << endl;
				}

				if (i == 1) {
					cout << endl;
					cout << "Você perdeu. O código correto era: ";
					for (int j = 0; j < dificuldade; j++) {
						cout << codigo[j] << " ";
					}
					cout << endl;
					cout << endl;
					break;
				}
			}

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
