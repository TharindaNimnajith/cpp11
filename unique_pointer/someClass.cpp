#include "someClass.h"

Some::Some(std::string msg) : message(msg) {
};

void Some::showMessage()
{
    std::cout << message << std::endl;
};
Some::~Some(){};