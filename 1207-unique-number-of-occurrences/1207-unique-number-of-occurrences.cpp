class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        unordered_set<int> unq;
        for(int n : arr) mp[n]++;
        for(auto &i : mp) unq.insert(i.second);
        
        return mp.size() == unq.size();
    }
};