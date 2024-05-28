class Solution {
public:
    void reverseString(vector<char>& s) {
        int left=0;
        int right=s.size()-1;
        while(right>left){
            // char temp=s[left];
            // s[left++]=s[right];
            // s[right--]=temp;
            swap(s[left],s[right]);
            left++;
            right--;

        }
    }
};