#include <iostream>
#include "Stack.h"
using namespace std;

class ArrayStack : public stack
{
private:
    int *array = nullptr;
    int size;
    int index = -1;

public:
    ArrayStack()
    {
        this->size = 20;
        array = new int[size];
    }
    ArrayStack(int size)
    {
        this->size = size;
        array = new int[size];
    }
    void push(int data)
    {
        if (size > index)
        {
            index++;
            array[index] = data;
            return;
        }
        cout << "Stack overflow: " << endl;
        return;
    }
    void pop()
    {
        if (index > -1)
        {
            index--;
            return;
        }
        cout << "stack underflow: " << endl;
        return;
    }
    int peek()
    {
        return array[index];
    }
    bool isEmpty()
    {
        if (index > -1)
        {
            return false;
        }
        return true;
    }
};