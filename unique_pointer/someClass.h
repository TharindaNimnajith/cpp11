#pragma once
#include <iostream>

class Some
{
    private:
    std::string message;
public:
    Some(std::string msg);
    ~Some();
    void showMessage();
};