#include "Animal.h"

#include <iostream>

#include <string>


using namespace std;

Animal::Animal(string name, int age, string species) {
    this -> name = name;
    this -> age = age;
    this -> species = species;
};

Animal::Animal() {
    this -> name = "";
    this -> age = 0;
    this -> species = "";
};



void Animal::setAnimalData() {
    cout << "insert animal's name:" << endl;
    cin >> this -> name;
    while (this -> name.size() == 0) {
        cout << "set a valid anmial's name:" << endl;
        cin >> this -> name;
    }

    cout << "insert the animal's age:" << endl;
    cin >> this -> age;

    cout << "insert the animal's species:" << endl;
    cin >> this -> species;
};

string Animal::getName() {
    return this -> name;
};

float Animal::getAge() {
    return this -> age;
};

string Animal::getSpecies() {
    return this -> species;
};