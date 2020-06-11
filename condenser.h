#ifndef LR3_CONDENSER_H
#define LR3_CONDENSER_H

#include "abstract.h"
class condenser : public abstract {
private:
  double C = 0;
  double U = 0;

public:
  condenser(const double &c, const double &u);
  double W() override;
  void print() override;
};
condenser::condenser(const double &c, const double &u) : C(c), U(u) {}
double condenser::W() { return C * U * U / 2.; }
void condenser::print() {
  std::cout << "It's a condenser. C = " << C << ", U = " << U
            << "\nElectric field energy = " << W() << std::endl;
}

#endif // LR3_CONDENSER_H
