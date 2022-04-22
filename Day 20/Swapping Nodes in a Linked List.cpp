class Solution
{
public:
    ListNode *swapNodes(ListNode *head, int k)
    {

        ListNode *left = head, *right = head, *curr = head;
        int current = 1;
        while (curr)
        {
            if (current < k)
            {
                left = left->next;
            }
            else if (current > k)
            {
                right = right->next;
            }
            current++;
            curr = curr->next;
        }
        int t = left->val;
        left->val = right->val;
        right->val = t;
        return head;
    }
};