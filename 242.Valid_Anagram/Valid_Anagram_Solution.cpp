#include <bits/stdc++.h>
#include <vector>
#include<iostream>
class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        if(s.size() != t.size()){
            return false;
        }

        std::unordered_map<char,int> s_container;
        std::unordered_map<char,int> t_container;

        for(int i=0; i < s.size(); i++){
            s_container[s[i]]++;
            t_container[t[i]]++;
        }

        for(int j = 0; j < s_container.size(); j++){
            if(s_container[j] != t_container[j]){
                return false;
            }
        }
        return true;
    }
};

int main(int argc, char* argv[]) {
    Solution sol;
    std::string a = "anagram";
    std::string b = "nagaram";
    std::cout<<sol.isAnagram(a,b)<<std::endl;
    return 0;
}