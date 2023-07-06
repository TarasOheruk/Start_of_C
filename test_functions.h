#ifndef TEST_FUNCTIONS_H
#define TEST_FUNCTIONS_H

#define ASSERT_EQ(expected, actual) do { \
if ((expected) != (actual)) { \
        printf("TEST FAILED!!! Bad cred in ovector: expected %d, actual %d but we continue\n", (expected), (actual)); \
        return; \
} \
} while(0)

void runTests();

void initVector_conditionsDefault_shouldCreateArray();

void deleteArray__conditionsBad_shouldDeleteArray();

void pushBack__conditionsGood_shouldAddtoArrayInBack();

void pushFront__conditionsGood_shouldAddtoArrayInFront();

void mixPush__conditionsGood_shouldAddElemetns();

void popBack__conditionsGood_shouldRemoveElemetnBack();

void popFront__conditionsGood_shouldRemoveElemetnFront();

void clear__conditionsGood_shouldMakeDefaultOvector();

void stressPush__conditionsGood_shouldAddtoArray();

void removeElem__conditionsGood_shouldRemoveByElem();

void sizeIncrement__conditionsGood_shouldIncreaseSizeOfArray();

void isOvectorNull__conditionsGood_shouldCheckArrayOnNull();

#endif // TEST_FUNCTIONS_H
