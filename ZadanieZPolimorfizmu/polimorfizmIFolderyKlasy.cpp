#include <iostream>
#include <vector>
#include <memory>
#include "DrawingShapes/Square.h"
#include "DrawingShapes/Circle.h"
#include "DrawingShapes/Rectangle.h"
int main(){
//    Stwórz klasę Shape z czysto wirtualną metodą draw. Niech ta metoda nic nie zwraca, jako argument niech przyjmuje unsigned.
//    Stwórz klasy pochodne od Shape - Square, Rectangle i Circle.
//    Stwórz folder DrawingShapes, umieść każdą klasę w osobnych plikach w tym folderze.
//    Niech te klasy znajdują się również w odpowiednim namespace.
//    Niech draw w tych klasach wyświetla na cout obrazek odpowiednich kształtów, tyle razy, jaka wartość została podana w argumencie.
//    Stwórz wektor unique_ptr na Shape, wypełnij go klasami pochodnymi i wywołaj na nich funkcje draw.

    std::vector<std::unique_ptr<DrawingShapes::Shape>> shapes;

    shapes.emplace_back(std::make_unique<DrawingShapes::Circle>());
    shapes.emplace_back(std::make_unique<DrawingShapes::Square>());
    shapes.emplace_back(std::make_unique<DrawingShapes::Rectangle>());
    for(auto& shape: shapes){
        shape->draw(2);
        std::cout<<"\n";
    }

    return 0;
}

