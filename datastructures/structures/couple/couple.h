#ifndef __COUPLE_H__
#define __COUPLE_H__

template <typename T1, typename T2>
struct couple{
    T1 value_a;
    T2 value_b;

    couple();
    couple(T1 value_a, T2 value_b);

    couple operator = (const couple &other);
};

#include "couple_definition.h"
#endif // __COUPLE_H__
