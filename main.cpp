#include <iostream>
#include "fifo.h"
#include "fifo_test.h"

int main() {
  TEST_FIFO test;
  test.test_empty_queue_int();
  test.test_not_epmty_queue_int();
  test.test_push_back_int();
  test.test_size_int();
  test.test_pop_int();
  return 0;
}