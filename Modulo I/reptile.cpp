#include <iostream>
#include "species/reptile.h"
using namespace species;

Reptile::Reptile()
{
    std::cout << "Ingrese el nombre de la especie de Reptil: " << std::endl;
    std::cin >> name;
    std::cout << "Ingrese el color de la piel: " << std::endl;
    std::cin >> skinColor;
    squama = HasSquama();
    poison = HasPoison();
    std::cout << "Nombre: " << name << std::endl;
    std::cout << "Color de piel: " << skinColor << std::endl;
    std::cout << "¿Tiene escamas?: " << squama << std::endl;
    std::cout << "¿Es venenoso?: " << poison << std::endl;
}

std::string Reptile::HasSquama()
{
    std::cout << "Ingrese el número correspondiente si el reptil tiene escamas o no" << std::endl;
    std::cout << "1. Sí tiene escamas" << std::endl;
    std::cout << "2. No tiene escamas" << std::endl;
    std::cin >> hasSquama;
    switch (hasSquama)
    {
    case 1:
        squama = "Sí tiene escamas";
        break;
    case 2:
        squama = "No tiene escamas";
        break;
    default:
        std::cout << "Inserte una opción válida" << std::endl;
        break;
    }
    return squama;
}

std::string Reptile::HasPoison()
{
    std::cout << "Ingrese el número correspondiente si el reptil tiene veneno o no" << std::endl;
    std::cout << "1. Sí es venenoso" << std::endl;
    std::cout << "2. No es venenoso" << std::endl;
    std::cin >> hasPoison;
    switch (hasPoison)
    {
    case 1:
        poison = "Sí es venenoso";
        break;
    case 2:
        poison = "No es venenoso";
        break;
    default:
        std::cout << "Inserte una opción válida" << std::endl;
        break;
    }
    return poison;
}
