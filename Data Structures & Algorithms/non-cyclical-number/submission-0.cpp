class Solution {
public:
    // 19 -> 82 -> 68 -> 100 -> 1  //if happy number = no cycle = slow ends at 1
    // 2 -> 4 -> 16 -> 37 -> 56 -> 61 -> 37 //if not happy = cycle = slow and
    // fast meets
    int square(int n){ // return sum of sq. of digits
        int ans = 0;
        while (n != 0) {
            int digit = n % 10;
            ans += digit * digit;
            n /= 10;
        }
        return ans;
    }
    bool isHappy(int n) {
        int slow = square(n);
        int fast = square(square(n));

        while (slow != fast){
            slow = square(slow);
            fast = square(square(fast));
        }
        return slow == 1;
    }
};