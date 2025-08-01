//125.valid Palindrome

/*A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, 
it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.*/

/* Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.*/

class Solution {
public:
    bool isAlphaNum(char c){
        return (c>='0' && c<='9') || (tolower(c)>='a' && tolower(c)<='z');  //don't forget tolower()
    }
    bool isPalindrome(string s) {
        int i=0, j=s.length()-1;
        while(i<j){
            while(i<j && !isAlphaNum(s[i])) i++;
            while(i<j && !isAlphaNum(s[j])) j--;
            if(tolower(s[i])!=tolower(s[j])){
                return false;
            }
            i++;   //never forget increment or decrement in while loop
            j--;
        }
        return true;
    }
};