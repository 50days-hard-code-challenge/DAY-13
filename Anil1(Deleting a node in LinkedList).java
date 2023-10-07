/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public void deleteNode(ListNode node) {

        //since the given node is not last node in the linked list 
        // so nextnode will not be null 

        // copy the data of the next node to the current node 
        node.val = node.next.val;
        node.next = node.next.next;


     
    }
}
