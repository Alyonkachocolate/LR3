#include "abstract.h"
#include "condenser.h"
#include "solenoid.h"
#include <iostream>
#include <vector>
int main() {
  size_t n;
  std::cin >> n;
  std::vector<abstract *> element(n);
  bool el;
  size_t curr;
  double cnst;
  for (size_t i = 0; i < n; i++) {
    el = i<2;
    if (el) {
      std::cout << "L = ";
      std::cin >> cnst;
      std::cout << "I = ";
      std::cin >> curr;
      abstract* e = new solenoid(cnst, curr);
      element[i] = e;
    } else {
      std::cout << "C = ";
      std::cin >> cnst;
      std::cout << "U = ";
      std::cin >> curr;
      abstract* e = new condenser(cnst, curr);
      element[i] = e;
    }
  }

  for (size_t i = 0; i < n; i++) { // вывод всех данных и энергии
    std::cout << i + 1 << ") ";
    element[i]->print();
  }

  for (size_t i = 0; i < n; i++) { // вывод всех данных и энергии
    delete &element[i];
  }

  return 0;
}