#pragma once
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"

#include <iostream>

class Counter
{
private:
    unsigned int m_counter{};

public:
    Counter();

    ~Counter();

    Counter(const Counter &) = delete;
    ;

    Counter &operator=(const Counter &) = delete;
    ;

    void reset();

    unsigned int get() const;

    void operator++();

    void operator++(int);

    void operator--();

    void operator--(int);

    // friend std::ostream &operator<<(std::ostream &os, const Counter &counter);
};

#pragma clang diagnostic pop
