#include <string>
using namespace std;

class Solution {
public:
    bool isRotated(string& s1, string& s2) {
        // Step 1: Base Case
        // If the two strings don't have the same length, one cannot be a rotation of the other.
        if (s1.size() != s2.size()) {
            return false;
        }
        
        // Step 2: Handle short strings
        // If the length is less than 2, a 2-place rotation wraps completely around,
        // so s1 and s2 must be identical to be considered valid rotations.
        if (s1.size() < 2) {
            return s1 == s2;
        }

        int n = s1.size();

        // Step 3: Generate the Anti-Clockwise Rotation (Left Shift by 2)
        // s1.substr(2) grabs everything from index 2 to the very end.
        // s1.substr(0, 2) grabs the first 2 characters (indices 0 and 1).
        string anticlockwise = s1.substr(2) + s1.substr(0, 2);

        // Step 4: Generate the Clockwise Rotation (Right Shift by 2)
        // s1.substr(n - 2) grabs the last 2 characters of the string.
        // s1.substr(0, n - 2) grabs everything from index 0 up to (but not including) the last 2 characters.
        string clockwise = s1.substr(n - 2) + s1.substr(0, n - 2);

        // Step 5: Compare and Return
        // If s2 matches either the clockwise or anti-clockwise version, return true.
        return (s2 == anticlockwise || s2 == clockwise);
    }
};
