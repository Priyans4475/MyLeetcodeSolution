class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
         int n = arr.size();
    std::stack<int> s;
    long res = 0;

    for (int i = 0; i < n; i++) {
        while (!s.empty() && arr[s.top()] >= arr[i]) {
            int tp = s.top();
            s.pop();
            long curr = arr[tp] * (s.empty() ? i : i - s.top()-1 );
            res = std::max(res, curr);
        }
        s.push(i);
    }

    while (!s.empty()) {
        int tp = s.top();
        s.pop();
        long curr = arr[tp] * (s.empty() ? n : n - s.top() - 1);
        res = std::max(res, curr);
    }

    return res;
    }
};