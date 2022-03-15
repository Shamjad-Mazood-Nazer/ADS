 #include <stdio.h>
#include <stdlib.h>
struct node
{
  int key;
  struct node *left, *right;
};
struct node *root = NULL;
struct node *newNode(int item)
{
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;
}

// Inorder Traversal
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);     // Traverse left
        printf("%d -> ", root->key);    // Traverse root
        inorder(root->right);   // Traverse right
    }
}
//Preorder Traversal
void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d -> ", root->key);     // Traverse root
        preorder(root->left);   // Traverse left
        preorder(root->right);   // Traverse right
    }
}
//PostOrder Traversal
void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);  // Traverse left
        postorder(root->right); // Traverse right
        printf("%d -> ", root->key);    // Traverse root
    }
}

// Insert a node
struct node *insert(struct node *node, int key)
{
    if (node == NULL)
        return newNode(key);
    if (key < node->key)
        node->left = insert(node->left, key);
    else
        node->right = insert(node->right, key);
    return node;
}

// Find the inorder successor
struct node *minValueNode(struct node *node)
{
    struct node *current = node;
    while (current && current->left != NULL)
        current = current->left;
    return current;
}

// Deleting a node
struct node *deleteNode(struct node *root, int key)
{
    if (root == NULL)
        return root;
    if (key < root->key)
        root->left = deleteNode(root->left, key);
    else if (key > root->key)
        root->right = deleteNode(root->right, key);

    else
    {
        if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }
        struct node *temp = minValueNode(root->right);
        root->key = temp->key;
        root->right = deleteNode(root->right, temp->key);
    }
    return root;
}

void main()
{
    int ch,data;
    do
    {
        printf("\n1. Insert\n2. Delete\n3. Inorder\n4. PreOrder\n5. PostOrder\n6. Exit\nEnter Your Choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter the Data : ");
            scanf("%d",&data);
            root = insert(root, data);
            break;
        case 2:
            printf("\nEnter the node to delete : ");
            scanf("%d",&data);
            root = deleteNode(root, data);
            printf("Node %d is deleted", data);
            break;
        case 3:
            printf("Inorder traversal: ");
            inorder(root);
            break;
        case 4:
            printf("Preorder traversal: ");
            preorder(root);
            break;
        case 5:
            printf("Postorder traversal: ");
            postorder(root);
            break;
        case 6:
            exit(0);
        default:
            printf("Invalid Choice!");
        }
    }while(ch!=6);
}
