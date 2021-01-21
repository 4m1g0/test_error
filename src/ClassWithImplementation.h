
#ifndef CLASS_WITH_IMPL
#define CLASS_WITH_IMPL

#include "Arduino.h"

template <typename ServerType>
class ClassWithImplementation {
public:
    ClassWithImplementation(int t);
};

template <typename ServerType>
ClassWithImplementation<ServerType>::ClassWithImplementation(int test) {
}

#endif