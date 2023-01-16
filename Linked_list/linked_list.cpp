#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *nxt;
};
class LinkedList
{
    node *head;
    LinkedList()
    {
        head = NULL;
    }
    node *create_new_node(int value)
    {
        node *newNode = new node;
        newNode->data = value;
        newNode->nxt = NULL;
        return newNode;
    }
    void insert_at_head(int value)
    {
        node *a = create_new_node(value);
        if (head == NULL)
            head = a;
    }
    void traverse()
    {
    }
    void search_distinct_value(int value)
    {
    }
    void search_all_value(int value)
    {
    }
};
int main()
{
    LinkedList l;
    l.insert_at_head(10);
    l.insert_at_head(30);
    l.insert_at_head(20);
    l.insert_at_head(40);

    l.traverse();
    l.search_distinct_value(10);
    l.search_distinct_value(5);
    l.search_all_value(30);
}