
#include <iostream>
#include "linkedlist.cpp"
int main(){
    linkedlist L1;
    L1.isEmpty(); 
    L1.addToTail(20);
    L1.traverse();
    L1.addToHead(10);
    L1.traverse();
    L1.addToTail(30);
    L1.traverse();
    L1.addToTail(60);
    L1.traverse();
    Node* predecessor=L1.retrieve(30);
    L1.add(40,predecessor);
    L1.traverse();
    Node* predecessor2=L1.retrieve(40);
    L1.add(50,predecessor2);
    L1.traverse();
    L1.removeFromHead();
    L1.traverse();
    L1.remove(40);
    L1.traverse();
    L1.search(30);
    L1.search(40);
    L1.isEmpty();
    
    return 0;
    
}
