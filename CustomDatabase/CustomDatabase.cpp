#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class LinkedList {
    Node* head = NULL;
public:
    void addAtEnd(int val) {
        Node* new_node = new Node();
        new_node->data = val;
        new_node->next = NULL;
        if (head == NULL) {
            head = new_node;
        }
        else {
            Node* cur = head;
            while (cur->next != NULL) {
                cur = cur->next;
            }
            cur->next = new_node;
        }

    }
    void deleteAtHead() {
        if (head == NULL) {
            cout << "There is no linked list to delete" << endl;
        }
        else {
            head = head->next;
        }
    }

    void displayList() {
        Node* cur = head;
        while (cur != NULL) {
            cout << cur->data << " ";
            cur = cur->next;
        }
        cout << endl;
    }


};


int main()
{
	LinkedList l1;

	return 0;
}