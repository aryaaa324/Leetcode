class Solution {
public:
    string minWindow(string s, string t) {
        if (t.size() > s.size()) return "";

        unordered_map<char, int> need, window;
        for (char c : t) need[c]++;

        int have = 0, needCount = need.size();
        int left = 0, minLen = INT_MAX, startIdx = 0;

        for (int right = 0; right < s.size(); right++) {
            char c = s[right];
            window[c]++;
            if (need.count(c) && window[c] == need[c])
                have++;

            while (have == needCount) {
                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    startIdx = left;
                }
                window[s[left]]--;
                if (need.count(s[left]) && window[s[left]] < need[s[left]])
                    have--;
                left++;
            }
        }

        return minLen == INT_MAX ? "" : s.substr(startIdx, minLen);
    }
};
