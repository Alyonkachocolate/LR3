#ifndef LR3_SOLENOID_H
#define LR3_SOLENOID_H

#include "abstract.h"
class solenoid : public abstract {
private:
  double L = 0;
  double I = 0;

public:
  solenoid(const double &L, const double &I);
  double W() override;
  void print() override;
};
solenoid::solenoid(const double &l, const double &i) : L(l), I(i) {}
double solenoid::W() { return L * I * I / 2.; }
void solenoid::print() {
  std::cout << "It's a solenoid. L = " << L << ", I = " << I
            << "\nMagnetic field energy = " << W() << std::endl;
}

#endif // LR3_SOLENOID_H
