#include<bits/stdc++.h>
using namespace std;

class BST {
public:
    int data;
    BST *left;
    BST *right;

    BST (int val) {
        this->data = val;
        this->right = NULL;
        this->left = NULL;
    }

    ~BST () {
        cout<< "Binary Search Tree Deleted!"<< endl;
    }
};

BST *insert_node (BST *&root, int data) {
    if (!root) {
        return new BST (data);
    }
    if (root->data < data) {
        root->right = insert_node(root->right, data);
    }
    else if (root->data > data) {
        root->left = insert_node(root->left, data);
    }

    return root;
}

BST *create_BST_from_arr (vector<int> &arr) {
    int n = arr.size();
    BST *root = NULL;

    for (int i = 0; i < n; i++) {
        root = insert_node(root, arr[i]);
    }

    return root;
}

void print_inorder (BST *&root) {
    if (!root) {
        return;
    }

    print_inorder(root->left);
    cout<< root->data<< " ";
    print_inorder(root->right);
}

int main(){

    vector<int> arr = {21, 45, 27, 10, 11, 9, 2, 6, 3, 1, 0};

    BST *root = NULL;
    root = create_BST_from_arr(arr);

    print_inorder(root);

    return 0;
}