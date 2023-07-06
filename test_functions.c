#include "ovector.h"
#include "test_functions.h"
#include <stdio.h>
#include <assert.h>

OVector vector;

OVector vectorDeleted;

void runTests(){

    initVector_conditionsDefault_shouldCreateArray();

    deleteArray__conditionsBad_shouldDeleteArray();

    pushBack__conditionsGood_shouldAddtoArrayInBack();

    pushFront__conditionsGood_shouldAddtoArrayInFront();

    mixPush__conditionsGood_shouldAddElemetns();

    popBack__conditionsGood_shouldRemoveElemetnBack();

    popFront__conditionsGood_shouldRemoveElemetnFront();

    clear__conditionsGood_shouldMakeDefaultOvector();

    stressPush__conditionsGood_shouldAddtoArray();

    removeElem__conditionsGood_shouldRemoveByElem();

    sizeIncrement__conditionsGood_shouldIncreaseSizeOfArray();

    isOvectorNull__conditionsGood_shouldCheckArrayOnNull();
}

void initVector_conditionsDefault_shouldCreateArray(){
     initVector(&vector);
     assert(5 == vector.capacity);
     ASSERT_EQ(5 , vector.capacity); //??
}

void deleteArray__conditionsBad_shouldDeleteArray(){
     initVector(&vectorDeleted);
     deleteArray(&vectorDeleted);
     assert(NULL == vectorDeleted.array);
     initVector(&vectorDeleted);
     assert(NULL != vectorDeleted.array);
}

void pushBack__conditionsGood_shouldAddtoArrayInBack(){
     assert(0 == vector.size);
     pushBack(&vector, 100);
     pushBack(&vector, 200);
     pushBack(&vector, 300);
     pushBack(&vector, 400);
     assert(4 == vector.size);
     assert(400 == vector.array[3]);
}

void pushFront__conditionsGood_shouldAddtoArrayInFront(){
     pushFront(&vector, 111);
     pushFront(&vector, 122);
     assert(6 == vector.size);
     assert(122 == vector.array[0]);
}

void mixPush__conditionsGood_shouldAddElemetns(){
     pushBack(&vector, 500);
     pushFront(&vector, 122);
     assert(8 == vector.size);
     assert(122 == vector.array[0]);
}

void popBack__conditionsGood_shouldRemoveElemetnBack(){
     popBack(&vector);
     popBack(&vector);
     assert(6 == vector.size);
     assert(300 == vector.array[5]);
}

void popFront__conditionsGood_shouldRemoveElemetnFront(){
     popFront(&vector);
     popFront(&vector);
     assert(4 == vector.size);
     assert(111 == vector.array[0]);
}

void clear__conditionsGood_shouldMakeDefaultOvector(){
     clear(&vector);
     assert(0 == vector.size);
     assert(5 == vector.capacity);
}

void stressPush__conditionsGood_shouldAddtoArray(){
     for(int i = 0; i <= 100; i++) {
         pushBack(&vectorDeleted, i);
     }
     for(int j = 101; j < 200; j++) {
         pushFront(&vectorDeleted, j);
     }

     assert(200 == vectorDeleted.size);
     assert(320 == vectorDeleted.capacity);

}

void removeElem__conditionsGood_shouldRemoveByElem(){
     removeElem(&vectorDeleted, 199);
     removeElem(&vectorDeleted, 0);
     //assert(NULL == vectorDeleted.array[200]);
     assert(198 == vectorDeleted.size);
}

void sizeIncrement__conditionsGood_shouldIncreaseSizeOfArray(){
     for(int i = 0; i <= 5; i++) {
         pushBack(&vector, i);
     }
     assert(10 == vector.capacity);
}

void isOvectorNull__conditionsGood_shouldCheckArrayOnNull(){


}
