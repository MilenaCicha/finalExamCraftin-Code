#include <iostream>
#include <cstring>

namespace Sentence {
    class Sentence {
        int size;
        char *sentence;

    public:
        explicit Sentence(const char *newstr);
        ~Sentence(){
            delete[] sentence;
        }
        void print();
        void newTable(const char *str2);
    };

    Sentence::Sentence(const char *newstr) {
        size = std::strlen(newstr)+1;
        sentence = new char [size];
        std::strcpy(sentence,newstr);
    }
    void Sentence::Sentence::print() {
        std::cout<<sentence<<std::endl;
    }
    void Sentence::Sentence::newTable(const char *str2){
        size += std::strlen(str2);
        char* biggerTable = new char[size];
        for(int i = 0; i < size; ++i){
            biggerTable[i]=sentence[i];
        }
        delete[] sentence;
        sentence = biggerTable;
        std::strcat(sentence, str2);
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
    const char *str1 = "Egzamin c++, latwizna. \0";
    const char *str2 = "A moze jednak... \0";
    Sentence::Sentence sentence1{str1};
    sentence1.print();
    sentence1.newTable(str2);
    sentence1.print();

    return 0;
 }
