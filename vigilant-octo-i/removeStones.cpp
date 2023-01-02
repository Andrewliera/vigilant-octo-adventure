#include <vector>
#include <algorithm>
#include <math.h>
#include <iostream>
#include<queue>

using namespace std;

int minStoneSum(vector<int>& piles, int k){

    
    priority_queue<int> heap(piles.begin(), piles.end());

    int length = piles.size();
    int remove_stone = 0;
    int new_pile = 0;
    int curr_pile_total = 0;

    for (int i = 0; i <length; i++)
    {
        curr_pile_total += piles[i];
    }
    
    for (int i = 0; i < k; i++){
        int curr_top = heap.top();
        heap.pop();
        remove_stone = curr_top / 2;
        curr_pile_total -= remove_stone;
        new_pile = curr_top - remove_stone;
        heap.push(new_pile);

    }
    
    return curr_pile_total;

};

int main(){

    vector<int> piles = {5,4,9};
    int k = 2;
    int result = minStoneSum(piles, k); 

    cout << result;

}