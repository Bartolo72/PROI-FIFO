#include <iostream>
#include "fifo.h"

template <class T>
void FIFO<T>::push_back(T element) {
    size += 1;
    T *new_queue = new T[size];
    new_queue[0] = element;
    for(int i=0; i<size; i++) {
        new_queue[(i + 1)] = queue[i];
    }
    delete [] queue;
    queue = new_queue;
}

template <class T>
T& FIFO<T>::pop() {
    T& element = queue[size -1];
    size -= 1;
    T *new_queue = new T[size];
    for(int i=0; i<size; i++) {
        new_queue[i] = queue[i];
    }
    delete [] queue;
    queue = new_queue;
    return element;
}

template <class T>
bool FIFO<T>::operator==(FIFO<T> &queue2) {
    bool is_equal = true;
    if(queue2.size == size) {
        for(int i=0; i<size; i++) {
            if(queue2.queue[i] != queue[i]) {
                is_equal = false;
            } else {continue;}
        }
    } else {
        return !is_equal;
    }
    return is_equal;
}

template class FIFO<int>;
template class FIFO<Tuple>;