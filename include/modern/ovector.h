#ifndef OVECTOR_H
#define OVECTOR_H

typedef struct OVector{
    unsigned int size;
    unsigned int capacity;
    int* array;
} OVector;

void initVector(OVector* vector);

void deleteArray(OVector* vector);

void pushBack(OVector* vector,unsigned int element);

void pushFront(OVector* vector,unsigned int element);

void popBack(OVector* vector);

void popFront(OVector* vector);

void clear(OVector* vector);

void removeElem(OVector* vector,unsigned int index);

void show(OVector* vector);

#endif /* OVECTOR_H */
