class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        
        for (char c : s) {
            freq[c]++;
        }

        vector<pair<char, int>> vec(freq.begin(), freq.end());

        sort(vec.begin(), vec.end(), [](pair<char, int>& a, pair<char, int>& b) {
            return a.second > b.second;
        });

        string result = "";
        for (auto& p : vec) {
            result += string(p.second, p.first);  
        }

        return result;
    }
};