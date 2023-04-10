#ifndef ZOO_H
#define ZOO_H

#include "Animal.h"

#include <vector>
#include <string>



class  Zoo {

private:
  std::vector <Animal> animals;

public:
  Zoo( std::vector <Animal> animals);
  void printSpeciesData();
  void deleteAnimalsEntries();
  void addAnimal();
};


#endif