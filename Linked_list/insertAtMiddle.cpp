#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int data) {
        this->data = data;
        prev = nullptr;
        next = nullptr;
    }
};

class DoublyLinkedList {
public:
    DoublyLinkedList() {
        head = nullptr;
    }

    void insertInMiddle(int data) {
        Node* newNode = new Node(data);

        int count = 0;
        Node* current = head;
        while (current != nullptr) {
            count++;
            current = current->next;
        }

        int middle = count / 2;
        count = 0;
        current = head;
        while (current != nullptr) {
            if (count == middle) {
                newNode->next = current->next;
                newNode->prev = current;
                current->next = newNode;
                newNode->next->prev = newNode;
                break;
            }
            count++;
            current = current->next;
        }
    }

    void printList() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

private:
    Node* head;
};

int main() {
    DoublyLinkedList list;
    list.insertInMiddle(1);
    list.insertInMiddle(2);
    list.insertInMiddle(4);
    list.insertInMiddle(3);

    list.printList();

    return 0;
}
