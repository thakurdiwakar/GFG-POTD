class Solution
{
    public:
  
  struct node *reverse (struct node *head, int k){
    struct node *prev = NULL, *current = head, *next = NULL, *newHead = NULL, *temp = NULL;
    int count = 0;

    while (current) {
        while (current && count < k) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
            count++;
        }
        if (!newHead) newHead = prev;
        if (temp) temp->next = prev;

        temp = head;
        prev = NULL;
        head = current;
        count = 0;
    }
    return newHead;
}
};
