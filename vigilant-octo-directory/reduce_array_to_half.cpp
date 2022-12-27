//greedy approach
class Solution {
public:
    int minSetSize(vector<int>& arr) {
        
        int length = arr.size();
        unordered_map<int, int> arr_freq;
        
        for(int i =0; i < length; i ++){
            arr_freq[arr[i]]++;
        }
        
        priority_queue<int> temp_heap;
        
        for(auto itr: arr_freq){
            temp_heap.push(itr.second);
        }
        
        int count = 0;
        int result = 0;
        
        while(count < length/ 2){
            result ++;
            count += temp_heap.top();
            temp_heap.pop();
        }
        return result;
    }
};
