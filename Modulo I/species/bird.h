#include <iostream>

namespace species
{
    class Bird
    {
    private:
        std::string name;
        int wingType;
        int beakType;
        int featherType;
        std::string nameWingType;
        std::string nameBeakType;
        std::string nameFeatherType;

    public:
        Bird();
        std::string WingType();
        std::string BeakType();
        std::string FeatherType();
    };
}