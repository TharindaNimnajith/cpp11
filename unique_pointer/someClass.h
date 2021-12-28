#pragma once

#include <iostream>

class Some {
private:
    std::string message;

public:
    explicit Some(std::string msg);

    ~Some();

    void showMessage();
};
