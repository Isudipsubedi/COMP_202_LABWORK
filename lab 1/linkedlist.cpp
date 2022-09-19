#include <iostream>
#include "linkedlist.h"
using namespace std;

bool linkedlist ::isEmpty()
{
    cout << "The Linked list is empty:\n";
    Node *Temp = HEAD; // Temp Node pointing to Head 
    if (Temp == NULL)
    {
        cout << "True \n";
        return true;
    }
    else
    {
        cout << "False \n\n";
        return false;
    }
}

void linkedlist ::addToHead(int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = HEAD;
    HEAD = newNode;
    cout << "A newNode having data " << newNode->data << " added to Head \n";
}

void linkedlist ::addToTail(int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = NULL; // newNode pointing Tail
    Node *temp = HEAD;    // Creating a temporary node 
    // Empty Linked List
    if (HEAD == NULL)
    {
        HEAD = newNode;
        cout << "New Node with data " << newNode->data << " added to empty Linked List \n";
    }
    // Non Empty Linked List
    else
    {
        while (temp->next != NULL)
        {                      
            temp = temp->next; 
        }
        temp->next = newNode; 
        cout << "newNode with data " << newNode->data << " added to TAIL \n";
    }
}

void linkedlist ::add(int data, Node *predecessor)
{
    Node *newNode = new Node;
    newNode->data = data;
    Node *temp = HEAD; // Creating a temporary node and assigning it to HEAD
    if (temp == NULL)
    {
        cout << "Error: NULL\n";
        return;
    }
    else
    {
        while (temp != NULL)
        {
            if (temp == predecessor)
            {
                newNode->next = predecessor->next;
                predecessor->next = newNode;
                cout << "newNode having data " << newNode->data << " added after predecessor Node with " << predecessor->data << endl;
                return;
            }
            temp = temp->next;
        }
    }
}

void linkedlist ::removeFromHead()
{
    Node *temp = HEAD; // Creating a temporary node and assigning it to head
    HEAD = HEAD->next; // HEAD pointing to second node
    delete temp;       // Deleting first Node
    cout << "First Node deleted \n";
}

void linkedlist ::remove(int data)
{
    int check = data;
    Node *previousNode;
    if (HEAD == NULL && HEAD->data == check)
    {
        previousNode = HEAD;
        HEAD = HEAD->next;
        delete previousNode;
    }

    Node *temp = HEAD; // Creating a temporary node and assigning it to head
    if (temp->next != NULL)
    {
        while (temp->next != NULL)
        {
            if (temp->next->data == check)
            {
                previousNode = temp->next;
                temp->next = temp->next->next;
                delete previousNode;
                cout << check << " deleted.\n";
            }
            else
            {
                temp = temp->next;
            }
        }
    }
    else
    {
        cout << "Error! can't delete from EMPTY List \n";
    }
}

Node *linkedlist ::retrieve (int data)
{
    int extract = data;
    Node *temp = HEAD;
    Node *summon;
    int count = 1;
    if (temp != NULL)
    {
        while (temp != NULL)
        {
            if (temp->data == extract)
            {
                cout << extract << " found at index: " << count << endl;
                summon = temp;
                return summon;
            }
            temp = temp->next;
            count++;
        }
        cout << extract << " not found \n";
    }
    return nullptr;
}

bool linkedlist ::search(int data)
{
    int check = data;
    Node *temp = HEAD;
    int count = 0;
    if (temp != NULL)
    {
        while (temp != NULL)
        {
            if (temp->data == check)
            {
                count++;
            }
            temp = temp->next;
        }
    }
    if (count == 0)
    {
        cout << check << " not found"
             << " return False. \n\n";
        return false;
    }
    else
    {
        cout << check << " found"
             << " return True.\n\n";
        return true;
    }
}

void linkedlist ::traverse()
{
    Node *temp = HEAD; // Creating Temp Node pointing to Head for Traversal
    if (temp != NULL)
    {
        cout << "Linked List: ";
        while (temp != NULL)
        {                              
            cout << temp->data << " "; // Displaying Node Data
            temp = temp->next;
        }
        cout << endl
             << endl;
    }
    else
    {
        cout << "EMPTY \n";
    }
}
