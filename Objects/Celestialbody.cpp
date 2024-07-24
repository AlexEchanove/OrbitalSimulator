//
// Created by Echanove, Alex on 7/24/24.
//

#include "Celestialbody.h"

Celestialbody::Celestialbody(std::string n, double m, double r, double x,
                             double y, double z, double vx, double vy,
                             double vz, double ax, double ay, double az) {
  name = std::move(n);
  mass = m;
  radius = r;

  position[0] = x;
  position[1] = y;
  position[2] = z;

  velocity[0] = vx;
  velocity[1] = vy;
  velocity[2] = vz;

  acceleration[0] = ax;
  acceleration[1] = ay;
  acceleration[2] = az;
}
