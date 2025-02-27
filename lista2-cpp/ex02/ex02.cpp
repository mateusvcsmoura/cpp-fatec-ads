#include <iostream> 
#include <cmath> 
using namespace std; 

void readValues (int &n1, int &n2); // Necessário para modificar a variável passada por referência
int squareDifference (int n1, int n2); 

int main()
{    
    int num1, num2; 
    readValues(num1, num2);

    int result = squareDifference(num1, num2); 

    cout << "\nThe square difference is: " << result << endl; 

    cin.get(); // Comando para pausar a tela
    cin.get(); // Comando para pausar a tela
    return 0; 
} 

void readValues (int &n1, int &n2) 
{
    cout << "Enter Value 1: ";
    cin >> n1;

    cout << "Enter Value 2: ";
    cin >> n2;

    return;
}

int squareDifference (int n1, int n2)  
{ 
    int squareDifference = pow((n1 - n2), 2); 

    return squareDifference; 
}
