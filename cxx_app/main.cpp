// Copyright 2023 Eu

#include <iostream>

#include "api/include/lib.h"

int main() {
  ApiClass t;

  QObject::connect(&t, &ApiClass::S1, [](int a) {
    std::cout << "S1 captured from callback in c++ code with value " << a << "!"
              << std::endl;
  });
  t.emit_signal(2);

  return 0;
}
