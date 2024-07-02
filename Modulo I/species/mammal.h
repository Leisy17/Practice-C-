#include <iostream>

namespace species
{
    class Mammal
    {
    private:
        std::string name;
        std::string hairColor;
        int toothQuantity;
        int gestationTime;
        int gestationType;
        std::string gestationName;

    public:
        Mammal();
        std::string GestationType();
    };
}