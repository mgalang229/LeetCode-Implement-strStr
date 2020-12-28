class Solution {
public:
    int strStr(string haystack, string needle) {
        if (haystack == "" && needle == "") {
            // return zero if both haystack and needle are empty
            return 0;
        } else if (needle == "") {
            //also, return zero if needle is empty
            return 0;
        } else if(haystack == "") {
            //return negative one if haystack is empty
            return -1;
        }
        // if the 'needle' string is in the 'haystack', then return the index
        for (int i = 0; i < (int) haystack.size(); i++) {
            if (haystack.substr(i, needle.size()) == needle) {
                return i;
            }
        }
        // otherwise, return negative one
        return -1;
    }
};
