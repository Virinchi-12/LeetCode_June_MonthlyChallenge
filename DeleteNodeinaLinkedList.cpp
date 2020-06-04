class Solution {
public:
    void deleteNode(ListNode* node) {
        
      /*  int x=node->val;
            ListNode* temp,pnode;
        pnode.next=node;
        temp=node;
        temp->val=node->val;
        pnode.next=temp.next;
        free(temp);*/
        
        int x=node->next->val;
        //cout<<x;
        node->val=x;
        //cout<<node->val;
        
        ListNode* temp=node->next;
        
        node->next=temp->next;
        delete(temp);
        
        
    }
};
