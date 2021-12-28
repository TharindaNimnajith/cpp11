#include "SharePointer.h"
#include <iostream>

template <class T>
SharePointer<T>::SharePointer(SharePointer<T> &sp)
{
    m_ptr = sp.m_ptr;
    m_counter = sp.m_counter;
    (*m_counter)++;
}

template <class T>
SharePointer<T>::SharePointer(T *ptr )
{
    m_ptr = ptr;
    m_counter = new Counter();
    if (ptr)
    {
        (*m_counter)++;
    }
}


template <class T>
unsigned int SharePointer<T>::use_count()
{
    return m_counter->get();
}

template <class T>
T *SharePointer<T>::get()
{
    return m_ptr;
}

template <class T>
T &SharePointer<T>::operator*()
{
    return *m_ptr;
}

template <class T>
T *SharePointer<T>::operator->()
{
    return m_ptr;
}

template <class T>
SharePointer<T>::~SharePointer()
{
    (*m_counter)--;
    if (m_counter->get() == 0)
    {
        delete m_counter;
        delete m_ptr;
    }
    std::cout << "object destroyed \n";
}