#include "bitset.h"

BitSet::BitSet(int size) : _size(size) {
    _arraySize = (size + ELEMENT_SIZE - 1) / ELEMENT_SIZE;
    _bitset = new unsigned int[_arraySize]();
}

BitSet::~BitSet() {
    delete[] _bitset;
}

int BitSet::size() const {
    return _size;
}

void BitSet::set(int pos) {
    if (pos < 0 || pos >= _size) {
        throw std::out_of_range("Position is out of range");
    }
    int index = pos / ELEMENT_SIZE;
    int bit = pos % ELEMENT_SIZE;
    _bitset[index] |= (1u << bit);
}

void BitSet::reset() {
    for (int i = 0; i < _arraySize; i++) {
        _bitset[i] = 0;
    }
}

void BitSet::flip() {
    for (int i = 0; i < _arraySize; i++) {
        _bitset[i] = ~_bitset[i];
    }
    if (_size % ELEMENT_SIZE != 0) {
        int extraBits = ELEMENT_SIZE - (_size % ELEMENT_SIZE);
        _bitset[_arraySize - 1] &= ~(~0u << (_size % ELEMENT_SIZE));
    }
}

bool BitSet::operator[](int pos) const {
    if (pos < 0 || pos >= _size) {
        throw std::out_of_range("Position is out of range");
    }
    int index = pos / ELEMENT_SIZE;
    int bit = pos % ELEMENT_SIZE;
    return (_bitset[index] & (1u << bit)) != 0;
}

QString BitSet::to_string() const {
    QString result;
    for (int i = 0; i < _size; i++) {
        result.append((*this)[i] ? "1" : "0");
    }
    return result;
}

bool BitSet::all() const {
    for (int i = 0; i < _arraySize - 1; i++) {
        if (_bitset[i] != ~0u) {
            return false;
        }
    }
    if (_size % ELEMENT_SIZE == 0) {
        return _bitset[_arraySize - 1] == ~0u;
    } else {
        return _bitset[_arraySize - 1] == (1u << (_size % ELEMENT_SIZE)) - 1;
    }
}

bool BitSet::test(int pos) const {
    return (*this)[pos];
}

void BitSet::reset(int pos) {
    if (pos < 0 || pos >= _size) {
        throw std::out_of_range("Position is out of range");
    }
    int index = pos / ELEMENT_SIZE;
    int bit = pos % ELEMENT_SIZE;
    _bitset[index] &= ~(1u << bit);
}

bool BitSet::any() const {
    for (int i = 0; i < _arraySize; i++) {
        if (_bitset[i] != 0) {
            return true;
        }
    }
    return false;
}

int BitSet::count() const {
    int result = 0;
    for (int i = 0; i < _size; i++) {
        if ((*this)[i]) {
            result++;
        }
    }
    return result;
}

void BitSet::set() {
    for (int i = 0; i < _arraySize; i++) {
        _bitset[i] = ~0u;
    }
    if (_size % ELEMENT_SIZE != 0) {
        _bitset[_arraySize - 1] = (1u << (_size % ELEMENT_SIZE)) - 1;
    }
}

unsigned long long BitSet::to_ullong() const {
    if (_size > 64) {
        throw std::overflow_error("BitSet is too large for unsigned long long");
    }
    unsigned long long result = 0;
    for (int i = 0; i < _size; i++) {
        if ((*this)[i]) {
            result |= (1ULL << i);
        }
    }
    return result;
}

bool BitSet::none() const {
    return !any();
}

void BitSet::flip(int pos) {
    if (pos < 0 || pos >= _size) {
        throw std::out_of_range("Position is out of range");
    }
    int index = pos / ELEMENT_SIZE;
    int bit = pos % ELEMENT_SIZE;
    _bitset[index] ^= (1u << bit);
}

unsigned long BitSet::to_ulong() const {
    if (_size > sizeof(unsigned long) * 8) {
        throw std::overflow_error("BitSet is too large for unsigned long");
    }
    unsigned long result = 0;
    for (int i = 0; i < _size; i++) {
        if ((*this)[i]) {
            result |= (1UL << i);
        }
    }
    return result;
}
