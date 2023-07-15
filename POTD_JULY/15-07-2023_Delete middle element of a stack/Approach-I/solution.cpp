void deleteMid(stack<int>& s, int sizeOfStack)
{
    // Base case: stack is empty or sizeOfStack is 0
    if (s.empty() || sizeOfStack == 0)
        return;

    // Check if the current element is the middle element
    if (s.size() == (sizeOfStack + 1) / 2) {
        s.pop();
        return;
    }

    // Remove the top element and recursively delete the middle
    // element from the remaining stack
    int x = s.top();
    s.pop();
    deleteMid(s, sizeOfStack);
    
    // Push the removed element back into the stack
    s.push(x);
}
