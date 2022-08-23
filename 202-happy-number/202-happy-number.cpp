class Solution {
public:
    int solve(int n) {
        int sum = 0;
        while(n > 0) {
            int r = n%10;
            sum += r*r;
            n /= 10;
        }
        return sum;
    }
    
    bool isHappy(int n) {
        int slow = n;
        int fast = solve(n);
        
        while(slow != fast) {
            slow = solve(slow);
            fast = solve(solve(fast));   
        }
        return slow==1;
    }
};