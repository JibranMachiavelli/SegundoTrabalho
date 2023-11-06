#include <iostream>
#include <ctime>


using namespace std;

int main() {

	int escolha;
	int dificuldade = 3;
	int tentativas = 8;
	int* senha = new int[dificuldade];
	string dificuldade_por_escrito = "Facil.    ";
	const int numLines = 18;

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

			for (int i = 0; i < dificuldade; i++) {
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

			/*  Mostra a senha 
			cout << "                                                     |--------------------------------------------------|\n";
			for (int i = 0; i < dificuldade; i++) {
				cout << "                                                     |Senha[" << i << "]: " << senha[i] << "                                       |\n";//Mostra senha
			}
			cout << "                                                     |--------------------------------------------------|\n";
			system("pause");
			*/

			cout << "                                                    |----------------------------------------------------|\n";
			cout << "                                                    |        Bem Vindo ao Jogo Adivinhe a Senha!!!!      |\n";
			cout << "                                                    |----------------------------------------------------|\n";
			system("pause");

			//tentativa vai diminuindo se os numeros nao forem corretos 
			for (int i = tentativas; i > 0; i--) {
				int* escolha = new int[dificuldade];
				cout << "                                                     |---------------------------------------------------|\n";
				cout << "                                                     |Tentativas restantes : " << i << "                          |\n";
				cout << "                                                     |Digite sua tentativa de, " << dificuldade << " numeros (1-6):          |\n";
				cout << "                                                     |---------------------------------------------------|\n";
				//diiculdade numero de numeros digitados
				for (int i = 0; i < dificuldade; i++) {
					cout << "                                                     | Escolha: ";
					cin >> escolha[i];
					//cout << " vetor [" << i << "]" << " senha :" << senha[i] << endl;

				}
				int posição_certa = 0;
				int posição_errada = 0;

				for (int i = 0; i < dificuldade; i++) {
					for (int j = 0; j < dificuldade; j++) {
						if (escolha[i] == senha[j]) {
							if (i == j) {
								// Número na posição certa
								posição_certa++;
							}
							else {
								posição_errada++;
							}
						}
					}
				}

				cout << "                                                     |--------------------------------------------------|\n";
				cout << "                                                     |Numero na posicao certa : " << posição_certa << "                       |" << endl;
				cout << "                                                     |Numero certo na posicao errada : " << posição_errada << "                |" << endl;
				cout << "                                                     |--------------------------------------------------|\n";
				cout << "\n";
				//system("pause");

				//Mostra se voce ganhou ou perdeu(jogo nao para)
				if (posição_certa == dificuldade) {
					cout << "                                                    |----------------------------------------------------|\n";
					cout << "                                                    |          Voce acertou a senha parabens!!!!         |       " << endl;
					cout << "                                                    |----------------------------------------------------|\n";
					break;

				}
				if (i == 1) {
					cout << "                                                     |--------------------------------------------------|\n";
					cout << "                                                     |             Infelizmente voce perdeu!!           |" << endl;
					cout << "                                                     |             A senha era :                        |" << endl;
					cout << "                                                     |--------------------------------------------------|\n";
					for (int i = 0; i < dificuldade; i++) {
						cout << "                                                     |" << i + 1 << " - Senha : " << senha[i] << endl;
					}
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
	delete[]senha;
	return 0;
}
