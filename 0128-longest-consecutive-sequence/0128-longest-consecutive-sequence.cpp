class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        unordered_set<int> st(nums.begin(), nums.end());

        int longestStreak = 0;

        for (int num : st) {

            // Start only if it's the beginning of a sequence
            if (st.find(num - 1) == st.end()) {

                int currentNum = num;
                int currentStreak = 1;

                while (st.find(currentNum + 1) != st.end()) {
                    currentNum++;
                    currentStreak++;
                }

                longestStreak = max(longestStreak, currentStreak);
            }
        }

        return longestStreak;
    }
};