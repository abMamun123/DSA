/**
 *author:xyz_123
 *created:25-01-2023(19:00:49)
 **/
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
class linked_list
{
public:
    node *head;
    int size;
    linked_list()
    {
        head = NULL;
        size = 0;
    }
    // create new node
    node *create_new_node(int val)
    {
        node *new_node = new node;
        new_node->data = val;
        new_node->next = NULL;
        return new_node;
    }
    void insert_at_head(int val)
    {
        size++;
        node *new_node = create_new_node(val);
        if (head == NULL)
        {
            head = new_node;
            return;
        }
        new_node->next = head;
        head = new_node;
    };
    void get_size()
    {
        cout << size << endl;
    };
    // traverse in linkedlist
    void traverse()
    {
        node *a = head;
        while (a != NULL)
        {
            cout << a->data << " ";
            a = a->next;
        }
        cout << "\n";
    };
    void reverse(node *a)
    {
        if (a == NULL)
            return;
        reverse(a->next);
        cout << a->data << " ";
    };
    void print_reverse()
    {
        reverse(head);
        cout << endl;
    };
    int getValue(int index)
    {
        if (index < 0 || index >= size)
            return -1;
        node *a = head;
        int cur_index = 0;
        while (a != NULL)
        {
            if (cur_index == index)
            {
                return a->data;
            }
            a = a->next;
            cur_index++;
        }
    }
    void deleteZero()
    {
        node *a = head;
        while (a != NULL)
        {
            if (a->data == 0)
            {
                head = a->next;
                a = a->next;
            }
            else
            {
                break;
            }
        }
        while (a->next != NULL)
        {
            if (a->next->data == 0)
            {
                node *b = a->next;
                a->next = a->next->next;
                delete b;
            }
            else
                a = a->next;
        }
    }
    int getOddIndexSum()
    {
        node *a = head;
        int index = 0, sum = 0;
        while (a != NULL)
        {
            if (index != 0 && index % 2 != 0)
            {
                sum += a->data;
            }
            a = a->next;
            index++;
        }
        return sum;
    }
    // void delete_zero()
    // {
    //     node *curr = head;
    //     while (curr != NULL && curr->data == 0)
    //     {
    //         head = curr->nxt;
    //         delete curr;
    //         curr = head;
    //     }
    //     if (curr == NULL)
    //         return;
    //     node *prev = curr;
    //     curr = curr->nxt;
    //     while (curr != NULL)
    //     {
    //         if (curr->data == 0)
    //         {
    //             prev->nxt = curr->nxt;
    //             delete curr;
    //             curr = prev->nxt;
    //         }
    //         else
    //         {
    //             prev = curr;
    //             curr = curr->nxt;
    //         }
    //     }
    // }
};
int main()
{
    linked_list l;
    // l.get_size();
    l.insert_at_head(0);
    l.insert_at_head(9);
    l.insert_at_head(5);
    l.insert_at_head(0);
    l.insert_at_head(0);
    l.insert_at_head(5);
    l.insert_at_head(2);
    l.insert_at_head(0);
    l.insert_at_head(0);
    l.traverse();
    // l.print_reverse();
    // cout << l.getValue(0) << endl;
    // cout << l.getOddIndexSum() << endl;
    l.deleteZero();
    l.traverse();
    return 0;
}
