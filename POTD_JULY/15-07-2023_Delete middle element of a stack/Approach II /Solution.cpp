//Simple Approach: 
//Step 1: Pop and store element till mid-1. Then Pop element at mid. 
//Step 2: Push element back in stack but in reverse order if stored in an array. 
class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        int mid = sizeOfStack/2; // To run loop N/2 times just to store Top N/2 element. 
        vector<int> popped(mid,0); 
        int i= 0; 
        while(i<mid){
            popped[i]= s.top(); // Storing element in an array
            s.pop();
            i++;
        }
        s.pop(); //Popping middle element. 
        i--; 
        while(i>=0){
            s.push(popped[i]); // Pushing element back in reverse order from end to first.
            i--; 
        }
    }
};

