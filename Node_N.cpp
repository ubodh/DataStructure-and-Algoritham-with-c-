#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    struct node* left;
    struct node* right;
};

struct node* newNode(int key) {
    struct node* head = new node;
    head->data = key;
    head->left = NULL;
    head->right = NULL;
    return head;
}

void print(struct node* head) {
    if (head == NULL) {
        return;
    }
    print(head->left);
    cout << head->data << " ";
    print(head->right);
}

int main() {
    struct node* head = newNode(1);
    head->left = newNode(2);
    head->right = newNode(6);
    head->left->left = newNode(3);
    head->left->left->left = newNode(5);

    cout << "In-order traversal of the binary tree: ";
    print(head);

    return 0;
}
