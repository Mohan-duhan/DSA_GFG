class Solution {
  public:
    Node *flatten(Node *head) {
        Node* temp = head;
        vector<int> ans;
        
        while (temp != NULL) {
            ans.push_back(temp->data);

            Node* tempBottom = temp->bottom;
            while (tempBottom != NULL) {
                ans.push_back(tempBottom->data);
                tempBottom = tempBottom->bottom;   
            }
            temp = temp->next;
        }

        sort(ans.begin(), ans.end());
        
        Node* dummy = new Node(-1);
        Node* curr = dummy;
        
        for (int i = 0; i < ans.size(); i++) {
            curr->bottom = new Node(ans[i]);   
            curr = curr->bottom;               
        }

        return dummy->bottom;
    }
};
