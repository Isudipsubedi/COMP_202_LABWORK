
#include <iostream>
#include "linkedlist.cpp"
int main(){
    linkedlist L1;
    L1.isEmpty(); 
    L1.addToTail(2);
    L1.traverse();
    L1.addToHead(1);
    L1.traverse();
    L1.addToTail(3);
    L1.traverse();
    L1.addToTail(6);
    L1.traverse();
    Node* predecessor=L1.retrieve(3);
    L1.add(4,predecessor);
    L1.traverse();
    Node* predecessor2=L1.retrieve(4);
    L1.add(5,predecessor2);
    L1.traverse();
    L1.removeFromHead();
    L1.traverse();
    L1.remove(4);
    L1.traverse();
    L1.search(3);
    L1.search(4);
    L1.isEmpty();
    
    return 0;
    
}
