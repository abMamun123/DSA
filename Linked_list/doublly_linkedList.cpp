/**
 *author:xyz_123
 *created:17-01-2023(19:49:54)
 **/
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
};
class Doublly_Linked_List
{
public:
    Node *head;
    int size;
    Doublly_Linked_List()
    {
        head = NULL;
        size = 0;
    };
    // create newNode pointer.........
    Node *create_new_node(int value)
    {
        Node *new_node = new Node;
        new_node->data = value;
        new_node->next = NULL;
        new_node->prev = NULL;
        return new_node;
    };
    void insert_at_head(int value)
    {
        size++;
        Node *newNode = create_new_node(value);
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    };
    void getSize()
    {
        cout << "size = " << size << "\n";
    };
    void traverse()
    {
        Node *a = head;
        while (a != NULL)
        {
            cout << a->data << " ";
            a = a->next;
        }
        cout << "\n";
    };
    void reverse()
    {
        Node *a = head;
        while (a != NULL)
        {
            cout << a->data << " ";
            a = a->prev;
        }
        cout << "\n";
    };
    void insert_at_any_index(int index, int value)
    {
        if (index < 0 || index > size)
            return;
        size++;
        if (index == 0)
        {
            insert_at_head(value);
            return;
        }
        int cur_index = 0;
        Node *a = head;
        while (cur_index != index - 1)
        {
            a = a->next;
            cur_index++;
        }
        Node *new_node = create_new_node(value);
        new_node->next = a->next;
        new_node->prev = a;
        a->next->prev = new_node;
        a->next = new_node;
    };
    void delete_at_any_index(int index)
    {
        Node *a = head;
        if (index < 0 || index >= size)
        {
            return;
        }
        int cur_index = 0;
        while (cur_index != index)
        {
            a = a->next;
            cur_index++;
        }
        Node *b = a->prev;
        Node *c = a->next;
        if (b != NULL)
            b->next = c;
        if (c != NULL)
            c->prev = b;
        delete a;
        if (index == 0)
            head = c;
        size--;
    };
};
int main()
{
    Doublly_Linked_List l;
    l.insert_at_head(10);
    l.insert_at_head(20);
    l.insert_at_head(30);
    l.traverse();
    l.delete_at_any_index();
    l.traverse();
    l.getSize();
    return 0;
}