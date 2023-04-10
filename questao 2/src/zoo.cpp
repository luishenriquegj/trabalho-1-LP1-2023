#include "Zoo.h"
#include "Animal.h"

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
    for (int i = 0; i < animals.size(); i++) {
        if (animals[i].getSpecies() == query) {
           cout<< "..........................."<<endl; 
           cout<< "name:"<<animals[i].getName()<<endl;
           cout<< "age:"<<animals[i].getAge()<<endl;
        }
    }
    cout<< "..........................."<<endl; 
   
};

void Zoo::deleteAnimalsEntries() {
    string age;
    cout << "insert animal's age to be removed from database:" << endl;
    cin >> age; 
    cout << "not implemented"<< endl;
};

void Zoo::addAnimal(Animal animal) {
    animal.setAnimalData();
    this->animals.push_back(animal);
};





