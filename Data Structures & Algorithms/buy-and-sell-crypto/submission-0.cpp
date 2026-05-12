class Solution {
public:
    int maxProfit(vector<int>& prices) {
        auto min = [](int a,int b) {return (a<=b?a:b);};
        auto max = [](int a,int b) {return (a<=b?b:a);};
        int min_n=prices[0];
        int profit_n{};

        for(int price:prices){
            min_n = min(min_n,price);
            profit_n = max(profit_n,(price-min_n));

        }
        return profit_n;
    }
};
