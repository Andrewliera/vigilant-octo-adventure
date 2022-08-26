class Solution {
private:
    vector<int> countFreq(int n){
     vector<int> res(10);
        
        while(n){
            res[n % 10]++;
            n /= 10;
            
        }
        return res;
    };
    
public:
    bool reorderedPowerOf2(int n) {
        vector<int> arr = countFreq(n);
        for(int i = 0; i <= 30;i++){
            if(arr == countFreq(1 << i)){
                return true;
            }
        }
       return false;
    }
};
