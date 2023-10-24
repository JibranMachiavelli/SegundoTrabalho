#include <iostream>
#include <ctime>

using namespace std;

int main() {

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
