// Copyright 2023 Eu

#include "include/lib.h"

#include <iostream>

void ApiClass::emit_signal(int a) {
  std::cout << "[DEBUG][ApiClass::emit_signal] Emitting Signal S1" << std::endl;
  emit(S1(a));
}
