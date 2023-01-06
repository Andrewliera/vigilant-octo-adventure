class solution{

public:
    int macIceCream(vector<int>& costs, int coins){

        int icecream_count = 0;
        int current_index;
        int length = costs.size();

        sort(costs.begin(), costs.end());

        for(int i = 0; i < length ; i++){

            current_index = costs[i];

            if(coins <= 0 || coins <= current_index){
                break;
            }

            coins -= current_index;
            icecream_count++;

        }
        return icecream_count;
    }



};