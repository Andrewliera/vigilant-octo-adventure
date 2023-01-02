//Compute the next permutation has a really good case analysis explenation by 'Back To Back SWE' on YT

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> nextLargestPermutation(vector<int>& input){
    
    int length = input.size();
    int pivot, temp;
    vector<int> result;
    for(pivot = length - 2; pivot >= 0; pivot-- ){
        if(input[pivot] < input[pivot + 1]){
            break;
        }
    }

    if(pivot < 0){
        reverse(input.begin(), input.end());
    }
    else{ 
        for(temp = length - 1 ; temp > pivot; temp--){
        if(input[temp] > input[pivot]){
            break;
        }
    }
    swap(input[pivot], input[temp]);
    reverse(input.begin() + pivot + 1, input.end());

    }
    return input;
};




int main(){


    vector<int> test = {4,8,9,7,5};
    vector<int> result = nextLargestPermutation(test);
    for(auto i: result){
        cout << i;
    }   
}
