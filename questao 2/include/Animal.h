#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>


class Animal{

    private: std::string name;
    std::string species;
    float age;

    public: 
    Animal(std::string name, int age, std::string species);
    Animal();

    std::string getName();
    float getAge();
    void setAnimalData();
    std::string getSpecies();
};

#endif