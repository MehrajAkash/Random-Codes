#include<bits/stdc++.h>
using namespace std;

struct treeNode{
    struct treeNode *left, *right;
    int data;

   /* treeNode(int value){
        data = value;
        left = nullptr;
        right = nullptr;
    }*/
};

struct treeNode *newNode(int value){

cout<<"newnode"<<endl;

    struct treeNode *temp = new treeNode;
    temp->data = value;
    temp->left = temp->right = NULL;

    return temp;

};

struct treeNode* insertt(struct treeNode* node, int value){

    if(node == nullptr) return newNode(value);

    if(value < node->data){
        node->left = insertt(node->left, value);
    }
    if(value > node->data){
        node->right = insertt(node->right, value);
    }

   return node;
};

void inOrderTraversal(struct treeNode* temp ){
    if(temp == nullptr) return;

    inOrderTraversal(temp->left);
    cout<< temp->data <<" ";
    inOrderTraversal(temp->right);
}

void preOrderTraversal( treeNode* temp ){
    if(temp == nullptr) return;

      cout<< temp->data <<" ";
    preOrderTraversal(temp->left);
    preOrderTraversal(temp->right);
}

int main(){

 struct treeNode *root = NULL;

  root = insertt(root, 5);
  root = insertt(root, 3);
  root = insertt(root, 7);
  root = insertt(root, 2);
  root = insertt(root, 4);

  cout<<"Inorder traversal"<<endl;

inOrderTraversal(root);


return 0;
}

