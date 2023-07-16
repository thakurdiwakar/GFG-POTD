//Function to reverse the queue.
#include <queue>
using namespace std;

//function to reverse the elements in the queue recursively
void revv(queue<int>& q)
{
    // Base case
    if (q.empty())
        return;
    
    // Remove the front element from the queue
    int d = q.front();
    q.pop();
    

    revv(q);
    
    // Push the removed element to the back of the reversed queue
    q.push(d);
}

class Solution
{
public:
   
    queue<int>& rev(queue<int>& q)
    {
       
        revv(q);
        
        // Return the modified queue
        return q;
    }
};
