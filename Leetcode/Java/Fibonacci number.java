class Solution {
    public int fib(int n) {
        if (n == 0){
            return 0;
        }
        
        int[] array = new int[n+1];
        array[1] = 1;
        for (int i = 2; i < array.length; i++){
            array[i] = array[i-1] + array[i - 2];
        }
        return array[n];
    }
}