#include "someClass.h"

#include <utility>

Some::Some(std::string msg) : message(std::move(msg)) {}

void Some::showMessage() {
    std::cout << message << std::endl;
}

Some::~Some() = default;
