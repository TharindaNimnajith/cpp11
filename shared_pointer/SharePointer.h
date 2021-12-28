#pragma once
#include "Counter.h"

template <class T>
class SharePointer
{
private:
    Counter* m_counter;
	T* m_ptr;
public:
    ~SharePointer();
    explicit SharePointer(T* ptr = nullptr);
    SharePointer(SharePointer<T>& sp);
    unsigned int use_count();
    T* get();
    T& operator*();
    T* operator->();
};


