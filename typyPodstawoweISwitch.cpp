#include <iostream>
#include <limits.h>
enum class Operation : char {
    ADDITION = '+',
    SUBTRACTION = '-',
    MULTIPLICATION = '*',
    DIVISION = '/',
};
int main() {
//    1. Stwórz po jednym obiekcie każdego z typów podstawowych, przypisz do nich przykładowe wartości i wyświetl.
//    Dla int i char dopisz dodatkowo zmienne przechowujące maksymalne i minimalne wartości tych typów.
    int num = 1;
    int iMin = std::numeric_limits<int>::min(); //–2147483648
    unsigned iMax = std::numeric_limits<int>::max(); // 2147483647
    float num1 = 3.14;
    double num2 = 2.56658257817580175353;
    char letter {'a'} ;
    char cMin = std::numeric_limits<char>::min(); //-128
    char cMax =std::numeric_limits<char>::max()-1; //127
    bool a = true;
    std::cout<< "int num: "<<num<<"\n"<<"int iMin: "<<iMin<<"\n"<<"int iMax: "<<iMax<<"\n"<<"float num1: "<<num1<<"\n"<<"double num2: "<<num2<<"\n";
    std::cout<<"char letter: "<<letter<<"\n"<<"char cMin: "<<cMin<<"\n"<<"char cMax: "<<cMax<<"\n"<<"bool a: "<<a<<"\n";

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
    auto operation = static_cast<Operation>(operatorChar);
    switch (operation) {
        case Operation::ADDITION:
            std::cout << "wynik wynosi: "<<(operationNum1 + operationNum2) << std::endl;
            break;
        case Operation::SUBTRACTION:
            std::cout << "wynik wynosi: "<<(operationNum1 - operationNum2) << std::endl;
            break;
        case Operation::MULTIPLICATION:
            std::cout << "wynik wynosi: "<<(operationNum1 * operationNum2) << std::endl;
            break;
        case Operation::DIVISION:
            if(operationNum2 != 0)
                std::cout << "wynik wynosi: "<<(operationNum1 / operationNum2) << std::endl;
            else{
                std::cout<<"Nie wolno dzielic przez zero.\n";
                return -1;
            }
            break;
    }

    return 0;
}