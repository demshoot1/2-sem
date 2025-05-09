#ifndef BITSET_H
#define BITSET_H

#include <QString>
#include <stdexcept>

class BitSet {
private:
    const int ELEMENT_SIZE = sizeof(unsigned int) * 8;
    unsigned int* _bitset;
    int _size;
    int _arraySize;

public:
    BitSet(int size);
    ~BitSet();
    bool all() const;
    bool any() const;
    int count() const;
    void flip();
    void flip(int pos);
    bool none() const;
    void reset();
    void reset(int pos);
    void set();
    void set(int pos);
    int size() const;
    bool test(int pos) const;
    QString to_string() const;
    unsigned long long to_ullong() const;
    unsigned long to_ulong() const;
    bool operator[](int pos) const;
};

#endif  // BITSET_H
