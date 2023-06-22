#include <bits/stdc++.h>
#include <vector>
#include<iostream>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> container;
        vector<int> sol;

        for(int i=0; i<nums.size(); i++){
            int value = target - nums[i];
            if(container.find(value) != container.end()){
                sol.push_back(container[value]);
                sol.push_back(i);
                break;
            }
            else{
                container.insert({nums[i],i});
            }
        }
        return sol;
    }
};

int main(int argc, char* argv[]) {
    Solution sol;
    vector<int> nums {1,2,3};
    int target = 5;
    vector<int> sol1;
    sol1 = sol.twoSum(nums,target);
    cout<< "Solution : "<<endl;
    for(auto &it : sol1){
        cout<<it<<endl;
    }
    return 0;
}