#include <modern/ovector.h>
#include <stdio.h>
#include <assert.h>

#define ASSERT_EQ(expected, actual) do { \
if ((expected) != (actual)){ \
        assert((expected) == (actual)); \
} \
} while(0)

void initVector_createArray(){
    OVector vector;
    initVector(&vector);
    ASSERT_EQ(0 , vector.size);
    ASSERT_EQ(5 , vector.capacity);
}

void deleteArray_deleteArray(){
    OVector vector;
    initVector(&vector);
    deleteArray(&vector);
    ASSERT_EQ(NULL , vector.array);
    ASSERT_EQ(0 , vector.size);
    ASSERT_EQ(5 , vector.capacity);
}

void pushBack_addtoArrayInBack(){
    OVector vector;
    initVector(&vector);
    ASSERT_EQ(0 , vector.size);
    pushBack(&vector, 100);
    ASSERT_EQ(1 , vector.size);
    pushBack(&vector, 200);
    ASSERT_EQ(2 , vector.size);
    pushBack(&vector, 300);
    ASSERT_EQ(3 , vector.size);
    pushBack(&vector, 400);
    ASSERT_EQ(4 , vector.size);
    ASSERT_EQ(100 , vector.array[0]);
    ASSERT_EQ(200 , vector.array[1]);
    ASSERT_EQ(300 , vector.array[2]);
    ASSERT_EQ(400 , vector.array[3]);
}

void pushFront_shouldAddtoArrayInFront(){
    OVector vector;
    initVector(&vector);
    pushFront(&vector, 111);
    ASSERT_EQ(1 , vector.size);
    pushFront(&vector, 122);
    ASSERT_EQ(2 , vector.size);
    ASSERT_EQ(122 , vector.array[0]);
}

void mixPush_addElemetns(){
    OVector vector;
    initVector(&vector);
    pushBack(&vector, 500);
    ASSERT_EQ(1 , vector.size);
    pushFront(&vector, 122);
    ASSERT_EQ(2 , vector.size);
    ASSERT_EQ(122 , vector.array[0]);
}

void popBack_removeElemetnBack(){
    OVector vector;
    initVector(&vector);
    pushBack(&vector, 500);
    ASSERT_EQ(1 , vector.size);
    pushFront(&vector, 122);
    ASSERT_EQ(2 , vector.size);
    popBack(&vector);
    ASSERT_EQ(1 , vector.size);
    popBack(&vector);
    ASSERT_EQ(0 , vector.size);
}

void popFront_removeElemetnFront(){
    OVector vector;
    initVector(&vector);
    pushBack(&vector, 500);
    ASSERT_EQ(1 , vector.size);
    pushFront(&vector, 122);
    ASSERT_EQ(2 , vector.size);
    popFront(&vector);
    ASSERT_EQ(1 , vector.size);
    popFront(&vector);
    ASSERT_EQ(0 , vector.size);
}

void clear_makeDefaultOvector(){
    OVector vector;
    initVector(&vector);
    clear(&vector);
    ASSERT_EQ(0 , vector.size);
    ASSERT_EQ(5 , vector.capacity);
}

void stressPush_addtoArray(){
    OVector vector;
    initVector(&vector);
    for(int i = 0; i <= 100; i++) {
        pushBack(&vector, i);
    }
    for(int j = 101; j < 200; j++) {
        pushFront(&vector, j);
    }

    ASSERT_EQ(200 , vector.size);
    ASSERT_EQ(320 , vector.capacity);

}

void removeElem_removeByElem(){
    OVector vector;
    initVector(&vector);
    pushBack(&vector, 500);
    ASSERT_EQ(1 , vector.size);
    pushFront(&vector, 122);
    ASSERT_EQ(2 , vector.size);
    pushBack(&vector, 500);
    ASSERT_EQ(3 , vector.size);
    removeElem(&vector, 0);
    ASSERT_EQ(2 , vector.size);
    removeElem(&vector, 1);
    //assert(NULL == vectorDeleted.array[200]);
    ASSERT_EQ(1 , vector.size);
}

void sizeIncrement_increaseSizeOfArray(){
    OVector vector;
    initVector(&vector);
    for(int i = 0; i <= 5; i++) {
        pushBack(&vector, i);
    }
    ASSERT_EQ(10 , vector.capacity);
    ASSERT_EQ(6 , vector.size);
}

int main(){

    initVector_createArray();

    deleteArray_deleteArray();

    pushBack_addtoArrayInBack();

    pushFront_shouldAddtoArrayInFront();

    mixPush_addElemetns();

    popBack_removeElemetnBack();

    popFront_removeElemetnFront();

    clear_makeDefaultOvector();

    stressPush_addtoArray();

    removeElem_removeByElem();

    sizeIncrement_increaseSizeOfArray();

    return 0;

}
