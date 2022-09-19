#include <iostream>
#include <string>

#include "../include/ArrayStack.h"
#include "../include/LinkedListStack.h"
using namespace std;

int main()
{
    LinkedListStack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.pop();
    cout << stack.peek() << endl;

    ArrayStack stack1;
    stack1.push(4);
    stack1.push(3);
    stack1.push(2);
    stack1.push(1);
    stack1.pop();
    cout << stack1.peek() << endl;
}
