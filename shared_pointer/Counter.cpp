#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"

#include "Counter.h"

Counter::Counter() : m_counter(0) {}

// Destructor
Counter::~Counter() = default;

void Counter::reset()
{
    m_counter = 0;
}

unsigned int Counter::get() const
{
    return m_counter;
}

// Overload post/pre increment
void Counter::operator++()
{
    m_counter++;
}

void Counter::operator++(int)
{
    m_counter++;
}

// Overload post/pre decrement
void Counter::operator--()
{
    m_counter--;
}

void Counter::operator--(int)
{
    m_counter--;
}

// Overloading << operator
// std::ostream &Counter::operator<<(ostream &os, const Counter &counter) {
//    os << "Counter Value : " << counter.m_counter << std::endl;
//    return os;
//}

#pragma clang diagnostic pop
