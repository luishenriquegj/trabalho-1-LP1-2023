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
    int age;
    cout << "insert animal's age limit to be used as filter:" << endl;
    cin >> age; 
    cout<< "removed the following animals from species database:"<<endl;
    for (int i = 0; i < animals.size(); i++) {
        if (animals[i].getAge() >= age) {
            cout<< "..........................."<<endl; 
            cout<< "name:"<<animals[i].getName()<<endl;
            cout<< "age:"<<animals[i].getAge()<<endl;
            cout<< "species:"<<animals[i].getSpecies()<<endl;
            animals.erase(animals.begin()+i);
            i = 0;
        }
    }
    cout<< "..........................."<<endl; 
};

void Zoo::addAnimal() {
    Animal animal;
    animal.setAnimalData();
    this->animals.push_back(animal);
    cout << "animal: " << animal.getName() << " that has a age of: " << animal.getAge() << " was added to the " << animal.getSpecies()<<"'s" << " Database" << endl;
};





