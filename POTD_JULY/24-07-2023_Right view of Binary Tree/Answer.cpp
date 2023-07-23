
#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node *left;
    Node *right;
};
// Utility function to create a new Tree Node
Node *newNode(int val)
{
    Node *temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

// } Driver Code Ends
/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Should return  right view of tree

class Solution
{
public:
    // Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
        // Create a vector to store the result (right view of the tree).
        vector<int> res;

        // If the tree is empty (root is NULL), return an empty result.
        if (root == NULL)
            return res;

        // Create a queue to perform level order traversal of the tree.
        queue<Node *> q;

        // Push the root node into the queue to start the traversal.
        q.push(root);

        // Perform level order traversal using the queue.
        while (!q.empty())
        {
            // Get the number of nodes at the current level.
            int size = q.size();

            // Traverse through all the nodes at the current level.
            for (int i = 0; i < size; i++)
            {
                // Get the front node from the queue.
                Node *curr = q.front();
                q.pop();

                // For the right view, we only consider the first node in the current level,
                // which will be the rightmost node in the binary tree.
                if (i == 0)
                    res.push_back(curr->data);

                // Push the right child into the queue if it exists.
                if (curr->right != NULL)
                    q.push(curr->right);

                // Push the left child into the queue if it exists.
                if (curr->left != NULL)
                    q.push(curr->left);
            }
        }

        // The 'res' vector now contains the right view of the binary tree.
        return res;
    }
};

//{ Driver Code Starts.

// Function to Build Tree
Node *buildTree(string str)
{
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size())
    {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N")
        {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N")
        {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

int main()
{
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--)
    {
        string s;
        getline(cin, s);
        Node *root = buildTree(s);

        Solution ob;
        vector<int> vec = ob.rightView(root);
        for (int x : vec)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
