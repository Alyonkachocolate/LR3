#ifndef LR3_CONDENSER_H
#define LR3_CONDENSER_H

#include "abstract.h"
class condenser : public abstract {
private:
  double C = 0;
  size_t U = 0;

public:
  condenser(double, size_t);
  double W() override;
  void print() override;
};
condenser::condenser(double C, size_t U) : C(C), U(U) {}
double condenser::W() { return C * U * U / 2.; }
void condenser::print() {
  std::cout << "It's a condenser. C = " << C << ", U = " << U
            << "\nElectric field energy = " << W() << std::endl;
}

#endif // LR3_CONDENSER_H
