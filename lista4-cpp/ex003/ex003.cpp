#include <iostream>
#include <cstdlib>

using namespace std;

int line = -1;
string name [ 4 ]; 
int age [4 ]; 
double salary [4];

string readNames () {
    string name;

    cout << "Name: ";
    cin >> name;

    return name;
}

int readAge () {
    int age;

    cout << "Age: ";
    cin >> age;

    return age;
}

float readSalary () {
    float salary;

    cout << "Salary: ";
    cin >> salary;

    return salary;
}

void storageData (string nameV, int ageV, float salaryV) {
    line++;

    name[line] = nameV;
    age[line] = ageV;
    salary[line] = salaryV;
}

void readData () {
    for (int i = 0; i <= line; i++) {
        cout << name[i] << " | " << age[i] << " - " << salary[i] << endl;
    }
}

int main() {
    string name_; int age_; float salary_; int input;

    do {
        cout << "\n* Menu *\n";
        cout << "1 - Ler\n";
        cout << "2 - Exibir\n";
        cout << "3 - Sair\n";
        cout << "Item: ";
        cin >> input;

        switch (input) {
            case 1:
                name_ = readNames();
                age_ = readAge();
                salary_ = readSalary();

                storageData(name_, age_, salary_);

                break;

            case 2:
                readData();

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

