#include <iostream>
#include <cassert>
#include "fifo_test.h"
#include "fifo.h"

void TEST_FIFO::test_empty_queue_int() {
    FIFO<int> queue;
    bool is_empty = true;
    assert(queue.empty_check() == is_empty);
}

void TEST_FIFO::test_not_epmty_queue_int() {
    FIFO<int> queue;
    queue.push_back(2);
    bool is_empty = false;
    assert(queue.empty_check() == is_empty);
}

void TEST_FIFO::test_push_back_int() {
    FIFO<int> queue;
    queue.push_back(2);
    queue.push_back(4);
    queue.push_back(6);
    int first_v = 6;
    int second_v = 4;
    int third_v = 2;
    assert(queue.queue[0] == first_v);
    assert(queue.queue[1] == second_v);
    assert(queue.queue[2] == third_v);
}

void TEST_FIFO::test_pop_int() {
    FIFO<int> queue;
    queue.push_back(2);
    queue.push_back(4);
    queue.push_back(6);
    int third_v = 2;
    assert(queue.queue[2] == third_v);
    assert(queue.get_size() == 3);
    int poped = 2;
    assert(queue.pop() == poped);
}

void TEST_FIFO::test_size_int() {
    FIFO<int> queue;
    queue.push_back(2);
    queue.push_back(4);
    queue.push_back(6);
    int expected_size = 3;
    assert(queue.get_size() == expected_size);
}

void TEST_FIFO::test_print_int() {

}


