 void Reverse(stack<int> &st) {
        // Base case: if the stack is empty, return
        if (st.size() == 0)
            return;

        // Print the top element of the stack
        cout << st.top() << " ";

        // Remove the top element from the stack
        st.pop();

        // Recursive call to reverse the remaining elements
        Reverse(st);
    }
};
