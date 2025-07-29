class Solution {
public:
    int climbStairs(int n) {
      if (n <= 2) return n;  // Base cases

        int a = 1, b = 2;  // ways to reach step 1 and 2
        for (int i = 3; i <= n; i++) {
            int temp = a + b;
            a = b;
            b = temp;
        }
        return b;
    }
};



//    if(n==0){
//             return 1;
//         }
//         if(n==1){
//             return 1;
//         }
//         return climbStairs(n-1)+climbStairs(n-2);