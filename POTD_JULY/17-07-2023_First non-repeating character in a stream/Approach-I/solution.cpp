//This approach utilizes both freq array and queue.
class Solution {
	public:
		string FirstNonRepeating(string A){
		    int freq[26] = {0}; //Freq array to keep track of frequency of elements
		    string ans; 
		    queue<char>q; //queue to store only valid elemets with freq=1 and return in FIFO basis
		    
		    for(auto i: A){
		        freq[i-'a']++; 
		    
		        if(freq[i-'a']==1)
		        q.push(i);
		        
		        while(q.size()!=0 && freq[q.front()-'a']!=1)
		        q.pop(); 
		        
		        if(q.size())
		        ans+=q.front();
		        
		        else
		        ans+='#'; 
		        
		    }   
		    
		    return ans; 
		}

};

	return 0;
}
