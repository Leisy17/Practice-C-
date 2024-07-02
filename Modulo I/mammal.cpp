#include <iostream>
#include "species/mammal.h"

using namespace species;

Mammal::Mammal()
{
    std::cout << "Ingrese el nombre de la especie de Mamífero: " << std::endl;
    std::cin >> name;
    std::cout << "Ingrese el color del pelaje: " << std::endl;
    std::cin >> hairColor;
    std::cout << "Ingrese la cantidad de dientes: " << std::endl;
    std::cin >> toothQuantity;
    std::cout << "Ingrese el tiempo de gestación en meses: " << std::endl;
    std::cin >> gestationTime;
    gestationName = GestationType();
    std::cout << "Nombre: " << name << std::endl;
    std::cout << "Color del pelaje: " << hairColor << std::endl;
    std::cout << "Cantidad de dientes: " << toothQuantity << std::endl;
    std::cout << "Tiempo de gestación en meses: " << gestationTime << std::endl;
    std::cout << "Tipo de reproducción: " << gestationName << std::endl;
}
std::string Mammal::GestationType()
{
    std::cout << "Ingrese el tipo de gestación: " << std::endl;
    std::cout << "1. Ovíparos " << std::endl;
    std::cout << "2. Vivíparos " << std::endl;
    std::cin >> gestationType;
    switch (gestationType)
    {
    case 1:
        gestationName = "Ovíparos";
        break;
    case 2:
        gestationName = "Vivíparos";
        break;
    default:
        std::cout << "Inserte una opción válida" << std::endl;
        break;
    }
    return gestationName;
}