#ifndef __DYNAMIC_ARRAY_H__
#define __DYNAMIC_ARRAY_H__

template <typename T>
class autosorted_dynamic_array{ /// Requires bug-squashing
    private:
    int64_t size;
    int64_t last_index;
    T* array;

    public:
    autosorted_dynamic_array();
    autosorted_dynamic_array(int64_t size);
    autosorted_dynamic_array(const autosorted_dynamic_array &other);
    ~autosorted_dynamic_array();

    autosorted_dynamic_array& operator = (const autosorted_dynamic_array &other);

    autosorted_dynamic_array operator + (const autosorted_dynamic_array &other) const;
    autosorted_dynamic_array operator + (const T &value) const;
    T& operator [] (const int64_t &index);

    bool operator == (const autosorted_dynamic_array &other);

    bool is_empty();

    int64_t get_last_index();

    bool insert(T val, int64_t index);
    void append(T val);
    void prepend(T val);

    bool remove(int64_t index);
    void shrink_to_fit();
    ///void force_shrink(int64_t new_size);
    void clear();

    T& at(int64_t index);
    T& front();
    T& back();

    void dp();
};

#include "autosorted_dynamic_array_definition.h"

#endif /// __DYNAMIC_ARRAY_H__

