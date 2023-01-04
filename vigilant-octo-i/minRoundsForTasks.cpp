#include <map>
#include <vector>
using namespace std;
/*
this is a borrowed explenation that i needed from leet code Discussion on why we need 
(task_count + 2 )/ 3
If the frequency is directly divided by 3, then we return the frequency/3.
If the remainder of dividing the number by 3 is 1 or 2 then, again there can be two cases:
If remainder is 1, i.e, lets take 7 frequency, then o o o o o o o the groups are something 
like this "ooo" "ooo" "o", i.e, one o is left alone so the solution is to break the second last group into two parts of 2 and 1 
so that it becomes like: "ooo" "oo" "oo", i.e, one is added to the division by 3.
If remainder is 2, i.e, lets take 8 frequency, then o o o o o o o o 
the groups are something like this "ooo" "ooo" "oo", i.e, two o are left so the solution is to just add 1,
i.e, one group of two to the solution.
*/

class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        
        int result = 0;
        map<int, int> temp_map;

        for(auto count : tasks){
            temp_map[count]++;
        }

        for(auto [task, count] : temp_map){
            if(count == 1){
                return -1;
            }
            else{
                result += (count + 2)/ 3;    
            }
        }
        return result;

        
    }
};