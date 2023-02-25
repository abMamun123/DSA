/**
 *author:Abu Jafar Shiddik
 *created:25-02-2023(14:25:25)
 **/
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
};
class LinkedList
{
public:
    node *head;
    node *tail;
    int size;
    LinkedList()
    {
        head = NULL;
        size = 0;
    }
    // create new node
    node *create_new_node(int val)
    {
        node *new_node = new node;
        new_node->next = NULL;
        new_node->prev = NULL;
        new_node->data = val;
        return new_node;
    }
    // insert at head
    void insertHead(int val)
    {
        size++;
        node *new_node = create_new_node(val);
        if (head == NULL)
        {
            head = new_node;
            tail = head;
            return;
        }
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }
    // insert at middle
    void insertMid(int val)
    {
        int count;
        if (size % 2 == 0)
            count = size / 2;
        else
            count = (size + 1) / 2;
        node *new_node = create_new_node(val);
        node *a = head;
        while (count > 1)
        {
            a = a->next;
            count--;
        }
        node *temp = a->next;
        a->next = new_node;
        new_node->prev = a;
        new_node->next = temp;
        temp->prev = new_node;
    }
    // insert at tail
    void insertTail(int val)
    {
        node *new_node = create_new_node(val);
        if (head == NULL)
        {
            tail = new_node;
            size++;
            return;
        }
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
        size++;
    }
    void print()
    {
        node *a = head;
        while (a != NULL)
        {
            cout << a->data << " ";
            a = a->next;
        }
        cout << "\n";
    }
};
int main()
{
    LinkedList a;
    a.insertHead(1);
    a.insertTail(5);
    a.insertMid(3);
    a.insertHead(0);
    a.insertTail(10);
    a.print(); // prints  0 1 3 5 10

    return 0;
}