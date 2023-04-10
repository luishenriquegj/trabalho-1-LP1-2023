#ifndef ZOO_H
#define ZOO_H

#include <vector>
#include <string>
#include "Animal.h"


class  Zoo {

private:
  std::vector <Animal> animals;

public:
  Zoo( std::vector <Animal> animals);
  void getSpeciesData();
  void deleteAnimalsEntries();
  void addAnimal(Animal animal);
};


#endif