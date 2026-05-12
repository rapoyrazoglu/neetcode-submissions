class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size()-1;
        std::vector<int> result;
        auto sum = [](int a,int b){return a+b;};
        
        while(i<j)
        {
            int sum_n = sum(numbers[i],numbers[j]);
            if( sum_n == target)
            {
                result.push_back(i+1);
                result.push_back(j+1);
                return result;
            }else if(sum_n>target){
                j--;
            }else{
                i++;
            }
        }
         return result;

    }
};
