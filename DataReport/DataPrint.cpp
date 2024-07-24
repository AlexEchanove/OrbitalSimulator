// Copyright 2024 Alex

#include "DataPrint.h"

void printCelestialInfo(Celestialbody *cb) {
  char directions[3] = {'X', 'Y', 'Z'};
  std::cout << "Name: " << cb->name << "\tMass: " << cb->mass
            << "\tRadius: " << cb->radius << std::endl;

  for (int i = 0; i < 3; i++) {
    std::cout << directions[i] << ":\t" << cb->position[i] << "\t"
              << cb->velocity[i] << "\t" << cb->acceleration[i] << "\t"
              << std::endl;
  }
}
