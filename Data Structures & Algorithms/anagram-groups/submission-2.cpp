class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //if(strs.empty()) return [[""]];

        vector<vector<string>> result;
        map<string, vector<string>> groups;

        for (const string& s : strs) {
            string key = s;
            sort(key.begin(), key.end()); 
            groups[key].push_back(s);
        }
        for (auto& [key, words] : groups) {
            result.push_back(words);
        }
        return result;
    }
};
