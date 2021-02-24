//https://www.hackerrank.com/challenges/picking-numbers/problem

int pickingNumbers(vector<int> a) {
    int freqArr[100] = { 0 };
    int len = 0, sum = 0;
    for (int num : a) {
        freqArr[num] += 1;
    }

    for (int i = 1; i < 100; ++i) {
        sum = freqArr[i] + freqArr[i - 1];
        len = (sum > len) ? sum : len;
    }
    return len;
}
