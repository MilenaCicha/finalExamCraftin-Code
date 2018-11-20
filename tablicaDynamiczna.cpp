#include <iostream>
#include <cstring>

namespace Sentence {
    class Sentence {
        int size;
        char *sentence = new char[size];
    public:
        Sentence(char newstr[])
                : size {24}
                {std::strcpy(sentence,newstr);}
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
        std::strcat(sentence, "A moze jednak... \0");
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
    char str1[] = "Egzamin c++, latwizna. \0";
    Sentence::Sentence sentence1{str1};
    sentence1.print();
    sentence1.newTable();
    sentence1.print();

    return 0;
 }
