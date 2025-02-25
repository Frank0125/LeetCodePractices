#include <iostream>
#include <string>
#include <map>
using namespace std;

#pragma region Problem Description
//Given a string s, find the length of the longest
// substring without duplicate characters.
#pragma endregion

#pragma region Constraints
/*
0 <= s.length <= 5 * 104
s consists of English letters, digits, symbols and spaces.
*/
#pragma endregion


//This problem proposes the solution in a form of a class
class Solution {
    public: 
            int lengthOfLongestSubstring (string s){
                //First Try
                //We can iterate through the string and store the characters until one
                //is repeated, then we store another one. All in a map
                // map<string, int> map;
                // for (int i = 0; i < s.length(); i++){
                //     map[s.substr(i, 1)] = i;

                // }
                //Second Try
                //Diferent Approach

                return ;
            }
        //extra function to print the map, not required in leetcode
};

int main() {
    try {
        Solution sol;
        string s = "abcabcbb";
        cout << sol.lengthOfLongestSubstring(s) << endl;
        //Expected output: 3
        string s2 = "bbbbb";
        cout << sol.lengthOfLongestSubstring(s2) << endl;
        //Expected output: 1
        string s3 = "pwwkew";
        cout << sol.lengthOfLongestSubstring(s3) << endl;
        //Expected output: 3
        return 0;
    }
    catch (std::exception& e) {
        std::cerr << "Excepción: " << e.what() << std::endl;
    } 
}