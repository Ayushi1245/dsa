class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {

        // linear search approach
    //   for(int i = 0; i<letters.size(); i++){
    //         if(letters[i]>target) return letters[i];
    //     }
    //     return letters[0];


    // Binary search
    int left = 0;
        int right = letters.size() - 1;

        if (target >= letters[right]) {
            return letters[0];
        }

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (letters[mid] > target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return letters[left];
    }
};