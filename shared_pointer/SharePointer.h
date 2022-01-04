#pragma once
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"

#include "Counter.h"

template<class T>
class SharePointer {

private:

    Counter *m_counter;

    T *m_ptr;


public:

    SharePointer(SharePointer<T> &sp);

    explicit SharePointer(T *ptr = nullptr);

    unsigned int use_count();

    T *get();

    T &operator*();

    T *operator->();

    ~SharePointer();

};
