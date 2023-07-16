//reverses the original queue, copying value in an array and pasting back in the queue.
class Solution
{
    public:
    queue<int> rev(queue<int> q)
    {
        vector<int> store; 
      //Loop to copy queue element in an array
        while(!q.empty())
        {
        int val = q.front(); 
        store.push_back(val); 
        q.pop(); 
            
        }
      //Loop to copy back element from array to queue in reverse order
        int i=store.size()-1; 
        while(i>=0){
            q.push(store[i]);
            i--; 
        }
     return q;    
    }
};
