#include <stdio.h>
#include <stdlib.h>

struct OVector{
    int size;
    int capacity;
    int* array;
};

void initializeVector(struct OVector* vector) {
    vector->size = 0;
    vector->capacity = 5;
    vector->array = malloc(vector->capacity * sizeof(int));
}

int* createArray( int capacity) {
    int* array = malloc(capacity+sizeof(int));
    return array;
}

void deleteArray(struct OVector* vector) {
    free(vector->array);
}

void resizeArray(struct OVector* vector, int newCapacity) {
    int* newArray = createArray(newCapacity);
    for (int i = 0; i < vector->capacity; i++) {
        newArray[i] = vector->array[i];
    }
    deleteArray(vector);
    vector->array = newArray;
    vector->capacity = newCapacity;
}

void push_back(struct OVector* vector, int element) {
    if (vector->size == vector->capacity) {
        resizeArray(vector, vector->capacity * 2);
    }
    vector->array[vector->size++] = element;
}

void push_front(struct OVector* vector, int element) {
    if (vector->size == vector->capacity) {
        resizeArray(vector, vector->capacity * 2);
    }
    for (int i = vector->size; i > 0; i--) {
        vector->array[i] = vector->array[i - 1];
    }
    vector->array[0] = element;
    vector->size++;
}

void pop_back(struct OVector* vector ) {
    if(vector->size > 0){
        vector->size--;
    }

}

void pop_front(struct OVector* vector ) {
    if(vector->size > 0){
        for (int i = 0; i < vector->size; i++) {
            vector->array[i] = vector->array[i + 1];
        }
        vector->size--;
    }

}

void clear(struct OVector* vector) {
    vector->size = 0;
    resizeArray(vector, 5);
}

void removeElem(struct OVector* vector, int index) {
    if (index >= 0 && index < vector->size) {
        for (int i = index; i < vector->size - 1; i++) {
            vector->array[i] = vector->array[i + 1];
        }
        vector->size--;
    }
}

void show(struct OVector* vector) {
    printf("{ ");
    for (int i = 0; i < vector->size; i++) {
        printf("%d ",vector->array[i]);
    }
    printf("}");
}
