
/*
 * Problem: Remove Nth Node From End of List
 * 
 * Given a linked list, remove the nth node from the end of list and return its head.
 * For example,
 * Given linked list: 1->2->3->4->5, and n = 2.
 * After removing the second node from the end, the linked list becomes 1->2->3->5.
 * 
 * Given n will always be valid.
 * Try to do this in one pass.
 */


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* temp = head;
	int count = 0;
	while ( temp != NULL ){
		count++;
		temp = temp->next;
	}
	
	if( count == n) {
	    head = head->next;
	} else {
    	temp = head;
    	for ( int i = 0; i < count-n-1; i++) {
    		 temp = temp->next;
    	}
    	temp->next = temp->next->next;
	}
	return head;
}