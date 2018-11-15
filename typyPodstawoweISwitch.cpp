#include <iostream>

int main() {
//    1. Stwórz po jednym obiekcie każdego z typów podstawowych, przypisz do nich przykładowe wartości i wyświetl.
//    Dla int i char dopisz dodatkowo zmienne przechowujące maksymalne i minimalne wartości tych typów.
    int num = 1;
    int iMin = INT_MIN; //–2147483648
    int iMax = INT_MAX; // 2147483647
    float num1 = 3.14;
    double num2 = 2.56658257817580175353;
    char{'a'} ;
    char cMin = CHAR_MIN; //-128
    char cMax = CHAR_MAX; //127
    bool a = true;
//   2. Z wejścia standardowego wczytaj dwie liczby, następnie wczytaj znak char.
//    Przy pomocy switch, w zależności od wczytanego znaku na podanych wartościach dokonaj operacji dodawania, odejmowania, mnożenia lub dzielenia.
    int operationNum1;
    int operationNum2;
    char operatorChar;
    std::cout<<"Podaj pierwsza cyfre do dzialania\n";
    std::cin>>operationNum1;
    std::cout<<"Podaj znak operacji, dostepne znaki to +, -, *, / \n";
    std::cin>>operatorChar;
    std::cout<<"Podaj druga cyfre do dzialania\n";
    std::cin>>operationNum2;

    switch (operatorChar) {
        case '+':
            std::cout << "wynik wynosi: "<<(operationNum1 + operationNum2) << std::endl;
            break;
        case '-':
            std::cout << "wynik wynosi: "<<(operationNum1 - operationNum2) << std::endl;
            break;
        case '*':
            std::cout << "wynik wynosi: "<<(operationNum1 * operationNum2) << std::endl;
            break;
        case '/':
            std::cout << "wynik wynosi: "<<(operationNum1 / operationNum2) << std::endl;
            break;
        default:
            std::cout << "Nie podales prawidlowego znaku operacji\n";
            break;
    }
}