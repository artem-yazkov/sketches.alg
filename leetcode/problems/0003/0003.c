/**
 * https://leetcode.com/problems/longest-substring-without-repeating-characters/
 */

int lengthOfStartSubs(char* s)
{
    int alphabet[255] = {0};
    int ic;
    for (ic = 0; s[ic]; ic++) {
        if (alphabet[s[ic]]) {
            return ic;
        }
        alphabet[s[ic]] = 1;
    }
    return ic;
}

int lengthOfLongestSubstring(char* s) {
    int maxSubs = 0;
    for (int ic = 0; s[ic]; ic++) {
        int subs = lengthOfStartSubs(s + ic);
        if (subs > maxSubs) {
            maxSubs = subs;
        }
    }
    return maxSubs;
}
