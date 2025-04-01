#include <iostream>
#include <cstdlib>

using namespace std;

float debts [5];
int delayedDays [5];
float debtsFinalValue [5];
int line = -1;

float readDebts () {
    float debts;

    cout << "Enter Debt Value: R$ ";
    cin >> debts;

    return debts;
}

int readDelayedDays () {
    int delayedDays;

    cout << "Enter Delayed Days: ";
    cin >> delayedDays;

    return delayedDays;
}

void adjustValues (float debtsV, int delayedDaysV) {
    line++;

    debts[line] = debtsV;
    delayedDays[line] = delayedDaysV;
    debtsFinalValue[line] = debtsV + (debtsV * 0.02) + ((0.01/30) * debtsV * delayedDaysV);
}

void showData () {
    for (int i = 0; i <= line; i++) {
        cout << i+1 << " Divida: R$" << debts[i] << " | Dias atrasados: " << delayedDays[i] << " | Valor Reajustado: R$ " << debtsFinalValue[i] << endl;
    }
}

int main () {
    float debt; int delayedDays_; int input;

    do {
        cout << "\nMenu\n\n" << "1 - Ler Valores\n2 - Exibir\n3 - Sair\n\nOpt: ";
        cin >> input;

        switch (input) {
            case 1:
                debt = readDebts();
                delayedDays_ = readDelayedDays();
                
                adjustValues(debt, delayedDays_);

                break;
            case 2:
                showData();

                break;
            case 3:
                cout << "Saindo...\n";
                exit(0);
                break;
            default:
                cout << "Opção inválida!\n";
        }

    } while (input != 3);

    cin.get();
    cin.get();

    return 0;
}

