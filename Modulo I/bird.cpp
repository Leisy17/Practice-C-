#include <iostream>
#include "species/bird.h"
using namespace species;

Bird::Bird()
{
    std::cout << "Ingrese el nombre de la especie de Aves: " << std::endl;
    std::cin >> name;
    nameWingType = WingType();
    nameBeakType = BeakType();
    nameFeatherType = FeatherType();
    std::cout << "Nombre: " << name << std::endl;
    std::cout << "Tipo de Alas: " << nameWingType << std::endl;
    std::cout << "Tipo de Pico: " << nameBeakType << std::endl;
    std::cout << "Tipo de Plumas: " << nameFeatherType << std::endl;
}

std::string Bird::WingType()
{
    std::cout << "Ingrese el número correspondiente al tipo de alas" << std::endl;
    std::cout << "1. Elípticas" << std::endl;
    std::cout << "2. De alta velocidad" << std::endl;
    std::cout << "3. De planeo" << std::endl;
    std::cout << "4. Elevadoras" << std::endl;
    std::cin >> wingType;
    std::string nameWingType;
    switch (wingType)
    {
    case 1:
        nameWingType = "Elípticas";
        break;
    case 2:
        nameWingType = "De alta velocidad";
        break;
    case 3:
        nameWingType = "De planeo";
        break;
    case 4:
        nameWingType = "Elevadoras";
        break;
    default:
        std::cout << "Inserte una opción válida" << std::endl;
        break;
    }
    return nameWingType;
}

std::string Bird::BeakType()
{
    std::cout << "Ingrese el número correspondiente al tipo de picos" << std::endl;
    std::cout << "1. Generalista" << std::endl;
    std::cout << "2. Insectívoro" << std::endl;
    std::cout << "3. Graniforo" << std::endl;
    std::cout << "4. Nectarívoro" << std::endl;
    std::cout << "5. Pescador profundo" << std::endl;
    std::cout << "6. Pescador de superficie" << std::endl;
    std::cout << "7. Carnicero" << std::endl;
    std::cout << "8. Raptorial" << std::endl;
    std::cout << "9. Semillas duras" << std::endl;
    std::cout << "10. Omnívoro" << std::endl;
    std::cout << "11. Filtrador" << std::endl;
    std::cout << "12. Limícola" << std::endl;
    std::cin >> beakType;
    std::string nameBeakType;
    switch (beakType)
    {
    case 1:
        nameBeakType = "Generalista";
        break;
    case 2:
        nameBeakType = "Insectívoro";
        break;
    case 3:
        nameBeakType = "Graniforo";
        break;
    case 4:
        nameBeakType = "Nectarívoro";
        break;
    case 5:
        nameBeakType = "Pescador profundo";
        break;
    case 6:
        nameBeakType = "Pescador de superficie";
        break;
    case 7:
        nameBeakType = "Carnicero";
        break;
    case 8:
        nameBeakType = "Raptorial";
        break;
    case 9:
        nameBeakType = "Semillas duras";
        break;
    case 10:
        nameBeakType = "Omnívoro";
        break;
    case 11:
        nameBeakType = "Filtrador";
        break;
    case 12:
        nameBeakType = "Limícola";
        break;
    default:
        std::cout << "Inserte una opción válida" << std::endl;
        break;
    }
    return nameBeakType;
}

std::string Bird::FeatherType()
{
    std::cout << "Ingrese el número correspondiente al tipo de plumas" << std::endl;
    std::cout << "1. De vuelo" << std::endl;
    std::cout << "2. Genéricas de contorno" << std::endl;
    std::cin >> featherType;
    std::string nameFeatherType;
    switch (featherType)
    {
    case 1:
        nameFeatherType = "De vuelo";
        break;
    case 2:
        nameFeatherType = "Genéricas de contorno";
        break;
    default:
        std::cout << "Inserte una opción válida" << std::endl;
        break;
    }
    return nameFeatherType;
}
