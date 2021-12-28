#pragma once

template <class T>
class UniquePointer
{
private:
    T *ptr = nullptr;

public:
    UniquePointer();
    UniquePointer(T *ptr);
    UniquePointer(const UniquePointer *obj) = delete;
    UniquePointer &operator=(const UniquePointer &obj) = delete;
    UniquePointer(UniquePointer &&obj);
    void operator=(UniquePointer &&obj);
    T* operator->();
    T& operator*();
    ~UniquePointer();
};
