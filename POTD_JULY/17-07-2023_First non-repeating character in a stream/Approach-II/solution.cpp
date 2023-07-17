class Solution {
	public:
		string FirstNonRepeating(string str){
        unordered_map<char, int> charFreqMap; // Map to store character-frequency 
        queue<char> validCharsQueue; // Queue to store valid characters 
        string result = ""; 
        
        for (char ch : str){
            charFreqMap[ch]++; // Increment the frequency of the current character
            
            if (charFreqMap[ch] == 1){
                validCharsQueue.push(ch); // Push the character into the queue if its frequency is 1
            }
            
            while (!validCharsQueue.empty() && charFreqMap[validCharsQueue.front()] > 1){
                validCharsQueue.pop(); // Remove characters from the front of the queue if their frequency  greater than 1
            }
            
            if (validCharsQueue.empty()){
                result += '#'; // If the queue is empty, there are no valid non-repeating characters, so '#' is added to the result
            } else {
                result += validCharsQueue.front(); // Append the first non-repeating character to the result
            }
        }
        
        return result;
    }
};

