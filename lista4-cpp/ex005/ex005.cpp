#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

vector<int> ages;
vector<string> names;

int readAges () {
    int age;

    cout << "Enter Age: ";
    cin >> age;

    return age;
}

string readNames () {
    string name;

    cout << "Enter Name: ";
    cin >> name;

    return name;
}

void storageData (int agesV, string namesV) {
    ages.push_back(agesV);
    names.push_back(namesV);
}

void higherLower () {
    int higher = -1, lower = 999;
    int higherIndex = -1, lowerIndex = -1;

    for (int i = 0; i < ages.size(); i++) {
        if (ages[i] > higher) {
            higher = ages[i];
            higherIndex = i;
        }
        if (ages[i] < lower) {
            lower = ages[i];
            lowerIndex = i;
        }
    }

    string olderPersonName = names[higherIndex];
    string youngerPersonName = names[lowerIndex];

    cout << "Highest Age: " << higher << " | Name: " << olderPersonName << "\nLowest Age: " << lower << " | Name: " << youngerPersonName << endl;
}

void calculateAverageAndAgesSum () {
    float agesAverage = 0;
    int agesSum = 0;

    for (int i = 0; i < ages.size(); i++) {
        agesSum = agesSum + ages[i];
    }

    agesAverage = agesSum / ages.size();

    cout << "\nAges Average: " << agesAverage << "\nAges Sum: " << agesSum << endl;
}

int main () {
    int age_; string name_; int input;

    do {
        cout << "\nMenu\n\n" << "1 - Ler Valores\n2 - Exibir Dados\n3 - Sair\n\nOpt: ";
        cin >> input;

        switch (input) {
            case 1:
                age_ = readAges();
                name_ = readNames();

                storageData(age_, name_);

                break;
            case 2:
                higherLower();
                calculateAverageAndAgesSum();
                
                break;
            case 3:
                cout << "Saindo...\n";
                exit(0);

                break;
            default:
                cout << "Opção inválida!\n";
        }
    } while (input != 3);
    
    return 0;
}

