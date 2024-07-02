#include <iostream>

namespace species
{
    class Reptile
    {
    private:
        std::string name;
        int hasSquama;
        int hasPoison;
        std::string skinColor;
        std::string squama;
        std::string poison;

    public:
        Reptile();
        std::string HasSquama();
        std::string HasPoison();
    };
}