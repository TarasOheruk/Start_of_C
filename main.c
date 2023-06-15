#include "ocollection.h"

int main() {

    struct OVector vector;
    initializeVector(&vector);

    push_back(&vector, 10);
    push_back(&vector, 20);
    push_back(&vector, 30);
    push_back(&vector, 40);
    push_back(&vector, 50);

    pop_front(&vector);
    push_front(&vector, 60);
    push_front(&vector, 70);

    pop_front(&vector);
    push_back(&vector, 10);
    pop_back(&vector);

    removeElem(&vector, 4);
    removeElem(&vector, 0);

    show(&vector);

    clear(&vector);

    deleteArray(&vector);

    return 0;
}
