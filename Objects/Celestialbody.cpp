// Copyright 2024 Alex

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

void Celestialbody::updateAcceleration(Celestialbody cb1, Celestialbody cb2) {
  const double G = 6.674e-11;

  double dx = cb1.position[0] - cb2.position[0];
  double dy = cb1.position[1] - cb2.position[1];
  double dz = cb1.position[2] - cb2.position[2];
  double dist = sqrt(dx * dx + dy * dy + dz * dz);

  double force = G * cb1.mass * cb2.mass / (dist * dist);

  acceleration[0] += force * dx / dist;
  acceleration[1] += force * dy / dist;
  acceleration[2] += force * dz / dist;
}

void Celestialbody::updateVelocity(double dt) {
  velocity[0] = acceleration[0] * dt;
  velocity[1] = acceleration[1] * dt;
  velocity[2] = acceleration[2] * dt;
}

void Celestialbody::updatePosition(double dt) {
  position[0] += velocity[0] * dt + 0.5 * acceleration[0] * dt * dt;
  position[1] += velocity[1] * dt + 0.5 * acceleration[1] * dt * dt;
  position[2] += velocity[2] * dt + 0.5 * acceleration[2] * dt * dt;
}