#include "abstract.h"
#include "condenser.h"
#include "solenoid.h"
#include <iostream>
#include <vector>
int main() {
  size_t n;
  std::cin >> n;
  std::vector<abstract *> element(n);
  std::cout << "If it's solenoid write 1, else write 0\n"; // если соленоид -
  // 1, иначе - 0
  bool el;
  size_t curr;
  double cnst;
  for (size_t i = 0; i < n; i++) {
    std::cout << "1 or 0\n"; // выбор соленоид/конденсатор
    std::cin >> el;
    if (el) {
      std::cout << "L = ";
      std::cin >> cnst;
      std::cout << "I = ";
      std::cin >> curr;
      solenoid e(cnst, curr);
      element[i] = &e;
    } else {
      std::cout << "C = ";
      std::cin >> cnst;
      std::cout << "U = ";
      std::cin >> curr;
      condenser e(cnst, curr);
      element[i] = &e;
    }
  }

  for (size_t i = 0; i < n; i++) { // вывод всех данных и энергии
    std::cout << i + 1 << ") ";
    element[i]->print();
  }
  return 0;
}