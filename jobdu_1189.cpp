#include <cstdio>
#include <cstdlib>

using namespace std;

struct List {
    int value;
    List *next;
};

struct List *insertList(struct List *head, int value)
{
    if (head == NULL) {
        head = (List*)malloc(sizeof(struct List));
        head->value = value;
        head->next = NULL;
    }
    else {
        struct List *p = head;
        while (p->next != NULL)
            p = p->next;
        struct List *p1 = (List*)malloc(sizeof(struct List));
        p1->value = value;
        p1->next = NULL;
        p->next = p1;
    }
    return head;
}

void foo(struct List *head)
{
    if (head == NULL)
        return;
    else if (head->next == NULL)
        printf("%d\n", head->value);
    else {
        struct List *p = head;
        while (p->next != NULL)
            p = p->next;
        p->next = head;
        struct List *q;
        while (p->next != p) {
            for (int i = 0; i < 16; i++) {
                p = p->next;
            }
            q = p->next;
            p->next = p->next->next;
            free(q);
        }
        printf("%d\n", p->value);
    }   
}

int main() {
    int array[21];
    int i;
    for (i = 0; i < 21; i++) {
        array[i] = i+1;
    }
    struct List *head = NULL;
    for (i = 0; i < 21; i++) {
        head = insertList(head, array[i]);
    }
    foo(head);
    
    return 0;
}

