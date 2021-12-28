#include "UniquePointer.h"
#include <iostream>

template <class T>
UniquePointer<T>::UniquePointer() : ptr(nullptr)
{
}

template <class T>
UniquePointer<T>::UniquePointer(T *ptr) : ptr(ptr)
{
}

template <class T>
UniquePointer<T>::UniquePointer(UniquePointer &&obj)
{
    obj.ptr = nullptr;
    this->ptr = obj.ptr;
}

template <class T>
void UniquePointer<T>::operator=(UniquePointer &&obj)
{
    if (ptr != nullptr)
        delete ptr;

    this->ptr = obj.ptr;
    obj.ptr = nullptr;
}

template <class T>
T *UniquePointer<T>::operator->()
{
    return this->ptr;
}

template <class T>
T &UniquePointer<T>::operator*()
{
    return *(this->ptr);
}

template <class T>
UniquePointer<T>::~UniquePointer()
{
    if (ptr != nullptr)
        std::cout << "object destroyed \n";

    delete ptr;
}