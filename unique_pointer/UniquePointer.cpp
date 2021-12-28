#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma ide diagnostic ignored "readability-delete-null-pointer"
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"

#include "UniquePointer.h"
#include <iostream>

template<class T>
UniquePointer<T>::UniquePointer() : ptr(nullptr) {
}

template<class T>
UniquePointer<T>::UniquePointer(T *ptr) : ptr(ptr) {
}

template<class T>
UniquePointer<T>::UniquePointer(UniquePointer &&obj) noexcept {
    obj.ptr = nullptr;
    this->ptr = obj.ptr;
}

template<class T>
UniquePointer<T> &UniquePointer<T>::operator=(UniquePointer &&obj) noexcept {
    if (ptr != nullptr)
        delete ptr;
    this->ptr = obj.ptr;
    obj.ptr = nullptr;
}

template<class T>
T *UniquePointer<T>::operator->() {
    return this->ptr;
}

template<class T>
T &UniquePointer<T>::operator*() {
    return *(this->ptr);
}

template<class T>
UniquePointer<T>::~UniquePointer() {
    if (ptr != nullptr)
        std::cout << "Object destroyed" << std::endl;
    delete ptr;
}

#pragma clang diagnostic pop
