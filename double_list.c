#include <stdio.h>
#include <stdlib.h>

struct node {
        int val;
        struct node *next;
        struct node *prev;
};

int main() {
        return 0;
}

struct node *crt_list(int len)
{
        struct node *head     = NULL;
        struct node *tail     = NULL;
        struct node *new_node = NULL;

        int i = 0;
        for (i = 0; i < len; i++) {
                new_node = (struct node *)malloc(sizeof(*new_node));
                if (!new_node)
                        exit(1);
                scanf("%d", &new_node->val);
                new_node->next = NULL;
                new_node->prev = tail;

                if (head == NULL) {
                        head = new_node;
                        tail = new_node;
                } else {
                        tail->next = new_node;
                        tail       = new_node;
                }
        }
        return head;
}
