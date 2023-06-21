#include <bits/stdc++.h>
#include <vector>
#include<iostream>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> container;
        for(int i=0; i < nums.size() ; i++){
            if(container.find(nums[i]) != container.end()){
                return true;
            }
            container.insert(nums[i]);
        }
        return false;
    }
};

int main(int argc, char* argv[]) {
    Solution sol;
    std::vector<int> vec{1,2,3,1};
    std::cout<<sol.containsDuplicate(vec)<<std::endl;
    return 0;
}