class Solution {
public:
    int fib(int n) {
        if (n < 2){
            return n;
        }
        return fib(n - 1) + fib(n - 2);
    }
};


class Solution2 {
public:
    int term[1000];
    int fib(int n) {
        if (n < 2){
            return n;
        }
        if(term[n] != 0){
            return term[n];
        }
        else{
            term[n] = fib(n - 1) + fib(n - 2);
            return term[n];
        }
    }
};



class Solution3 {
public:
    int fib(int n) {
        int f[n + 2];
        int i;
        f[0] = 0;
        f[1] = 1;

        for(i = 2; i <= n; i++)
        {
           f[i] = f[i - 1] + f[i - 2];
        }
        return f[n];
    }
};



class Solution4 {
public:
    int fib(int n) {
        int a = 0, b = 1, c, i;
        
        if (n == 0){
            return a;
        }

        for(i = 2; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
};