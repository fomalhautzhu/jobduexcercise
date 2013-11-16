#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct TreeNode {
    int value;
    struct TreeNode *lchild;
    struct TreeNode *rchild;
};

struct TreeNode* insertTreeNode(struct TreeNode *T, int value)
{
    if (T == NULL) {
        T = (struct TreeNode*)malloc(sizeof(struct TreeNode));
        T->value = value;
        T->lchild = NULL;
        T->rchild = NULL;
    }
    else if (value < T->value)
        T->lchild = insertTreeNode(T->lchild, value);
    else if (value > T->value)
        T->rchild = insertTreeNode(T->rchild, value);
    return T;
}

void printPreOrder(struct TreeNode *T)
{
    if (T != NULL) {
        printf("%d ", T->value);
        printPreOrder(T->lchild);       
        printPreOrder(T->rchild);
    }
}

void printMidOrder(struct TreeNode *T)
{
    if (T != NULL) {
        printMidOrder(T->lchild);
        printf("%d ", T->value);
        printMidOrder(T->rchild);
    }
}

void printPostOrder(struct TreeNode *T)
{
    if (T != NULL) {
        printPostOrder(T->lchild);
        printPostOrder(T->rchild);
        printf("%d ", T->value);
    }
}

int main(int argc, char**argv) {
    int n, i;
    int array[110];
    while (scanf("%d", &n) != EOF) {
        for (i = 0; i < n; i++) {
            scanf("%d", &array[i]);
        }
        struct TreeNode *T = NULL;
        for (i = 0; i < n; i++) {
            T = insertTreeNode(T, array[i]);
        }
        printPreOrder(T);
        printf("\n");
        printMidOrder(T);
        printf("\n");
        printPostOrder(T);
        printf("\n");
    }
    
    return 0;
}
