#include <iostream>
#include <string>

struct Animal
{
    std::string type;
    std::string name;
    int age;
    Animal()
    {
        type = "slon";
        name = "sanya";
        age = 90;
    }
    Animal(std::string type, std::string name, int age)
    {
        this->type = type;
        this->name = name;
        this->age = age;
    }
    Animal(const Animal& other)
    {
        this->type = other.type;
        this->name = other.name;
        this->age = other.age;
    }
    ~Animal()
    {
    }

};
void printAnimal(Animal other)
{
    std::cout << other.name << std::endl << other.type << std::endl << other.age;
}
void elderAnimal(Animal& other)
{
    other.age += 1;
}


int main(int argc, char* argv[])
{
    Animal slon;
    elderAnimal(slon);
    printAnimal(slon);
    return EXIT_SUCCESS;
}
