#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;

    Node (int val) {
        this->data = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};

void all_dfs(vector<int> &inorder, vector<int> &preorder, vector<int> &postorder, Node *&root) {
    stack<pair<Node *, int>> st;
    st.push({root, 1});

    while (!st.empty()) {
        pair<Node *, int> top = st.top();
        int num = top.second;

        if (num == 1) {
            preorder.push_back(top.first->data);
            st.top().second++;
            if (top.first->left) {
                st.push({top.first->left, 1});
            }
        }

        top = st.top();
        num = top.second;
        
        if (num == 2) {
            inorder.push_back(top.first->data);
            st.top().second++;
            if (top.first->right) {
                st.push({top.first->right, 1});
            }
        }

        top = st.top();
        num = top.second;

        if (num == 3) {
            postorder.push_back(top.first->data);
            st.pop();
        }
    }
}

int main(){

    Node *root = new Node (1);
    root->left = new Node (2);
    root->left->left = new Node (3);
    root->left->right = new Node (4);


    root->right = new Node (5);
    root->right->left = new Node (6);
    root->right->right = new Node (7);

    vector<int> inorder, postorder, preorder;
    all_dfs(inorder, preorder, postorder, root);

    for (auto i: inorder) {
        cout<< i<< " ";
    }   cout<< endl;

    for (auto i: preorder) {
        cout<< i<< " ";
    }   cout<< endl;

    for (auto i: postorder) {
        cout<< i<< " ";
    }   cout<< endl;

    return 0;
}