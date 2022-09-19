#ifndef Stack_h
#define Stack_h
using namespace std;

class stack
{
protected:
    stack() {}
    ~stack() {}
    virtual void push(int data) = 0;
    virtual void pop() = 0;
    virtual bool isEmpty() = 0;
    virtual int peek() = 0;
};

#endif //
