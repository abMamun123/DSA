/**
 *author:xyz_123
 *created:16-01-2023(15:22:33)
 **/
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
class LinkedList
{
public:
    Node *head;
    int size;
    LinkedList()
    {
        head = NULL;
        size = 0;
    }
    Node *create_new_node(int value)
    {
        Node *new_node = new Node;
        new_node->data = value;
        new_node->next = NULL;
        return new_node;
    };
    // Insert at head........
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
        head = newNode;
    };
    // Traverse in linkedList.........
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
    // search for single value index..........
    void search_distinct_value(int value)
    {
        Node *a = head;
        int index = 0;
        while (a != NULL)
        {
            if (a->data == value)
            {
                cout << "value found in index " << index << "\n";
                return;
            }
            a = a->next;
            index++;
        }
        cout << "value not found\n";
    }

    // search for multiple value index..........
    void search_all_value(int value)
    {
        Node *a = head;
        int index = 0;
        while (a != NULL)
        {
            if (a->data == value)
            {
                cout << "value found in index " << index << "\n";
            }
            a = a->next;
            index++;
        }
        if (index = 0)
            cout << "value not found";
    };
    void find_value_in_index(int value)
    {
        int index = 0;
        Node *a = head;
        while (a != NULL)
        {
            if (index == value)
            {
                cout << "in index " << index << " value is " << a->data;
                return;
            }
            index++;
            a = a->next;
        }
    };
    // get size in(number of linkedlist) that means O(n)
    //  void getSize(){
    //      int size = 0;
    //      Node *a = head;
    //      while(a!=NULL){
    //          size++;
    //          a= a->next;
    //      }
    //      cout<<"Total size = "<<size<<"\n";
    //  }
    void getSize()
    {
        cout << "size = " << size << "\n";
    }
    void insert_at_anyIndex(int index, int value)
    {
        if (index < 0 || index > size)
        {
            return;
        }
        if (index == 0)
        {
            insert_at_head(value);
            return;
        }
        size++;
        Node *a = head;
        int cur_index = 0;
        while (cur_index != index - 1)
        {
            a = a->next;
            cur_index++;
        }
        Node *new_node = create_new_node(value);
        new_node->next = a->next;
        a->next = new_node;
    }
    void delete_at_head()
    {
        if (head == NULL)
            return;
        size--;
        Node *a = head;
        head = a->next;
        delete a;
    }
    void delete_at_any_index(int index)
    {
        if (index < 0 || index > size - 1)
            return;
        if (index == 0)
        {
            delete_at_head();
            return;
        }
        size--;
        Node *a = head;
        int cur_index = 0;
        while (cur_index != index - 1)
        {
            a = a->next;
            cur_index++;
        }
        Node *b = a->next;
        a->next = b->next;
        delete b;
    };
    void insert_after_value(int value, int data)
    {
        Node *a = head;
        while (a != NULL)
        {
            if (a->data == value)
            {
                break;
            }
            if (a->data == NULL)
            {
                cout << value << " not found in list";
                return;
            }
            a = a->next;
        }
        size++;
        Node *new_node = create_new_node(data);
        new_node->next = a->next;
        a->next = new_node;
    };
};
int main()
{
    LinkedList l;
    cout<<l.head;
    l.insert_at_head(10);
    l.insert_at_head(20);
    l.insert_at_head(30);
    l.insert_at_head(20);
    l.traverse();
    l.getSize();
    l.insert_at_anyIndex(1, 100);
    l.insert_at_anyIndex(0, 500);
    l.traverse();
    l.getSize();
    l.delete_at_any_index(5);
    l.insert_after_value(20, 500);
    l.traverse();
    l.getSize();
    return 0;
}

