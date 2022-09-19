#include <iostream>
#include "linkedlist.h"
using namespace std;

bool linkedlist ::isEmpty()
{
    cout << "Checking if LinkedList is Empty...\n";
    Node *temp = HEAD; // Creating Temp Node pointing to Head for Traversal
    if (temp == NULL)
    {
        cout << "True: List is Empty \n";
        return true;
    }
    else
    {
        cout << "False: List is not Empty \n\n";
        return false;
    }
}

void linkedlist ::addToHead(int data)
{
    Node *NewNode = new Node;
    NewNode->data = data;
    NewNode->next = HEAD;
    HEAD = NewNode;
    cout << "New Node with data " << NewNode->data << " added successfully to HEAD \n";
}

void linkedlist ::addToTail(int data)
{
    Node *NewNode = new Node;
    NewNode->data = data;
    NewNode->next = NULL; // NewNode pointing to Tail
    Node *temp = HEAD;    // Creating a temporary node and assigning it to head
    // For Empty Linked List
    if (HEAD == NULL)
    {
        HEAD = NewNode;
        cout << "New Node with data " << NewNode->data << " added to both HEAD and TAIL of previously empty Linked List \n";
    }
    // For Non Empty Linked List
    else
    {
        while (temp->next != NULL)
        {                      // Traversal to end of linked list
            temp = temp->next; // assigning next node in linked list to temp
        }
        temp->next = NewNode; // Assigning NewNode to next of Last Node in the List
        cout << "New Node with data " << NewNode->data << " added successfully to TAIL \n";
    }
}

void linkedlist ::add(int data, Node *predecessor)
{
    Node *NewNode = new Node;
    NewNode->data = data;
    Node *temp = HEAD; // Creating a temporary node and assigning it to HEAD
    if (temp == NULL)
    {
        cout << "Error Previous Node can't be NULL \n";
        return;
    }
    else
    {
        while (temp != NULL)
        {
            if (temp == predecessor)
            {
                NewNode->next = predecessor->next;
                predecessor->next = NewNode;
                cout << "New Node with data " << NewNode->data << " added successfully after Node with data " << predecessor->data << endl;
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
    cout << "First Node deleted successfully \n";
}

void linkedlist ::remove(int data)
{
    int check = data;
    Node *PreviousNode;
    if (HEAD == NULL && HEAD->data == check)
    {
        PreviousNode = HEAD;
        HEAD = HEAD->next;
        delete PreviousNode;
    }

    Node *temp = HEAD; // Creating a temporary node and assigning it to head
    if (temp->next != NULL)
    {
        while (temp->next != NULL)
        {
            if (temp->next->data == check)
            {
                PreviousNode = temp->next;
                temp->next = temp->next->next;
                delete PreviousNode;
                cout << check << " deleted successfully.\n";
            }
            else
            {
                temp = temp->next;
            }
        }
    }
    else
    {
        cout << "Error! Warning :You can't delete from EMPTY List \n";
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
                cout << extract << " found in the list at index: " << count << endl;
                summon = temp;
                return summon;
            }
            temp = temp->next;
            count++;
        }
        cout << extract << " not found in the list \n";
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
        cout << check << " not found in the list"
             << " returning False. \n\n";
        return false;
    }
    else
    {
        cout << check << " found in the list"
             << " returning True.\n\n";
        return true;
    }
}

void linkedlist ::traverse()
{
    Node *temp = HEAD; // Creating Temp Node pointing to Head for Traversal
    if (temp != NULL)
    {
        cout << "Your Linked List is: ";
        while (temp != NULL)
        {                              // Itteration till end of linked list(Reaching NULL)
            cout << temp->data << " "; // Displaying Node Data
            temp = temp->next;
        }
        cout << endl
             << endl;
    }
    else
    {
        cout << "Warning THe LIST is EMPTY \n";
    }
}
