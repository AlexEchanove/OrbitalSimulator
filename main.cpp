// Copyright 2024 Alex
#include "main.h"
#include "Objects/Celestialbody.h"

int main() {
  Celestialbody moon =
      Celestialbody("Earth", 100, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0);

  char directions[3] = {'X', 'Y', 'Z'};

  std::cout << "Name: " << moon.name << "\tMass: " << moon.mass
            << "\tRadius: " << moon.radius << std::endl;

  for (int i = 0; i < 3; i++) {
    std::cout << directions[i] << ":\t" << moon.position[i] << "\t"
              << moon.velocity[i] << "\t" << moon.acceleration[i] << "\t"
              << std::endl;
  }

  return 0;
}
