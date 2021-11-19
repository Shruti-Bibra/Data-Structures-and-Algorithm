#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int val) {
        data=val;
        left=NULL;
        right=NULL;
    }
};

int main() {
    
    
    /*  1
      /   \
     2     3
   /  \   /  \
   4  5  6    7   */ 
    
    struct Node* root= new node(1);
    root->left= new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right = new node(5);
    root->right->left= new node(6);
    root->right->right = new node(7);
    
 return 0;
}