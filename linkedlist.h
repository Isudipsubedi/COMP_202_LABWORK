#ifndef linkedList_h
#define linkedList_h

class Node {
   public:
   int data;
   class Node *next;
   Node(){data=0;next=nullptr;}
};

class linkedlist {
    public:
     Node* HEAD;
     Node* TAIL;  

    linkedlist(){HEAD = nullptr;TAIL = nullptr;}

    bool isEmpty();
    void addToHead(int data);
    void addToTail(int data);
    void add(int data, Node *predecessor);

    void removeFromHead();
    void remove(int data);

    Node* retrieve(int data);
    bool search(int data);
    void traverse();
};

#endif