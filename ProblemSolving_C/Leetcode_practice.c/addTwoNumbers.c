/**
 * Definition for singly-linked list.
 */

#include<stdio.h>
#include<stdlib.h>
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* createNode(int val){
    struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
    node->val = val;
    node->next = NULL;
    return node;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode dummy;
    struct ListNode* tail = &dummy;
    int carry=0;
    while(l1 || l2 || carry)
    {
        int val1 = l1 ? (l1->val): 0;
        int val2 = l2 ? (l2->val): 0;
        int sum = val1+val2+carry;
        carry = sum/10;
        struct ListNode* l3 = (struct ListNode*)malloc(sizeof(struct ListNode));
        l3->val = sum % 10;
        l3->next = NULL;
        tail->next = l3;
        tail = l3;
        if (l1) l1 = l1->next;
        if (l2) l2 = l2->next;
    }

    return dummy.next;
}

printList(struct ListNode* head){
    while(head){
        printf("%d -> ",head->val);
        head = head->next;
    }
    printf("NULL\n");
}
int main()
{
    printf("Add Two Numbers - Singly Linked List\n");
    // Creating l1 = 2 → 4 → 3
    struct ListNode* l1 = createNode(2);
    l1->next = createNode(4);
    l1->next->next = createNode(3);
    // Creating l2 = 5 → 6 → 4
    struct ListNode* l2 = createNode(5);
    l2->next = createNode(6);
    l2->next->next = createNode(4);
    struct ListNode* result = addTwoNumbers(l1, l2);
    printList(result);
    return 0;
}
