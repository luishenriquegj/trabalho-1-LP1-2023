#include <iostream>
#include<string>
#include<vector>

#include "Animal.h"
#include "Zoo.h"


using namespace std;

int main() {

    int menu = 1;
    string animalName = "";
    int employeeWage = 0;
    int employeeWageMultiplier = 0;
    string species = "";
    

    Animal animal;
    vector < Animal > animals = {
        Animal("Pedro", 15, "Monkey"),
        Animal("Joao", 9, "Monkey"),
        Animal("Matheus", 20, "Lion"),
        Animal("Felipe", 24, "Lion")
    };
    Zoo zoo(animals);

    while (menu != 4) {
        cout << "................................." << endl;
        cout << "choose one of the following options:" << endl;
        cout << "1 - set new animal's data" << endl;
        cout << "2 - get an animal's data" << endl;
        cout << "3 - get a species data" << endl; 
        cout << "4 - end application" << endl;
        cin >> menu;
        

        if (menu == 1) {
            cout << "................................." << endl;
            animal.setAnimalData();
            animals.push_back(animal);
            cout << "animal: " << animal.getName() << " that has a age of: " << animal.getAge() << " was added to the " << animal.getSpecies()<<"'s" << " Database" << endl;
        }

       
        if (menu == 2) {
            cout << "................................." << endl;
            cout << "what animal are you looking for?" << endl;
            cin >> animalName;
            //getAnimalData(animalName, animals);
            animalName="";
        }
        if (menu == 3) {
            cout << "................................." << endl;
            cout << "what species are you looking for?" << endl;
            cin >> species;
            //getSpeciesData(species, animals);
            species="";
        }
        }
         if (menu == 4) {
            cout << "................................." << endl;
            cout << "ended program" << endl;
            return 0;
        }

        menu = 0;
    }

