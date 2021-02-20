class Solution {
public:
    int addDigits(int num) {
     while(num / 10)
            num = sumup(num);
        return num;
    }
    
    int sumup(int n)
    {
        int sum = 0;
        while(n)
        {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
};
