#include <stdio.h>
#include<stdlib.h>

struct node{
    int key;
    struct node *left, *right;
};

struct node* newNode(int data){
    struct node *temp = (struct node*) malloc(sizeof(struct node));
    temp->key = data;
    temp->left = temp->right = NULL;
    return temp;
};

struct node* insert(struct node* node, int data){
    if (node == NULL){
        return newNode(data);
    }

    if (data < node->key){
        node->left = insert(node->left, data);
    }else{
        node->right = insert(node->right, data);
    }
    return node;
}

    // Inorder traversal
void inorderTraversal(struct node* root) {
  if (root == NULL) return;
  inorderTraversal(root->left);
  printf("%d ->", root->key);
  inorderTraversal(root->right);
}

// preorderTraversal traversal
void preorderTraversal(struct node* root) {
  if (root == NULL) return;
  printf("%d ->", root->key);
  preorderTraversal(root->left);
  preorderTraversal(root->right);
}

// postorderTraversal traversal
void postorderTraversal(struct node* root) {
  if (root == NULL) return;
  postorderTraversal(root->left);
  postorderTraversal(root->right);
  printf("%d ->", root->key);
}

// inorder-successor
struct node* inorderSuccessor(struct node* node){
    struct node* newVal = node;
    while (newVal->left != NULL){
        newVal = newVal->left;
    }
    return newVal;
}

// Delete node in bst
struct node* deleteNode(struct node* root, int key){
    if(root == NULL) return root;

    if(key < root->key){
        root->left = deleteNode(root->left, key);
    }
    else if(key > root->key){
        root->right = deleteNode(root->right, key);
    }
    else {
        if(root->left == NULL){
            struct node *temp = root->right;
            free(root);
            return temp;
        }else if(root->right == NULL){
            struct node *temp = root->left;
            free(root);
            return temp;
        }
        struct node *temp = inorderSuccessor(root->right);
        root->key = temp->key;
        root->right = deleteNode(root->right, temp->key);
    } 
    return root;
}

int main(void){
    int size = 0,item = NULL;

    // printf("Enter Tree Size: ");
    // scanf("%d",&size);

    int *list = (int*) malloc(sizeof(int)*size);

    for(int i = 0; i<size; i++){
        scanf("%d",&list[i]);
    }

    // struct node *bst = newNode(list[0]);
    // for(int i=1; i<size; i++){
    //     insert(bst,list[i]);
    // }
    struct node *bst = newNode(8);
    insert(bst,12);
    insert(bst,7);
    insert(bst,4);
    insert(bst,9);
    insert(bst,11);
    insert(bst,3);

    inorderTraversal(bst);
    printf("\n");
    postorderTraversal(bst);
    printf("\n");
    preorderTraversal(bst);

    struct node *newBST = deleteNode(bst, 3);
    inorderSuccessor(newBST);

    return 0;
}