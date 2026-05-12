class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size()-1;
        auto sum = [](int a,int b){return a+b;};
        
        while(i<j)
        {
            int sum_n = sum(numbers[i],numbers[j]);
            if( sum_n == target)
            {
                return {i+1,j+1};
            }else if(sum_n>target){
                j--;
            }else{
                i++;
            }
        }
         return {};

    }
};
