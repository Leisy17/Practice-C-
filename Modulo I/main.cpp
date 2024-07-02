#include <iostream>
#include "species/bird.h"
#include "species/mammal.h"
#include "species/reptile.h"

using namespace species;

class Start
{
private:
    int animal;

public:
    int finished;
    Start();
};

Start::Start()
{
    std::cout << "Inserte el número de acuerdo a la especie:" << std::endl;
    std::cout << "1. Aves" << std::endl;
    std::cout << "2. Mamíferos" << std::endl;
    std::cout << "3. Reptiles" << std::endl;
    std::cin >> animal;
    finished = EXIT_SUCCESS;
    if (animal == 1)
    {
        for (size_t i = 1; i < 3; i++)
        {
            std::cout << "Ave " << i << ": " << std::endl;
            Bird *bird = new Bird();
        }
    }
    else if (animal == 2)
    {
        for (size_t i = 1; i < 3; i++)
        {
            std::cout << "Mamífero " << i << ": " << std::endl;
            Mammal *mammal = new Mammal();
        }
    }
    else if (animal == 3)
    {
        for (size_t i = 1; i < 3; i++)
        {
            std::cout << "Reptil " << i << ": " << std::endl;
            Reptile *reptile = new Reptile();
        }
    }
    else
    {
        std::cout << "Opción no válida";
        finished = EXIT_FAILURE;
    }
}

int main()
{
    Start start;
    return start.finished;
}
