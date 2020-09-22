// RECEURSIVE
void inOrder(Node* root) {
    if(root == NULL) return root;
    inOrder(root->left);
    cout << root->data << endl;
    inOrder(root->right);
}

// ITERATIVE
void inOrder(Node* root) {
    stack<Node*> s;
    Node* curr = root;

    while(curr != NULL || !s.empty()) {
        while(curr != NULL) {
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top(); s.pop();
        cout << curr->data << " ";
        curr = curr->right;
    }
}