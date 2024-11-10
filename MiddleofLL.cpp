int getMiddle(Node* head) {
        // code here
        
        Node* slow = head;
        Node* fast = head;
        
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        int d = slow->data;
        return d;
    }
