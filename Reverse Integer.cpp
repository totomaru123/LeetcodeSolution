class Solution {
public:
    int reverse(int x) {
        vector<int> Avec(10);
        int i = 0;
        for ( ; abs(x)>=1; i++ ) {
            Avec [i] = x % 10;
            x = x / 10;
        }
        int index = 0;
        int64_t S=0;
        for (; i>0 ;) {
              S = S+pow(10,i-1)*Avec[index];
            i--;
            index++;
            }
        if ((S > 2147483647) || (S < -2147483647))
            return 0;
        else
            return S;
    }
};