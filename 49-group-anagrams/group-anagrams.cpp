class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mpp;
        for(auto item :strs){
            string key=item;
            sort(key.begin(),key.end());
            mpp[key].push_back(item);
        }
        vector<vector<string>>result;
        for(auto pair:mpp){
            result.push_back(pair.second);
        }
    return result;
        
    }
};