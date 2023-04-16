/*Create a c program to solve the given problem:
For a given integer array with no duplicates. A Binary tree can be built
recursively using the following
algorithm:
• Pick any value x from the array.
• Create a root node whose value is x.
• Recursively build the left subtree on the subarray prefix to the left
of x.
• Recursively build the right subtree on the subarray suffix to the
right of x.
Print all Binary trees where the sum of the right subtree is greater
that the sum of the left subtree.*/

#include<stdio.h>
#include<stdlib.h>

// Binary Tree Node Structure
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new Node
struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return(node);
}

// Function to calculate the sum of the Binary Tree
int sum(struct Node* node) {
    if (node == NULL) {
        return 0;
    }
    else {
        return (node->data + sum(node->left) + sum(node->right));
    }
}

// Function to print all Binary Trees
void printBinaryTrees(int arr[], int start, int end) {
    int i, j, k;
    struct Node* root = NULL;

    // Base case
    if (start > end) {
        return;
    }

    // Generate all possible Binary Trees recursively
    for (i = start; i <= end; i++) {
        for (j = i + 1; j <= end; j++) {
            for (k = start; k < i; k++) {
                root = newNode(arr[i]);
                root->left = newNode(arr[k]);
                root->right = newNode(arr[j]);
                if (sum(root->left) < sum(root->right)) {
                    printf("%d %d %d\n", arr[k], arr[i], arr[j]);
                }
            }
        }
    }

    // Recursively build the left and right subtrees
    printBinaryTrees(arr, start, i-1);
    printBinaryTrees(arr, i+1, end);
}

// Main function
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("All Binary Trees where the sum of the right subtree is greater than the sum of the left subtree are:\n");
    printBinaryTrees(arr, 0, n-1);
    return 0;
}
