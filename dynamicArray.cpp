//Created by Oheruk Taras
/*
    TODO:
    1.Розібратись з size (при виводі виводить не все)
    2.
*/

#include <iostream>
#include <time.h>
#include <string>

using namespace std;

class List {
private:
    int* array;
    int size;
    int capacity;

public:
    List() {
        size = 0;
        capacity = 5;
        array = new int[capacity];
    }

    void add(int index, int value) {
        if (index >= capacity) {
            
            int newCapacity = capacity + 5;
            int* newArray = new int[newCapacity];

            for (int i = 0; i < size; i++) {
                newArray[i] = array[i];
            }

            delete[] array;

            array = newArray;
            capacity = newCapacity;
        }

        array[index] = value;
        size++;
    }

    void print() {
        for (int i = 0; i < capacity; i++) {
            std::cout << array[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    List list;

    list.add(0, 10);
    list.add(1, 20);
    list.add(4, 50);
    list.add(5, 60); 

    list.print(); 

    return 0;
}