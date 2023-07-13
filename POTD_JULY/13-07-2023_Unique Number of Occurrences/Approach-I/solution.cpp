//User function Template for C++
class Solution
{
    public:
    bool isFrequencyUnique(int n, int arr[])
{
    unordered_map<int, int> frequencyMap, frequencyCount;
    for(int i = 0; i < n; i++)
        frequencyMap[arr[i]]++;

    // Check if the frequencies are unique
    for(auto x : frequencyMap) {
        
        // it means there is a duplicate frequency
        if(frequencyCount[x.second])
            return false;

        // Increment the count 
        frequencyCount[x.second]++;
    }
   //for unique
    return true;
}
};
