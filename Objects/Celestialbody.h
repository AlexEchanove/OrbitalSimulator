// Copyright 2024 Alex

#include "../main.h"

#ifndef ORBITALSIMULATOR_CELESTIALBODY_H
#define ORBITALSIMULATOR_CELESTIALBODY_H

class Celestialbody {
public:
  std::string name;
  double mass;
  double radius;
  double position[3];
  double velocity[3];
  double acceleration[3];

  Celestialbody(std::string n, double m, double r, double x, double y, double z,
                double vx, double vy, double vz, double ax, double ay,
                double az);

  void updateAcceleration(Celestialbody cb1, Celestialbody cb2);
  void updateVelocity(double t);
  void updatePosition(double t);
};

#endif // ORBITALSIMULATOR_CELESTIALBODY_H
