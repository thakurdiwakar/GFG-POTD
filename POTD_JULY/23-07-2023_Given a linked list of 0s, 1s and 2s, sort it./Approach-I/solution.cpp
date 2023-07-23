class Solution
{
public:
    // Function to sort a linked list of 0s, 1s, and 2s in ascending order.
    // It modifies the existing linked list and returns the head of the sorted list.
    Node* segregate(Node* head) {
        // Variables to keep track of the counts of 0s, 1s, and 2s.
        int countZero = 0, countOne = 0, countTwo = 0;

        // Step 1: Count the occurrences of 0s, 1s, and 2s in the linked list.
        Node* temp = head;
        while (temp) {
            if (temp->data == 0)
                countZero++;
            else if (temp->data == 1)
                countOne++;
            else
                countTwo++;
            temp = temp->next;
        }

        // Step 2: Modify the linked list by rearranging the nodes based on the counts.
        temp = head;
        while (temp) {
            if (countZero) {
                // Place 0 if there are still remaining 0s to place.
                temp->data = 0;
                countZero--;
            }
            else if (countOne) {
                // Place 1 if there are still remaining 1s to place.
                temp->data = 1;
                countOne--;
            }
            else
                // Place 2 if there are still remaining 2s to place.
                temp->data = 2;
            temp = temp->next;
        }

        // Step 3: Return the head of the modified sorted linked list.
        return head;
    }
};
