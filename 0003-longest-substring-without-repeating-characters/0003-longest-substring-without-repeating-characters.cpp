class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0, maxLen = 0;
        int lastSeen[256];

        fill(lastSeen, lastSeen + 256, -1);

        for (int right = 0; right < s.length(); right++) {
            char ch = s[right];

            if (lastSeen[ch] >= left) {
                left = lastSeen[ch] + 1;
            }

            lastSeen[ch] = right;
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};