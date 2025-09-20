class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mpp;
        for(auto item :strs){
            int count[26]={0};
            for(char c :item){
                count[c-'a']++;
            }
            string key;
            for(int  i=0;i<26;i++){
                key+=to_string(count[i])+'#';
            }
            mpp[key].push_back(item);
        }
        vector<vector<string>>result;
        for(auto pair:mpp){
            result.push_back(pair.second);
        }
    return result;
        
    }
};