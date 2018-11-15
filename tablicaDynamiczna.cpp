#include <iostream>
#include <cstring>

namespace Sentence {
    class Sentence {
        int size;
        char *sentence = new char[size];
    public:
        Sentence()
                : size {25},
                sentence{const_cast<char *>("Egzamin c++, latwizna. \0")} {}
        ~Sentence(){
            delete[] sentence;
        }
        void print();
        void newTable();
    };

    void Sentence::Sentence::print() {
        std::cout<<sentence<<std::endl;
    }
    void Sentence::Sentence::newTable(){
        char* biggerTable = new char[size * 2];
        for(int i = 0; i < size; ++i){
            biggerTable[i]=sentence[i];
        }
        delete[] sentence;
        sentence = biggerTable;
        std::strcat(sentence, " a moze jednak... \0");
    }
}



int main(){
//    Stwórz klasę, która jako pole będzie posiadała char*.
//    Do tego pola przypisz w konstruktorze tablice dynamiczną przechowującą zdanie: Egzamin c++, latwizna.
//    Napisz funkcję wyświetlającą zdanie zapisane w tym polu.
//    Następnie napisz funkcje, która przepisze to zdanie do nowej, dluższej tablicy dynamicznej,
//    i dopisz do niej jeszcze tekst: a moze jednak... . Spraw, żeby pole klasy wskazywało na tę nową tablicę dynamiczną.
//    Przy pomocy napisanej poprzednio funkcji wyświetl zawartość pola klasy po zmianie.
//

    Sentence::Sentence sentence1;
    sentence1.print();
    sentence1.newTable();
    sentence1.print();
 }
