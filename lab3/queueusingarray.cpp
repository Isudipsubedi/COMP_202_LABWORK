#include <iostream>
#include "queuearray.h"
using namespace std;
bool Queue::isEmpty()
{
    if (front == -1 && rear == -1)
        return true;
    else
        return false;
}
bool Queue::isFull()
{
    if (rear == 4)
        return true;
    else
        return false;
}
void Queue::enqueue(int val)
{
    if (isFull())
    {
        cout << "Queue is FULL" << endl;
        return;
    }
    else if (isEmpty())
    {
        rear = 0;
        front = 0;
        arr[rear] = val;
    }
    else
    {
        rear++;
        arr[rear] = val;
    }
}
int Queue::dequeue()
{
    int x;
    if (isEmpty())
    {
        cout << "Queue is Empty" << endl;
    }
    else if (front == rear)
    {
        x = arr[front];
        arr[front] = 0;
        rear = -1;
        front = -1;
        return x;
    }
    else
    {
        x = arr[front];
        arr[front] = 0;
        front++;
        return x;
    }
    return 0;
}
int Queue::Front()
{
    if (front == -1)
    {
        cout << "Queue is Empty" << endl;
    }
    else
        return arr[front];
    return 0;
}
int Queue::Rear()
{
    if (rear == -1)
    {
        cout << "Queue is Empty" << endl;
    }
    else
        return arr[rear];
    return 0;
}
void Queue::display()
{
    cout << "All value in the Queue are -" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "  ";
    }
}
int main()
{
    Queue q1;
    int option, value;
    do
    {
        cout << "\n\n What operation do you want to perform? Select Option Number . Enter 0 to exit." << endl;
        cout << "1. Enqueue()" << endl;
        cout << "2. Dequeue()" << endl;
        cout << "3. isEmpty()" << endl;
        cout << "4. isFull()" << endl;
        cout << "5. front()" << endl;
        cout << "6. rear()" << endl;
        cout << "7. Display()" << endl;
        cout << "8. Clear Screen()" << endl
             << endl;

        cin >> option;

        switch (option)
        {
        case 0:
            break;
        case 1:
            cout << "Enqueue Operation \n \n Enter an item to Enqueue in the Queue" << endl;
            cin >> value;
            q1.enqueue(value);
            break;
        case 2:
            cout << "Dequeue Operation \n \n Dequeued value : " << q1.dequeue() << endl;
            break;
        case 3:
            if (q1.isEmpty())
                cout << "Queue is Empty " << endl;
            else
                cout << "Queue is not Empty" << endl;
            break;
        case 4:
            if (q1.isFull())
                cout << "Queue is Full " << endl;
            else
                cout << "Queue is not Full" << endl;
            break;
        case 5:
            cout << "Front Operation \n\n Front of items in Queue: " << q1.Front() << endl;
            break;
        case 6:
            cout << "Rear Operation \n\n Rear of items in Queue: " << q1.Rear() << endl;
            break;
        case 7:
            cout << "Display Function called " << endl;
            q1.display();
            break;
        case 8:
            system("clear");
            break;
        default:
            cout << "Enter proper Option Number " << endl;
            break;
        }
    } while (option != 0);
    return 0;
}