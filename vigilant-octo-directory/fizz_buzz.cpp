

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        
        int given_number = n;
        vector<string> string_array;
        
        for(int i = 1; i <= given_number; i++){
            if(i % 3 == 0 && i % 5 == 0){
                string_array.push_back("FizzBuzz");
            }
            else if(i % 3 == 0){
                string_array.push_back("Fizz");
            }
            else if(i % 5 == 0){
                string_array.push_back("Buzz");
            }
            else{ 
                string_array.push_back(to_string(i));
                
            }
        }
        return string_array;
    }
};
