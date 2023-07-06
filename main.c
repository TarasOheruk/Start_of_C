#include "ovector.h"
#include "test_functions.h"
#include <stdio.h>


int main() {

    runTests();

    OVector vector;
    initVector(&vector);

    pushBack(&vector, 10);
    pushFront(&vector, 60);
    pushFront(&vector, 30);
    pushBack(&vector, 10);
    pushBack(&vector, 10);
    pushFront(&vector, 60);

    pushFront(&vector, 30);
    pushBack(&vector, 10);
    pushBack(&vector, 10);
    pushFront(&vector, 60);
    popBack(&vector);
    popFront(&vector);
    popBack(&vector);
    removeElem(&vector, 1);

    show(&vector);
    printf("size = %d\n", vector.size);
    printf("capacity = %d\n", vector.capacity);

    clear(&vector);

    printf("%p \n", (int*)vector.array);

    deleteArray(&vector);

    printf("%p ", (int*)vector.array);


    OVector vector1;

    initVector(&vector1);

    pushBack(&vector1, 10);

    show(&vector1);

    clear(&vector1);

    printf("%p \n", (int*)vector1.array);

    deleteArray(&vector1);

    printf("%p ", (int*)vector1.array);

    return 0;
}
