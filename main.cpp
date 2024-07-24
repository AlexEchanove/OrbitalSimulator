// Copyright 2024 Alex
#include "main.h"
#include "DataReport/DataPrint.h"
#include "Objects/Celestialbody.h"
#include "Simulator/MainLoop.h"

int main() {
  const int time = 1000;
  const double timeStep = 0.1;

  std::vector<Celestialbody> bodies;

  bodies.emplace_back("Earth", 5.97219e24, 6378.1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
  bodies.emplace_back("Earth", 7.34767309e22, 1740, 0, 0, 0, 0, 0, 0, 0, 0, 0);

  for (auto &body : bodies) {
    printCelestialInfo(&body);
  }

  mainLoop(bodies, time, timeStep);

  return 0;
}
