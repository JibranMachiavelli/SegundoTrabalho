#include <iostream>
#include <ctime>

using namespace std;

int main() {

	int escolha;
	int dificuldade = 3;
	int tentativas = 8;
	string dificuldade_por_escrito = "Facil(Padrao).";

	while (true) {

		cout << "Bem-vindo ao jogo adivinhe a senha!\n";
		cout << "\n";
		cout << "1. Fim\n";
		cout << "2. Sobre\n";
		cout << "3. Dificuldade: " << dificuldade_por_escrito << endl;
		cout << "4. Jogar\n";
		cout << "\n";
		cout << "Escolha: ";
		cin >> escolha;
		cout << "\n";

		system("pause");//pausa o systema ate o usuario digitar uma tecla
		system("cls");

		switch (escolha) {

		case 1://FIM
			cout << "END GAME!!\n";
			return 0;

			break;
		case 2://SOBRE
			cout << "Desenvolvimento: Leonardo Jibran Machiavelli.\n";
			cout << "Data: 23/10/2023\n";
			cout << "Professor: Eduardo Alves da Silva.\n";
			cout << "Disciplina: Algoritimos e Programacao.\n";
			cout << "\n";

			system("pause");//pausa o systema ate o usuario digitar uma tecla
			system("cls");

			break;
		case 3://DIFICULDADE
			cout << "Escolha uma dificuldade: \n";
			cout << "\n";
			cout << "1-Facil.\n";
			cout << "2-Medio.\n";
			cout << "3-Dificil\n";
			cout << "\n";
			cout << "Escolha: ";
			cin >> escolha;
			cout << "\n";

			switch (escolha) {
			case 1://FACIL
				dificuldade_por_escrito = "Facil.";
				cout << "Dificuldade do jogo mudou para Facil. \n";
				cout << "\n";
				dificuldade = 3;
				tentativas = 8;
				cout << "Senha: " << dificuldade << " digitos.\n";
				cout << "Voce possui: " << tentativas << " tentativas.\n";
				cout << "\n";

				system("pause");//pausa o systema ate o usuario digitar uma tecla
				system("cls");

				break;
			case 2://MEDIO
				dificuldade_por_escrito = "Medio.";
				cout << "Dificuldade do jogo mudou para Medio. \n";
				cout << "\n";
				dificuldade = 4;
				tentativas = 10;
				cout << "Senha: " << dificuldade << " digitos.\n";
				cout << "Voce possui: " << tentativas << " tentativas.\n";
				cout << "\n";

				system("pause");//pausa o systema ate o usuario digitar uma tecla
				system("cls");

				break;
			case 3://DIFICIL
				dificuldade_por_escrito = "Dificil";
				cout << "Dificuldade do jogo mudou para Facil. \n";
				cout << "\n";
				dificuldade = 5;
				tentativas = 12;
				cout << "Senha: " << dificuldade << " digitos.\n";
				cout << "Voce possui: " << tentativas << " tentativas.\n";
				cout << "\n";

				system("pause");//pausa o systema ate o usuario digitar uma tecla
				system("cls");

				break;
			default://NENHUMA_RESPOSTA
				cout << "Escolha alguma opcao entre: [1 - 3]\n";
				cout << "\n";

				system("pause");//pausa o systema ate o usuario digitar uma tecla
				system("cls");

				break;
			}
			break;
		case 4://JOGAR


			cout << "Vamos la\n";

			system("pause");//pausa o systema ate o usuario digitar uma tecla
			system("cls");

			break;
		default://NENHUMA_RESPOSTA
			cout << "Escolha alguma opcao entre: [1 - 4]\n";

			system("pause");//pausa o systema ate o usuario digitar uma tecla
			system("cls");

			break;
		}
	}
	return 0;
}
/*
	srand(time(NULL));
	const int QTD_SENHA = 5;
	int senha[QTD_SENHA];

	for (int i = 0; i < QTD_SENHA; i++) {
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
