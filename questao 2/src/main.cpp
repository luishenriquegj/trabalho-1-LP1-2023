#include <iostream>
#include<string>
#include<vector>

#include "Animal.h"
#include "Zoo.h"


using namespace std;

int main() {

    int menu = 1;
    string species = "";
    

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
        cout << "2 - delete an animal's data from species database" << endl;
        cout << "3 - get a species data" << endl; 
        cout << "4 - end application" << endl;
        cin >> menu;
        

        if (menu == 1) {
            cout << "................................." << endl;
            zoo.addAnimal();
            
        }

       
        if (menu == 2) {
            cout << "................................." << endl;
            zoo.deleteAnimalsEntries();
        }
        if (menu == 3) {
            zoo.printSpeciesData();
        }
        }
         if (menu == 4) {
            cout << "................................." << endl;
            cout << "ended program" << endl;
            return 0;
        }

        menu = 0;
    }

