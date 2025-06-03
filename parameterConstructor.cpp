#include "String.hpp"

String::String(const char* str) {
    int len = 0;
    const char* ptrStr = str;
    while (*ptrStr != '\0') {
        ++len;
        ++ptrStr;
    }
    data = new char[len + 1];
    for (int i = 0; i < len; ++i) {
        data[i] = str[i];
    }
    data[len] = '\0';
    size = len;
}
