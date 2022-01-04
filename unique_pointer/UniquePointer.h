#pragma once
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"

template<class T>
class UniquePointer {

private:

    T *ptr = nullptr;


public:

    UniquePointer();

    explicit UniquePointer(T *ptr);

    UniquePointer(const UniquePointer *obj) = delete;

    UniquePointer(UniquePointer &&obj) noexcept;

    UniquePointer &operator=(const UniquePointer &obj) = delete;

    UniquePointer &operator=(UniquePointer &&obj) noexcept;

    T *operator->();

    T &operator*();

    ~UniquePointer();

};

#pragma clang diagnostic pop
