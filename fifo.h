#include <stdio.h>
#ifndef FIFO_
#define FIFO_

template <class T>
class FIFO {
    public:
        int size = 0;
        T *queue = (T*)malloc(size*sizeof(T));
        void push_back(T element);
        T& pop();
        int get_size(){return size;}
        bool empty_check(){return !size;}
        bool operator==(FIFO<T> &queue);
        friend std::ostream& operator<<(std::ostream& stream, const FIFO<T>& queue) {
            stream << "FIFO queue size: " << queue.size << '\n';
            stream << "Elements: ";
            for(int i=0; i<queue.size; i++) {
                stream << queue.queue[i] << ", ";
            }
            stream << '\n';
            return stream;
        }
        FIFO() {
            size = 0;
        };
        ~FIFO() { delete [] queue;}
};

class Tuple {
    public:
        int first_v;
        int second_v;
        Tuple(int first=0, int second=0)
            : first_v(first), second_v(second)
        {}
        bool operator!=(Tuple& tuple) {
            if(first_v == tuple.first_v && second_v == tuple.second_v) {
                return false;
            }
            else { return true; }
        }
        friend std::ostream& operator<<(std::ostream& stream, const Tuple& tuple) {
            stream << "(" << tuple.first_v << "," << tuple.second_v << ")";
            return stream;
        }
};

#endif