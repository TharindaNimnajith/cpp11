#include "Counter.h"

Counter::Counter(): m_counter(0){};


// Destructor
Counter::~Counter() {};

void Counter::reset()
{
    m_counter = 0;
}

unsigned int Counter::get()
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
//  std::ostream &Counter::operator<<(ostream &os,
//                                     const Counter &counter)
// {
//     os << "Counter Value : " << counter.m_counter
//        << std::endl;
//     return os;
// }