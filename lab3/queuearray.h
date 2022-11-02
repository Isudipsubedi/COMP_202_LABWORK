class Queue
{
private:
    int front;
    int rear;
    int arr[5];

public:
    Queue()
    {
        front = -1;
        rear = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }
    bool isEmpty();
    bool isFull();
    void enqueue(int val);
    int dequeue();
    int Front();
    int Rear();
    void display();
};