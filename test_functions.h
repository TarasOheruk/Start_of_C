#include <assert.h>

#ifndef TEST_FUNCTIONS_H
#define TEST_FUNCTIONS_H

#define ASSERT_EQ(expected, actual){ \
if ((expected) != (actual)) \
        printf("TEST FAILED! expected %d, actual %d\n", (expected), (actual)); \
assert((expected) == (actual)); \
}

void runTests();

void initVector_createArray();

void deleteArray_deleteArray();

void pushBack_addtoArrayInBack();

void pushFront_shouldAddtoArrayInFront();

void mixPush_addElemetns();

void popBack_removeElemetnBack();

void popFront_removeElemetnFront();

void clear_makeDefaultOvector();

void stressPush_addtoArray();

void removeElem_removeByElem();

void sizeIncrement_increaseSizeOfArray();


#endif // TEST_FUNCTIONS_H
