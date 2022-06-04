class Solution {
public:
    int romanToInt(string s) {
        int converted_numeral = 0;
        int string_length = s.size();
        
        for(int i = 0; i < string_length; i++){
            int temp_current = check_int(s[i]);
            int temp_next = check_int(s[i + 1]);
            
            if(i == (string_length)){
                converted_numeral += temp_current;
                return converted_numeral;
            }
            
            if(temp_current < temp_next){
                converted_numeral += (temp_next - temp_current);
                i += 1;
            }  
            else if(temp_current >= temp_next){
                converted_numeral += temp_current;
            }else{
                converted_numeral += temp_current;
            }
           
        }
        return converted_numeral;
    }
    
    int check_int(char c){
        switch(c){
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
            default : 
                return 0;
        }
    }
    
};