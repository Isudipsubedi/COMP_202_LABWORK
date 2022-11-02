#include <iostream>
#include "LinkedList.h"
using namespace std;
class Queue
{
public:
    Node *front;
    Node *rear;
    Queue()
    {
        front = NULL;
        rear = NULL;
    }

    bool isEmpty()
    {
        if (front == NULL && rear == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool checkIfNodeExist(Node *n)
    {
        Node *temp = front;
        bool exist = false;
        while (temp != NULL)
        {
            if (temp->key == n->key)
            {
                exist = true;
                break;
            }
            temp = temp->next;
        }
        return exist;
    }

    void enqueue(Node *n)
    {
        if (isEmpty())
        {
            front = n;
            rear = n;
            cout << "Node Enqueued Successfully " << endl;
        }
        else if (checkIfNodeExist(n))
        {
            cout << "Node already exists with this key value."
                 << "Enter different key value" << endl;
        }
        else
        {
            rear->next = n;
            rear = n;
            cout << "Node Enqueued Successfully" << endl;
        }
    }

    Node *dequeue()
    {
        Node *temp = NULL;
        if (isEmpty())
        {
            cout << "Stack underflow" << endl;
            return NULL;
        }
        else
        {
            if (front == rear)
            {
                temp = front;
                front = NULL;
                rear = NULL;
                return temp;
            }
            else
            {
                temp = front;
                front = front->next;
                return temp;
            }
        }
    }
    int Front()
    {
        int value;
        value = front->data;
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
        }
        return value;
    }
    int Rear()
    {
        int value;
        value = rear->data;
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
        }
        return value;
    }
    int count()
    {
        int count = 0;
        Node *temp = front;
        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }

    void display()
    {
        {
            if (isEmpty())
            {
                cout << "Queue is Empty" << endl;
            }
            else
            {
                cout << "All values in the Queue are: " << endl;
                Node *temp = front;
                while (temp != NULL)
                {
                    cout << "(" << temp->key << "," << temp->data << ")"
                         << "->";
                    temp = temp->next;
                }
                cout << endl;
            }
        }
    }
};

int main()
{
    Queue q;
    int option, key, data;
    do
    {
        cout << "What operation do you want to perform? "
             << "Select Option Number. Enter 0 to exit" << endl;
        cout << "1. Enqueue()" << endl;
        cout << "2. Dequeue()" << endl;
        cout << "3. isEmpty()" << endl;
        cout << "4. Front()" << endl;
        cout << "5. Rear()" << endl;
        cout << "6. Display()" << endl;
        cout << "7. Clear Screen()" << endl
             << endl;

        cin >> option;

        Node *new_node = new Node();
        switch (option)
        {
        case 0:
            break;
        case 1:
            cout << "Enqueue Fuction called -" << endl;
            cout << "Enter KEY and VALUE of Node to Enqueue"
                 << "in the Queue" << endl;
            cin >> key;
            cin >> data;
            new_node->key = key;
            new_node->data = data;
            q.enqueue(new_node);
            break;
        case 2:
            cout << "Dequeue Function Called -" << endl;
            new_node = q.dequeue();
            cout << "Dequeued Value is : (" << new_node->key << "," << new_node->data << ")";
            delete new_node;
            cout << endl;
            break;
        case 3:
            cout << "isEmpty Function Called -" << endl;
            if (q.isEmpty())
                cout << "Queue is Empty" << endl;
            else
                cout << "Queue is Not Empty" << endl;
            break;
        case 4:
            cout << "Front of nodes in the Queue: " << q.Front() << endl;
            break;
        case 5:
            cout << "Rear Function Called -" << endl;
            cout << "Rear of nodes in the Queue: " << q.Rear() << endl;
            break;
        case 6:
            cout << "Display function Called -" << endl;
            q.display();
            cout << endl;
            break;
        case 7:
            system("clear");
            break;
        default:
            cout << "Enter proper Option Number " << endl;
            break;
        }

    } while (option != 0);
    return 0;
}