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

class Solution {
public:
    // Function to merge overlapping intervals
    vector<vector<int>> merge(vector <vector<int> >& intervals) {
        // First, sort the intervals based on the starting times
       sort(intervals.begin(), intervals.end());

        // This will be the result vector for merged intervals
        vector< vector<int> > mergedIntervals;

        // Initialize the result vector with the first interval
        mergedIntervals.push_back(intervals[0]);

        // Iterate through all the intervals starting from the second one
        for (int i = 1; i < intervals.size(); ++i) {
            // If the current interval does not overlap with the last interval in the result,
            // then simply add the current interval to the result
            if (mergedIntervals.back()[1] < intervals[i][0]) {
                mergedIntervals.push_back(intervals[i]);
            } else {
                // If there is an overlap, merge the current interval with the last interval
                // in the result by updating the end time to the maximum end time seen
                mergedIntervals.back()[1] = max( mergedIntervals.back()[1], intervals[i][1]);
            }
        }
        return mergedIntervals;
    }

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

