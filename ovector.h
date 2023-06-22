#ifndef OVECTOR_H
#define OVECTOR_H

typedef struct OVector{
    unsigned int size;
    unsigned int capacity;
    int* array;
} OVector;


int* createArray(int capacity);

void initVector(OVector* vector);

void deleteArray(OVector* vector);

void resizeArray(OVector* vector, int newCapacity);

void sizeIncrement(OVector* vector);

void pushBack(OVector* vector, int element);

void pushFront(OVector* vector, int element);

void popBack(OVector* vector);

void popFront(OVector* vector);

void clear(OVector* vector);

void removeElem(OVector* vector, int index);

void show(OVector* vector);

#endif /* OVECTOR_H */
