#include "Zoo.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

Zoo::Zoo( vector <Animal> animals) {
    this->animals = animals;
}



void Zoo::getSpeciesData() {
    string query;
    cout << "insert animal's species:" << endl;
    cin >> query;
   
};

void Zoo::deleteAnimalsEntries() {
    string age;
    cout << "insert animal's age to be removed from database:" << endl;
    cin >> age; 
};

void Zoo::addAnimal(Animal animal) {
    animal.setAnimalData();
    this->animals.push_back();
};





