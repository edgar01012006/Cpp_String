#include "String.hpp"

size_t String::getLength() const {
    int ret = 0;
    char* ptrData = data;
    while (*ptrData != '\0') {
        ++ret;
        ++ptrData;
    }
    return ret;
}
