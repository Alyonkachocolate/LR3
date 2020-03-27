#ifndef LR3_SOLENOID_H
#define LR3_SOLENOID_H

#include "abstract.h"
class solenoid : public abstract {
private:
  double L = 0;
  size_t I = 0;

public:
  solenoid(double, size_t);
  double W() override;
  void print() override;
};
solenoid::solenoid(double L, size_t I) : L(L), I(I) {}
double solenoid::W() { return L * I * I / 2.; }
void solenoid::print() {
  std::cout << "It's a solenoid. L = " << L << ", I = " << I
            << "\nMagnetic field energy = " << W() << std::endl;
}

#endif // LR3_SOLENOID_H
