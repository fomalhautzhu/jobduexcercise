#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

struct Tree {
    char value;
    Tree* lchild;
    Tree* rchild;
};

Tree* insertTree(Tree *T, char value)
{
    if (T == NULL) {
        T = (Tree*)malloc(sizeof(struct Tree));
        T->value = value;
        T->lchild = T->rchild = NULL;
    }
    else {
        if (value < T->value)
            T->lchild = insertTree(T->lchild, value);
        else if (value > T->value)
            T->rchild = insertTree(T->rchild, value);
    }
    return T;
}

void travelpreorder(struct Tree *T, char *s, int *pos)
{
    s[(*pos)++] = T->value;
    if (T->lchild != NULL)
        travelpreorder(T->lchild, s, pos);
    if (T->rchild != NULL)
        travelpreorder(T->rchild, s, pos);    
}

void travelinorder(struct Tree *T, char *s, int* pos)
{
    if (T->lchild != NULL)
        travelpreorder(T->lchild, s, pos);
    s[(*pos)++] = T->value;
    if (T->rchild != NULL)
        travelpreorder(T->rchild, s, pos);
}

int main() {
    int n, i, j, m;
    char temp1[10], temp2[10];
    char str1[20], str2[20];
    while (scanf("%d", &n) && n) { 
        struct Tree *T1 = NULL;
        scanf("%s", temp1);
        for (j = 0; temp1[j]; j++)
                T1 = insertTree(T1, temp1[j]);
        for (i = 0; i < n; i++) {
            struct Tree *T2 = NULL;
            scanf("%s", temp2);
            for (j = 0; temp2[j]; j++)
                T2 = insertTree(T2, temp2[j]);
            
            int size1 = 0;
            int *pos1 = &size1;
        
            travelpreorder(T1, str1, pos1);
            travelinorder(T1, str1, pos1);
            
            int size2 = 0;
            int *pos2 = &size2;
            travelpreorder(T2, str2, pos2);        
            travelinorder(T2, str2, pos2);
            
            str1[*pos1] = '\0';
            str2[*pos2] = '\0';
        
            if (!strcmp(str1, str2))
                printf("YES\n");
            else
                printf("NO\n");
        }        
    }
    return 0;
}

